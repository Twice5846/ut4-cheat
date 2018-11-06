// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------

// ===== Platform includes =====
#include <Windows.h>
#include <tlhelp32.h>
#include <Psapi.h>
#include <vector>

// ===== Project includes =====
#include "manager.h"

Manager manager;


// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
Manager::Manager() :
	Module(new Game(GetMainThreadID())),
	draw_hud_detour_(nullptr),
	tick_detour_(nullptr),
	esp_(nullptr),
	aimbot_(nullptr)
{

}

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
Manager::~Manager()
{

}

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
void Manager::Startup()
{
	while (!game_->GetLocalHUD()) {
		Sleep(100);
	}

	draw_hud_detour_ = new DrawHUDDetour(game_->GetLocalHUD());
	tick_detour_ = new TickDetour(game_->GetLocalController());

	draw_hud_detour_->Install();
	tick_detour_->Install();

	esp_ = new ESP(game_);
	aimbot_ = new Aimbot(game_);
}

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
void Manager::Shutdown()
{
	if (draw_hud_detour_) {
		draw_hud_detour_->Remove();

		delete draw_hud_detour_;

		draw_hud_detour_ = nullptr;
	}

	if (tick_detour_) {
		tick_detour_->Remove();

		delete tick_detour_;

		tick_detour_ = nullptr;
	}

	if (esp_) {
		delete esp_;

		esp_ = nullptr;
	}

	if (aimbot_) {
		delete aimbot_;

		aimbot_ = nullptr;
	}

	if (game_) {
		delete game_;

		game_ = nullptr;
	}
}

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
void Manager::Render()
{
	if (esp_) {
		esp_->Render();
	}

	if (aimbot_) {
		aimbot_->Render();
	}
}

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
void Manager::ClientCommand()
{
	if (esp_) {
		esp_->ClientCommand();
	}

	if (aimbot_) {
		aimbot_->ClientCommand();
	}
}

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
bool Manager::EnumerateThreadIDs(std::vector<DWORD>& thread_ids)
{
	// 
	thread_ids.clear();

	// Take a snapshot of all running threads  
	HANDLE thread_snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPTHREAD, GetCurrentProcessId()); 
	if (thread_snapshot == INVALID_HANDLE_VALUE) {
		return false;
	}

	// Fill in the size of the structure before using it. 
	THREADENTRY32 thread_entry; 
	thread_entry.dwSize = sizeof(thread_entry); 

	// Retrieve information about the first thread,
	// and exit if unsuccessful
	if(Thread32First(thread_snapshot, &thread_entry)) {
		do {
			thread_ids.push_back(thread_entry.th32ThreadID);
		} while(Thread32Next(thread_snapshot, &thread_entry));
	}

	// 
	if (!CloseHandle(thread_snapshot)) {
		return false;
	}

	// 
	return true;
}

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
BYTE* Manager::GetThreadEntryPoint(DWORD thread_id)
{
	// 
	BYTE* address_NtQueryInformationThread = (BYTE*)GetProcAddress(GetModuleHandleA("ntdll.dll"), "NtQueryInformationThread");
	if (!address_NtQueryInformationThread) {
		return nullptr;
	}

	// 
	HANDLE thread_handle = OpenThread(THREAD_QUERY_INFORMATION, FALSE, thread_id);
	if (!thread_handle) {
		return nullptr;
	}

	//
	BYTE* start_address = 0;

	// 
	long error = ((long (__stdcall *)(HANDLE, long, void*, DWORD, DWORD*))address_NtQueryInformationThread)(thread_handle, 9, &start_address, sizeof(start_address), nullptr);
	
	// 
	CloseHandle(thread_handle);

	// 
	if (error) {
		return nullptr;
	}

	// 
	return start_address;
}

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
BYTE* Manager::GetProcessEntryPoint()
{
	// 
	MODULEINFO module_info;
	if (!GetModuleInformation(GetCurrentProcess(), GetModuleHandle(nullptr), &module_info, sizeof(module_info))) {
		return 0;
	}

	return (BYTE*)module_info.EntryPoint;
}

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
DWORD Manager::GetMainThreadID()
{
	static DWORD main_thread_id = 0;
	if (main_thread_id != 0) {
		return main_thread_id;
	}

	std::vector<DWORD> thread_ids;
	if (!EnumerateThreadIDs(thread_ids)) {
		return 0;
	}

	for (auto it = thread_ids.begin(); it != thread_ids.end(); it++) {
		if (GetProcessEntryPoint() == GetThreadEntryPoint(*it)) {
			main_thread_id = *it;

			return *it;
		}
	}

	return 0;
}

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
void Manager::SuspendMainThread()
{
	std::vector< DWORD > thread_ids;
	if (!EnumerateThreadIDs(thread_ids)) {
		return;
	}
		

	for (auto it = thread_ids.begin(); it != thread_ids.end(); it++) {
		if (GetCurrentThreadId() == *it || GetMainThreadID() != *it) {
			continue;
		}

		HANDLE thread_handle = OpenThread(THREAD_SUSPEND_RESUME, FALSE, *it);
		if (thread_handle == nullptr) {
			continue;
		}

		SuspendThread(thread_handle);

		CloseHandle(thread_handle);
	}
}

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
void Manager::ResumeMainThread()
{
	std::vector< DWORD > thread_ids;
	if (!EnumerateThreadIDs(thread_ids)) {
		return;
	}

	for (auto it = thread_ids.begin(); it != thread_ids.end(); it++) {
		if (GetCurrentThreadId() == *it || GetMainThreadID() != *it) {
			continue;
		}

		HANDLE thread_handle = OpenThread(THREAD_SUSPEND_RESUME, FALSE, *it);
		if (thread_handle == nullptr) {
			continue;
		}

		ResumeThread(thread_handle);

		CloseHandle(thread_handle);
	}
}

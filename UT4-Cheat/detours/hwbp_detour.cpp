// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------

// ===== Project includes =====
#include "hwbp_detour.h"


namespace detours
{

#ifdef _WIN64
DWORD64		PointerCast(void* ptr) { return (DWORD64)ptr; }
#else
DWORD		PointerCast(void* ptr) { return (DWORD)ptr; }
#endif

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
HWBPDetour::HWBPDetour(DWORD thread_id, ADDRESS address, DWORD size) :
	ExceptionDetour(address, size),
	breakpoint_thread_id_(thread_id)
{

}

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
HWBPDetour::~HWBPDetour()
{

}

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
bool HWBPDetour::Install()
{
	// Don't install twice.
	if (is_installed_) {
		return false;
	}

	// Try to open thread. Its ID was originally passed into the constructor.
	HANDLE thread = OpenThread(THREAD_GET_CONTEXT | THREAD_SET_CONTEXT, FALSE, breakpoint_thread_id_);
	if (!thread) {
		printf("[HWBPDetour::Install] OpenThread(0x%08X) failed!\n", breakpoint_thread_id_);
		return false;
	}

	// Try to grab current context of thread.
	CONTEXT context = { CONTEXT_DEBUG_REGISTERS };
	if (!GetThreadContext(thread, &context)) {
		printf("[HWBPDetour::Install] GetThreadContext failed!\n");
		return false;
	}

	// This will try to enable the next free hardware breakpoint.
	if (!(context.Dr7 & 0x00000001)) {
		context.Dr0 = PointerCast(address_detour_);
		context.Dr7 |= 0x00000001;
	} else if (!(context.Dr7 & 0x00000004)) {
		context.Dr1 = PointerCast(address_detour_);
		context.Dr7 |= 0x00000004;
	} else if (!(context.Dr7 & 0x00000010)) {
		context.Dr2 = PointerCast(address_detour_);
		context.Dr7 |= 0x00000010;
	} else if (!(context.Dr7 & 0x00000040)) {
		context.Dr3 = PointerCast(address_detour_);
		context.Dr7 |= 0x00000040;
	} else {
		printf("[HWBPDetour::Install] All debug registers occupied!\n");
		return false;
	}
	
	// Try to set the modified thread context.
	if (!SetThreadContext(thread, &context)) {
		printf("[HWBPDetour::Install] SetThreadContext failed!\n");
		return false;
	}

	// Close thread.
	if (!CloseHandle(thread)) {
		printf("[HWBPDetour::Install] CloseHandle failed!\n");
		return false;
	}

	// Mark this detour as uninstalled.
	is_installed_ = true;

	// Everything's okay.
	return true;
}

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
bool HWBPDetour::Remove()
{
	// Only installed detours can be removed.
	if (!is_installed_) {
		return false;
	}

	// Try to open thread. Its ID was originally passed into the constructor.
	HANDLE thread = OpenThread(THREAD_GET_CONTEXT | THREAD_SET_CONTEXT, FALSE, breakpoint_thread_id_);
	if (!thread) {
		return false;
	}

	// Try to grab current context of thread.
	CONTEXT context = { CONTEXT_DEBUG_REGISTERS };
	if (!GetThreadContext(thread, &context)) {
		return false;
	}

	// This will try to enable the next free hardware breakpoint.
	if (context.Dr7 & 0x00000001 && context.Dr0 == PointerCast(address_detour_)) {
		context.Dr0 = 0;
		context.Dr7 &= ~0x00000001;
	} else if (context.Dr7 & 0x00000004 && context.Dr1 == PointerCast(address_detour_)) {
		context.Dr1 = 0;
		context.Dr7 &= ~0x00000004;
	} else if (context.Dr7 & 0x00000010 && context.Dr2 == PointerCast(address_detour_)) {
		context.Dr2 = 0;
		context.Dr7 &= ~0x00000010;
	} else if (context.Dr7 & 0x00000040 && context.Dr3 == PointerCast(address_detour_)) {
		context.Dr3 = 0;
		context.Dr7 &= ~0x00000040;
	} else {
		return false;
	}

	// Try to set the modified thread context.
	if (!SetThreadContext(thread, &context)) {
		return false;
	}

	// Close thread.
	if (!CloseHandle(thread)) {
		return false;
	}

	// Mark this detour as uninstalled.
	is_installed_ = false;

	// Everything's okay.
	return true;
}

}

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------

// ===== Project includes =====
#include "exception_detour.h"


namespace detours
{

// ===== Define externs / statics =====
void* ExceptionDetour::vectored_exception_handler_handle = nullptr;

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
ExceptionDetour::ExceptionDetour(BYTE* address, DWORD size) :
	TrampolineDetour(address, size)
{

}

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
ExceptionDetour::~ExceptionDetour()
{

}

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
bool ExceptionDetour::EnableExceptionDetours()
{
	if (ExceptionDetour::vectored_exception_handler_handle) {
		return false;
	}

	ExceptionDetour::vectored_exception_handler_handle = AddVectoredExceptionHandler(TRUE, ExceptionDetour::VectoredExceptionHandler);

	return ExceptionDetour::vectored_exception_handler_handle;
}

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
bool ExceptionDetour::DisableExceptionDetours( )
{
	if (!ExceptionDetour::vectored_exception_handler_handle) {
		return false;
	}
		
	return RemoveVectoredExceptionHandler(ExceptionDetour::vectored_exception_handler_handle);
}

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
long __stdcall ExceptionDetour::VectoredExceptionHandler(EXCEPTION_POINTERS* exception_pointers)
{
	bool detour_found = false;
	if (exception_pointers->ExceptionRecord->ExceptionCode == EXCEPTION_SINGLE_STEP) {
		for (auto it = Detour::detour_list.begin(); it != Detour::detour_list.end(); it++) {
			auto exception_detour = dynamic_cast<ExceptionDetour*>(*it);
			if (!exception_detour) {
				continue;
			}

			if (exception_detour->is_installed_ && exception_detour->address_detour_ == exception_pointers->ExceptionRecord->ExceptionAddress) {
				if (exception_detour->OnBeforeExeceution(exception_pointers->ContextRecord)) {
					exception_detour->ExecuteOriginal(exception_pointers->ContextRecord);

					exception_detour->OnAfterExeceution(exception_pointers->ContextRecord);
				}

				detour_found = true;
			}
		}
	}

	if (detour_found) {
		return EXCEPTION_CONTINUE_EXECUTION;
	} else {
		return EXCEPTION_CONTINUE_SEARCH;
	}
}

}

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------

#pragma once

// ===== Platform includes =====
#include <Windows.h>
#include <vector>

// ===== Project includes =====
#include "trampoline_detour.h"


namespace detours
{

class ExceptionDetour : public TrampolineDetour
{
public:

	// Constructor & Destructor
	ExceptionDetour(BYTE* address, DWORD size);
	~ExceptionDetour( );

	// 
	static bool			EnableExceptionDetours();

	// 
	static bool			DisableExceptionDetours();

	// Call original method
	virtual void		ExecuteOriginal(void* data) = 0;

	// Callback before original method was called.
	virtual bool		OnBeforeExeceution(void* data) = 0;

	// Callback after original method was called.
	virtual void		OnAfterExeceution(void* data) = 0;

private:

	// 
	static long __stdcall	VectoredExceptionHandler(EXCEPTION_POINTERS* exception_pointers);

	// Handle returned by AddVectoredExceptionHandler.
	static void*			vectored_exception_handler_handle;
};

}

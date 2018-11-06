// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------

#pragma once

// ===== Platform includes =====
#include <Windows.h>

// ===== Project includes =====
#include "detour.h"


namespace detours
{

class TrampolineDetour : public Detour
{
public:

	// Constructor & Destructor
	TrampolineDetour(BYTE* address, DWORD size);
	~TrampolineDetour();

	// Install this detour.
	virtual bool		Install() = 0;

	// Remove this detour.
	virtual bool		Remove() = 0;

protected:

	// Takes [size] bytes from address and creates a codecave with it.
	BYTE*				CreateTrampoline(BYTE* address, DWORD size);

	// Address on which this detour was created.
	BYTE*				address_detour_;

	// Address that holds original code to continue program.
	BYTE*				address_trampoline_;

	// How many opcodes where cut from address_detour_origin.
	DWORD				detour_size_;
};

}

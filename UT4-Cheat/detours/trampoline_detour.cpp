// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------

// ===== Project includes =====
#include "trampoline_detour.h"


namespace detours
{

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
TrampolineDetour::TrampolineDetour(BYTE* address, DWORD size) :
	address_detour_(address),
	address_trampoline_(CreateTrampoline(address, size)),
	detour_size_(size)
{

}

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
TrampolineDetour::~TrampolineDetour()
{

}

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
BYTE* TrampolineDetour::CreateTrampoline(BYTE* address, DWORD size)
{
	// Allocate space for the trampoline.
	BYTE* codecave = (BYTE*)VirtualAlloc(nullptr, size, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);

	// Make sure space allocation succeeded.
	if (codecave == nullptr) {
		return nullptr;
	}

	// Calculate jump distance
	DWORD opcode_distance = address - codecave - 5;

	// Copy original codecave into codecave.
	memcpy(codecave, address, size);

	// Write the jump opcode.
	codecave[size] = 0xE9;

	// Write the jump distance.
	memcpy(&codecave[size + 1], &opcode_distance, 4);

	// Return result.
	return codecave;
}

}

// ----------------------------------------------------------------------------
// Class to detour any address inside the game to another one.
// ----------------------------------------------------------------------------

#pragma once

// ===== Project includes =====
#include "../vmt_detour.h"
#include "../../game.h"


namespace detours
{

class TickDetour : public VMTDetour
{
public:

	// Constructor & Destructor
	TickDetour(UObject* object);
	~TickDetour();

protected:

	static void __fastcall MyTick(UObject* this_ptr, float delta_seconds);

	static ADDRESS original_method_address;
};

}

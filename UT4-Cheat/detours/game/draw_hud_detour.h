// ----------------------------------------------------------------------------
// Class to detour any address inside the game to another one.
// ----------------------------------------------------------------------------

#pragma once

// ===== Project includes =====
#include "../vmt_detour.h"
#include "../../game.h"


namespace detours
{

class DrawHUDDetour : public VMTDetour
{
public:

	// Constructor & Destructor
	DrawHUDDetour(UObject* object);
	~DrawHUDDetour();

protected:

	static void __fastcall MyDrawHUD(AUTHUD* thisPtr);

	static ADDRESS original_method_address;
};

}

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------

// ===== Project includes =====
#include "tick_detour.h"
#include "../../manager.h"


namespace detours
{

ADDRESS TickDetour::original_method_address = nullptr;

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
TickDetour::TickDetour(UObject* object) :
	VMTDetour(object, 124, (ADDRESS)TickDetour::MyTick)
{
	TickDetour::original_method_address = method_address_;
}

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
TickDetour::~TickDetour()
{

}

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
void __fastcall TickDetour::MyTick(UObject* this_ptr, float delta_seconds)
{
	((void(__fastcall*)(UObject*, float))TickDetour::original_method_address)(this_ptr, delta_seconds);

	manager.ClientCommand();
}

}

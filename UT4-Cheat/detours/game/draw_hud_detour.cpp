// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------

// ===== Project includes =====
#include "draw_hud_detour.h"
#include "../../manager.h"


namespace detours
{

ADDRESS DrawHUDDetour::original_method_address = nullptr;

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
DrawHUDDetour::DrawHUDDetour(UObject* object) :
	VMTDetour(object, 199, (ADDRESS)DrawHUDDetour::MyDrawHUD)
{
	DrawHUDDetour::original_method_address = method_address_;
}

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
DrawHUDDetour::~DrawHUDDetour()
{

}

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
void __fastcall DrawHUDDetour::MyDrawHUD(AUTHUD* this_ptr)
{
	((void(__fastcall*)(AUTHUD*))DrawHUDDetour::original_method_address)(this_ptr);

	manager.Render();
}

}

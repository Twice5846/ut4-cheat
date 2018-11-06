// Unreal Tournament 4 (Pre Alpha) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Shock_Rifle_1p_animBP.Shock_Rifle_1p_animBP_C.ExecuteUbergraph_Shock_Rifle_1p_animBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UShock_Rifle_1p_animBP_C::ExecuteUbergraph_Shock_Rifle_1p_animBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shock_Rifle_1p_animBP.Shock_Rifle_1p_animBP_C.ExecuteUbergraph_Shock_Rifle_1p_animBP");

	UShock_Rifle_1p_animBP_C_ExecuteUbergraph_Shock_Rifle_1p_animBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

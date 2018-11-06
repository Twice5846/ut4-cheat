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

// Function Sniper_Rifle_1p_animBP.Sniper_Rifle_1p_animBP_C.ExecuteUbergraph_Sniper_Rifle_1p_animBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USniper_Rifle_1p_animBP_C::ExecuteUbergraph_Sniper_Rifle_1p_animBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sniper_Rifle_1p_animBP.Sniper_Rifle_1p_animBP_C.ExecuteUbergraph_Sniper_Rifle_1p_animBP");

	USniper_Rifle_1p_animBP_C_ExecuteUbergraph_Sniper_Rifle_1p_animBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

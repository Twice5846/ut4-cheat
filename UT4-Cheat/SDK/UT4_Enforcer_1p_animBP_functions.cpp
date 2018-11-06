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

// Function Enforcer_1p_animBP.Enforcer_1p_animBP_C.ExecuteUbergraph_Enforcer_1p_animBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEnforcer_1p_animBP_C::ExecuteUbergraph_Enforcer_1p_animBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_1p_animBP.Enforcer_1p_animBP_C.ExecuteUbergraph_Enforcer_1p_animBP");

	UEnforcer_1p_animBP_C_ExecuteUbergraph_Enforcer_1p_animBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

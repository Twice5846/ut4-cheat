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

// Function Enforcer_AnimBP.Enforcer_AnimBP_C.ExecuteUbergraph_Enforcer_AnimBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEnforcer_AnimBP_C::ExecuteUbergraph_Enforcer_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_AnimBP.Enforcer_AnimBP_C.ExecuteUbergraph_Enforcer_AnimBP");

	UEnforcer_AnimBP_C_ExecuteUbergraph_Enforcer_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

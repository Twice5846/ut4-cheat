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

// Function Shock_AnimBP_1p.Shock_AnimBP_1p_C.ExecuteUbergraph_Shock_AnimBP_1p
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UShock_AnimBP_1p_C::ExecuteUbergraph_Shock_AnimBP_1p(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shock_AnimBP_1p.Shock_AnimBP_1p_C.ExecuteUbergraph_Shock_AnimBP_1p");

	UShock_AnimBP_1p_C_ExecuteUbergraph_Shock_AnimBP_1p_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

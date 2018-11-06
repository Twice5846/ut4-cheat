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

// Function Flak_AnimBP.Flak_AnimBP_C.ExecuteUbergraph_Flak_AnimBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UFlak_AnimBP_C::ExecuteUbergraph_Flak_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Flak_AnimBP.Flak_AnimBP_C.ExecuteUbergraph_Flak_AnimBP");

	UFlak_AnimBP_C_ExecuteUbergraph_Flak_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function BioRifle_AnimBP.BioRifle_AnimBP_C.ExecuteUbergraph_BioRifle_AnimBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBioRifle_AnimBP_C::ExecuteUbergraph_BioRifle_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BioRifle_AnimBP.BioRifle_AnimBP_C.ExecuteUbergraph_BioRifle_AnimBP");

	UBioRifle_AnimBP_C_ExecuteUbergraph_BioRifle_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

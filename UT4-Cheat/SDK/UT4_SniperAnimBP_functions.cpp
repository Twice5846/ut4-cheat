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

// Function SniperAnimBP.SniperAnimBP_C.ExecuteUbergraph_SniperAnimBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USniperAnimBP_C::ExecuteUbergraph_SniperAnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SniperAnimBP.SniperAnimBP_C.ExecuteUbergraph_SniperAnimBP");

	USniperAnimBP_C_ExecuteUbergraph_SniperAnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function MiniGun_1p_AnimBP.MiniGun_1p_AnimBP_C.ExecuteUbergraph_MiniGun_1p_AnimBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UMiniGun_1p_AnimBP_C::ExecuteUbergraph_MiniGun_1p_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniGun_1p_AnimBP.MiniGun_1p_AnimBP_C.ExecuteUbergraph_MiniGun_1p_AnimBP");

	UMiniGun_1p_AnimBP_C_ExecuteUbergraph_MiniGun_1p_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function LinkGun_1p_animBP.LinkGun_1p_animBP_C.ExecuteUbergraph_LinkGun_1p_animBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULinkGun_1p_animBP_C::ExecuteUbergraph_LinkGun_1p_animBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LinkGun_1p_animBP.LinkGun_1p_animBP_C.ExecuteUbergraph_LinkGun_1p_animBP");

	ULinkGun_1p_animBP_C_ExecuteUbergraph_LinkGun_1p_animBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function LinkGun_Anim_BP.LinkGun_Anim_BP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (Parm, ZeroConstructor, IsPlainOldData)

void ULinkGun_Anim_BP_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function LinkGun_Anim_BP.LinkGun_Anim_BP_C.BlueprintUpdateAnimation");

	ULinkGun_Anim_BP_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LinkGun_Anim_BP.LinkGun_Anim_BP_C.ExecuteUbergraph_LinkGun_Anim_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULinkGun_Anim_BP_C::ExecuteUbergraph_LinkGun_Anim_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LinkGun_Anim_BP.LinkGun_Anim_BP_C.ExecuteUbergraph_LinkGun_Anim_BP");

	ULinkGun_Anim_BP_C_ExecuteUbergraph_LinkGun_Anim_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

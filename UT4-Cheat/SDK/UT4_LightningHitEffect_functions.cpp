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

// Function LightningHitEffect.LightningHitEffect_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ALightningHitEffect_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function LightningHitEffect.LightningHitEffect_C.UserConstructionScript");

	ALightningHitEffect_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

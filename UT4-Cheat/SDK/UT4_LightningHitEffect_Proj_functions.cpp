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

// Function LightningHitEffect_Proj.LightningHitEffect_Proj_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ALightningHitEffect_Proj_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function LightningHitEffect_Proj.LightningHitEffect_Proj_C.UserConstructionScript");

	ALightningHitEffect_Proj_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

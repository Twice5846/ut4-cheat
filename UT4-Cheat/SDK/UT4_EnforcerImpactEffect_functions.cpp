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

// Function EnforcerImpactEffect.EnforcerImpactEffect_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AEnforcerImpactEffect_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnforcerImpactEffect.EnforcerImpactEffect_C.UserConstructionScript");

	AEnforcerImpactEffect_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

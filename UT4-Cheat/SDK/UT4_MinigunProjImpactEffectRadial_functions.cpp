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

// Function MinigunProjImpactEffectRadial.MinigunProjImpactEffectRadial_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMinigunProjImpactEffectRadial_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigunProjImpactEffectRadial.MinigunProjImpactEffectRadial_C.UserConstructionScript");

	AMinigunProjImpactEffectRadial_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

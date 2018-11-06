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

// Function FX_RocketExplosion.FX_RocketExplosion_C.ComponentCreated
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USceneComponent**        NewComp                        (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    HitComp                        (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 SpawnedBy                      (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FImpactEffectNamedParameters* EffectParams                   (Parm)

void AFX_RocketExplosion_C::ComponentCreated(class USceneComponent** NewComp, class UPrimitiveComponent** HitComp, class AActor** SpawnedBy, class AController** InstigatedBy, struct FImpactEffectNamedParameters* EffectParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function FX_RocketExplosion.FX_RocketExplosion_C.ComponentCreated");

	AFX_RocketExplosion_C_ComponentCreated_Params params;
	params.NewComp = NewComp;
	params.HitComp = HitComp;
	params.SpawnedBy = SpawnedBy;
	params.InstigatedBy = InstigatedBy;
	params.EffectParams = EffectParams;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FX_RocketExplosion.FX_RocketExplosion_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AFX_RocketExplosion_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function FX_RocketExplosion.FX_RocketExplosion_C.UserConstructionScript");

	AFX_RocketExplosion_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

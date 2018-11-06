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

// Function BP_LightningRifle_Proj.BP_LightningRifle_Proj_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_LightningRifle_Proj_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightningRifle_Proj.BP_LightningRifle_Proj_C.UserConstructionScript");

	ABP_LightningRifle_Proj_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightningRifle_Proj.BP_LightningRifle_Proj_C.DamageImpactedActor
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitLocation                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector*                HitNormal                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ABP_LightningRifle_Proj_C::DamageImpactedActor(class AActor** OtherActor, class UPrimitiveComponent** OtherComp, struct FVector* HitLocation, struct FVector* HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightningRifle_Proj.BP_LightningRifle_Proj_C.DamageImpactedActor");

	ABP_LightningRifle_Proj_C_DamageImpactedActor_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightningRifle_Proj.BP_LightningRifle_Proj_C.ExecuteUbergraph_BP_LightningRifle_Proj
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_LightningRifle_Proj_C::ExecuteUbergraph_BP_LightningRifle_Proj(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightningRifle_Proj.BP_LightningRifle_Proj_C.ExecuteUbergraph_BP_LightningRifle_Proj");

	ABP_LightningRifle_Proj_C_ExecuteUbergraph_BP_LightningRifle_Proj_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

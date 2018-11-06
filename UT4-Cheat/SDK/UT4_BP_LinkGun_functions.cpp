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

// Function BP_LinkGun.BP_LinkGun_C.GetAISelectRating
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_LinkGun_C::GetAISelectRating()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGun.BP_LinkGun_C.GetAISelectRating");

	ABP_LinkGun_C_GetAISelectRating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_LinkGun.BP_LinkGun_C.CanAttack
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Target                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                TargetLoc                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool*                          bDirectOnly                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bPreferCurrentMode             (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  BestFireMode                   (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 OptimalTargetLoc               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_LinkGun_C::CanAttack(class AActor** Target, struct FVector* TargetLoc, bool* bDirectOnly, bool* bPreferCurrentMode, unsigned char* BestFireMode, struct FVector* OptimalTargetLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGun.BP_LinkGun_C.CanAttack");

	ABP_LinkGun_C_CanAttack_Params params;
	params.Target = Target;
	params.TargetLoc = TargetLoc;
	params.bDirectOnly = bDirectOnly;
	params.bPreferCurrentMode = bPreferCurrentMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BestFireMode != nullptr)
		*BestFireMode = params.BestFireMode;
	if (OptimalTargetLoc != nullptr)
		*OptimalTargetLoc = params.OptimalTargetLoc;

	return params.ReturnValue;
}


// Function BP_LinkGun.BP_LinkGun_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_LinkGun_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGun.BP_LinkGun_C.UserConstructionScript");

	ABP_LinkGun_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGun.BP_LinkGun_C.PlayImpactEffects
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                TargetLoc                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// unsigned char*                 FireMode                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                SpawnLocation                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator*               SpawnRotation                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ABP_LinkGun_C::PlayImpactEffects(struct FVector* TargetLoc, unsigned char* FireMode, struct FVector* SpawnLocation, struct FRotator* SpawnRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGun.BP_LinkGun_C.PlayImpactEffects");

	ABP_LinkGun_C_PlayImpactEffects_Params params;
	params.TargetLoc = TargetLoc;
	params.FireMode = FireMode;
	params.SpawnLocation = SpawnLocation;
	params.SpawnRotation = SpawnRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGun.BP_LinkGun_C.DetachFromOwner
// (Event, Public, BlueprintEvent)

void ABP_LinkGun_C::DetachFromOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGun.BP_LinkGun_C.DetachFromOwner");

	ABP_LinkGun_C_DetachFromOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGun.BP_LinkGun_C.StopFiringEffects
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_LinkGun_C::StopFiringEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGun.BP_LinkGun_C.StopFiringEffects");

	ABP_LinkGun_C_StopFiringEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGun.BP_LinkGun_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_LinkGun_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGun.BP_LinkGun_C.ReceiveTick");

	ABP_LinkGun_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGun.BP_LinkGun_C.FiringInfoUpdated
// (Event, Public, BlueprintEvent)
// Parameters:
// unsigned char*                 InFireMode                     (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 FlashCount                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                InFlashLocation                (Parm, ZeroConstructor, IsPlainOldData)

void ABP_LinkGun_C::FiringInfoUpdated(unsigned char* InFireMode, unsigned char* FlashCount, struct FVector* InFlashLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGun.BP_LinkGun_C.FiringInfoUpdated");

	ABP_LinkGun_C_FiringInfoUpdated_Params params;
	params.InFireMode = InFireMode;
	params.FlashCount = FlashCount;
	params.InFlashLocation = InFlashLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGun.BP_LinkGun_C.ExecuteUbergraph_BP_LinkGun
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_LinkGun_C::ExecuteUbergraph_BP_LinkGun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGun.BP_LinkGun_C.ExecuteUbergraph_BP_LinkGun");

	ABP_LinkGun_C_ExecuteUbergraph_BP_LinkGun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

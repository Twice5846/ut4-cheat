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

// Function BP_LightningRifle.BP_LightningRifle_C.CanAttack
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Target                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                TargetLoc                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool*                          bDirectOnly                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bPreferCurrentMode             (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  BestFireMode                   (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 OptimalTargetLoc               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_LightningRifle_C::CanAttack(class AActor** Target, struct FVector* TargetLoc, bool* bDirectOnly, bool* bPreferCurrentMode, unsigned char* BestFireMode, struct FVector* OptimalTargetLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightningRifle.BP_LightningRifle_C.CanAttack");

	ABP_LightningRifle_C_CanAttack_Params params;
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


// Function BP_LightningRifle.BP_LightningRifle_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_LightningRifle_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightningRifle.BP_LightningRifle_C.UserConstructionScript");

	ABP_LightningRifle_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightningRifle.BP_LightningRifle_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_LightningRifle_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightningRifle.BP_LightningRifle_C.ReceiveBeginPlay");

	ABP_LightningRifle_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightningRifle.BP_LightningRifle_C.TipArc
// (BlueprintCallable, BlueprintEvent)

void ABP_LightningRifle_C::TipArc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightningRifle.BP_LightningRifle_C.TipArc");

	ABP_LightningRifle_C_TipArc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightningRifle.BP_LightningRifle_C.OnBringUp
// (Event, Public, BlueprintEvent)

void ABP_LightningRifle_C::OnBringUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightningRifle.BP_LightningRifle_C.OnBringUp");

	ABP_LightningRifle_C_OnBringUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightningRifle.BP_LightningRifle_C.ExecuteUbergraph_BP_LightningRifle
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_LightningRifle_C::ExecuteUbergraph_BP_LightningRifle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightningRifle.BP_LightningRifle_C.ExecuteUbergraph_BP_LightningRifle");

	ABP_LightningRifle_C_ExecuteUbergraph_BP_LightningRifle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

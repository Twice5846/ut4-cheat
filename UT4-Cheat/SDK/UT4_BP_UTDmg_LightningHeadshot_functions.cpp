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

// Function BP_UTDmg_LightningHeadshot.BP_UTDmg_LightningHeadshot_C.PlayDeathEffects
// (BlueprintCosmetic, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AUTCharacter**           DyingPawn                      (Parm, ZeroConstructor, IsPlainOldData)

void UBP_UTDmg_LightningHeadshot_C::PlayDeathEffects(class AUTCharacter** DyingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UTDmg_LightningHeadshot.BP_UTDmg_LightningHeadshot_C.PlayDeathEffects");

	UBP_UTDmg_LightningHeadshot_C_PlayDeathEffects_Params params;
	params.DyingPawn = DyingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UTDmg_LightningHeadshot.BP_UTDmg_LightningHeadshot_C.GetDeathAnim
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AUTCharacter**           DyingPawn                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimMontage* UBP_UTDmg_LightningHeadshot_C::GetDeathAnim(class AUTCharacter** DyingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UTDmg_LightningHeadshot.BP_UTDmg_LightningHeadshot_C.GetDeathAnim");

	UBP_UTDmg_LightningHeadshot_C_GetDeathAnim_Params params;
	params.DyingPawn = DyingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_UTDmg_LightningHeadshot.BP_UTDmg_LightningHeadshot_C.OverrideDeathSound
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AUTCharacter**           Victim                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_UTDmg_LightningHeadshot_C::OverrideDeathSound(class AUTCharacter** Victim)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UTDmg_LightningHeadshot.BP_UTDmg_LightningHeadshot_C.OverrideDeathSound");

	UBP_UTDmg_LightningHeadshot_C_OverrideDeathSound_Params params;
	params.Victim = Victim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

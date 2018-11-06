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

// Function BaseUTCharacter.BaseUTCharacter_C.OnShockComboExplode
// (Public, BlueprintCallable, BlueprintEvent)

void ABaseUTCharacter_C::OnShockComboExplode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseUTCharacter.BaseUTCharacter_C.OnShockComboExplode");

	ABaseUTCharacter_C_OnShockComboExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseUTCharacter.BaseUTCharacter_C.SpawnActorHelper
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              SpawnTransform                 (Parm, IsPlainOldData)
// class AActor*                  Spawned_Actor                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABaseUTCharacter_C::SpawnActorHelper(class UClass* Class, const struct FTransform& SpawnTransform, class AActor** Spawned_Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseUTCharacter.BaseUTCharacter_C.SpawnActorHelper");

	ABaseUTCharacter_C_SpawnActorHelper_Params params;
	params.Class = Class;
	params.SpawnTransform = SpawnTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Spawned_Actor != nullptr)
		*Spawned_Actor = params.Spawned_Actor;
}


// Function BaseUTCharacter.BaseUTCharacter_C.GetGameTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          GameTime                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABaseUTCharacter_C::GetGameTime(float* GameTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseUTCharacter.BaseUTCharacter_C.GetGameTime");

	ABaseUTCharacter_C_GetGameTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GameTime != nullptr)
		*GameTime = params.GameTime;
}


// Function BaseUTCharacter.BaseUTCharacter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABaseUTCharacter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseUTCharacter.BaseUTCharacter_C.UserConstructionScript");

	ABaseUTCharacter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseUTCharacter.BaseUTCharacter_C.PlayTakeHitEffects
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ABaseUTCharacter_C::PlayTakeHitEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseUTCharacter.BaseUTCharacter_C.PlayTakeHitEffects");

	ABaseUTCharacter_C_PlayTakeHitEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseUTCharacter.BaseUTCharacter_C.OnRep_Invisible
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ABaseUTCharacter_C::OnRep_Invisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseUTCharacter.BaseUTCharacter_C.OnRep_Invisible");

	ABaseUTCharacter_C_OnRep_Invisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseUTCharacter.BaseUTCharacter_C.OnSlide
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                SlideLocation                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector*                SlideDir                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ABaseUTCharacter_C::OnSlide(struct FVector* SlideLocation, struct FVector* SlideDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseUTCharacter.BaseUTCharacter_C.OnSlide");

	ABaseUTCharacter_C_OnSlide_Params params;
	params.SlideLocation = SlideLocation;
	params.SlideDir = SlideDir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseUTCharacter.BaseUTCharacter_C.DrawPoint
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)

void ABaseUTCharacter_C::DrawPoint(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseUTCharacter.BaseUTCharacter_C.DrawPoint");

	ABaseUTCharacter_C_DrawPoint_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseUTCharacter.BaseUTCharacter_C.ExecuteUbergraph_BaseUTCharacter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABaseUTCharacter_C::ExecuteUbergraph_BaseUTCharacter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseUTCharacter.BaseUTCharacter_C.ExecuteUbergraph_BaseUTCharacter");

	ABaseUTCharacter_C_ExecuteUbergraph_BaseUTCharacter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseUTCharacter.BaseUTCharacter_C.NewEventDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABaseUTCharacter_C::NewEventDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseUTCharacter.BaseUTCharacter_C.NewEventDispatcher__DelegateSignature");

	ABaseUTCharacter_C_NewEventDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

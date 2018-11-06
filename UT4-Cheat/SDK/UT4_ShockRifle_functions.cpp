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

// Function ShockRifle.ShockRifle_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AShockRifle_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShockRifle.ShockRifle_C.UserConstructionScript");

	AShockRifle_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShockRifle.ShockRifle_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void AShockRifle_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShockRifle.ShockRifle_C.Timeline_0__FinishedFunc");

	AShockRifle_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShockRifle.ShockRifle_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void AShockRifle_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShockRifle.ShockRifle_C.Timeline_0__UpdateFunc");

	AShockRifle_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShockRifle.ShockRifle_C.OnStartedFiring
// (Event, Public, BlueprintEvent)

void AShockRifle_C::OnStartedFiring()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShockRifle.ShockRifle_C.OnStartedFiring");

	AShockRifle_C_OnStartedFiring_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShockRifle.ShockRifle_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AShockRifle_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShockRifle.ShockRifle_C.ReceiveTick");

	AShockRifle_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShockRifle.ShockRifle_C.ExecuteUbergraph_ShockRifle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AShockRifle_C::ExecuteUbergraph_ShockRifle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShockRifle.ShockRifle_C.ExecuteUbergraph_ShockRifle");

	AShockRifle_C_ExecuteUbergraph_ShockRifle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

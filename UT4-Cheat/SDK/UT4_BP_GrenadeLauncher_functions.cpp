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

// Function BP_GrenadeLauncher.BP_GrenadeLauncher_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_GrenadeLauncher_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GrenadeLauncher.BP_GrenadeLauncher_C.UserConstructionScript");

	ABP_GrenadeLauncher_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GrenadeLauncher.BP_GrenadeLauncher_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_GrenadeLauncher_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GrenadeLauncher.BP_GrenadeLauncher_C.ReceiveTick");

	ABP_GrenadeLauncher_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GrenadeLauncher.BP_GrenadeLauncher_C.PlayDetonationEffects
// (Event, Public, BlueprintEvent)

void ABP_GrenadeLauncher_C::PlayDetonationEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GrenadeLauncher.BP_GrenadeLauncher_C.PlayDetonationEffects");

	ABP_GrenadeLauncher_C_PlayDetonationEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GrenadeLauncher.BP_GrenadeLauncher_C.ShowDetonatorUI
// (Event, Public, BlueprintEvent)

void ABP_GrenadeLauncher_C::ShowDetonatorUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GrenadeLauncher.BP_GrenadeLauncher_C.ShowDetonatorUI");

	ABP_GrenadeLauncher_C_ShowDetonatorUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GrenadeLauncher.BP_GrenadeLauncher_C.HideDetonatorUI
// (Event, Public, BlueprintEvent)

void ABP_GrenadeLauncher_C::HideDetonatorUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GrenadeLauncher.BP_GrenadeLauncher_C.HideDetonatorUI");

	ABP_GrenadeLauncher_C_HideDetonatorUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GrenadeLauncher.BP_GrenadeLauncher_C.OnContinuedFiring
// (Event, Public, BlueprintEvent)

void ABP_GrenadeLauncher_C::OnContinuedFiring()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GrenadeLauncher.BP_GrenadeLauncher_C.OnContinuedFiring");

	ABP_GrenadeLauncher_C_OnContinuedFiring_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GrenadeLauncher.BP_GrenadeLauncher_C.AddDetonatorUIToHUD
// (BlueprintCallable, BlueprintEvent)

void ABP_GrenadeLauncher_C::AddDetonatorUIToHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GrenadeLauncher.BP_GrenadeLauncher_C.AddDetonatorUIToHUD");

	ABP_GrenadeLauncher_C_AddDetonatorUIToHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GrenadeLauncher.BP_GrenadeLauncher_C.ExecuteUbergraph_BP_GrenadeLauncher
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_GrenadeLauncher_C::ExecuteUbergraph_BP_GrenadeLauncher(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GrenadeLauncher.BP_GrenadeLauncher_C.ExecuteUbergraph_BP_GrenadeLauncher");

	ABP_GrenadeLauncher_C_ExecuteUbergraph_BP_GrenadeLauncher_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

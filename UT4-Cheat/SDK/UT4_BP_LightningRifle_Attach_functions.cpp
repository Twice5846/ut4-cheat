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

// Function BP_LightningRifle_Attach.BP_LightningRifle_Attach_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_LightningRifle_Attach_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightningRifle_Attach.BP_LightningRifle_Attach_C.UserConstructionScript");

	ABP_LightningRifle_Attach_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightningRifle_Attach.BP_LightningRifle_Attach_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_LightningRifle_Attach_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightningRifle_Attach.BP_LightningRifle_Attach_C.ReceiveBeginPlay");

	ABP_LightningRifle_Attach_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightningRifle_Attach.BP_LightningRifle_Attach_C.CheckGlow
// (BlueprintCallable, BlueprintEvent)

void ABP_LightningRifle_Attach_C::CheckGlow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightningRifle_Attach.BP_LightningRifle_Attach_C.CheckGlow");

	ABP_LightningRifle_Attach_C_CheckGlow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightningRifle_Attach.BP_LightningRifle_Attach_C.ExecuteUbergraph_BP_LightningRifle_Attach
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_LightningRifle_Attach_C::ExecuteUbergraph_BP_LightningRifle_Attach(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightningRifle_Attach.BP_LightningRifle_Attach_C.ExecuteUbergraph_BP_LightningRifle_Attach");

	ABP_LightningRifle_Attach_C_ExecuteUbergraph_BP_LightningRifle_Attach_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

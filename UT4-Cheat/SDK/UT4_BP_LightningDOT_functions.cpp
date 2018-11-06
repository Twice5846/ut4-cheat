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

// Function BP_LightningDOT.BP_LightningDOT_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_LightningDOT_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightningDOT.BP_LightningDOT_C.UserConstructionScript");

	ABP_LightningDOT_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightningDOT.BP_LightningDOT_C.StartDot
// (BlueprintCallable, BlueprintEvent)

void ABP_LightningDOT_C::StartDot()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightningDOT.BP_LightningDOT_C.StartDot");

	ABP_LightningDOT_C_StartDot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightningDOT.BP_LightningDOT_C.ExecuteUbergraph_BP_LightningDOT
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_LightningDOT_C::ExecuteUbergraph_BP_LightningDOT(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightningDOT.BP_LightningDOT_C.ExecuteUbergraph_BP_LightningDOT");

	ABP_LightningDOT_C_ExecuteUbergraph_BP_LightningDOT_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

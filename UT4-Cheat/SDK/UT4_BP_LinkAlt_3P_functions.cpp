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

// Function BP_LinkAlt_3P.BP_LinkAlt_3P_C.SetColors
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            NewPrimeColor                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_LinkAlt_3P_C::SetColors(const struct FLinearColor& NewPrimeColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkAlt_3P.BP_LinkAlt_3P_C.SetColors");

	ABP_LinkAlt_3P_C_SetColors_Params params;
	params.NewPrimeColor = NewPrimeColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkAlt_3P.BP_LinkAlt_3P_C.SetMaterialParams
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LinkAlt_3P_C::SetMaterialParams()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkAlt_3P.BP_LinkAlt_3P_C.SetMaterialParams");

	ABP_LinkAlt_3P_C_SetMaterialParams_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkAlt_3P.BP_LinkAlt_3P_C.Deactivate
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LinkAlt_3P_C::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkAlt_3P.BP_LinkAlt_3P_C.Deactivate");

	ABP_LinkAlt_3P_C_Deactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkAlt_3P.BP_LinkAlt_3P_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_LinkAlt_3P_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkAlt_3P.BP_LinkAlt_3P_C.UserConstructionScript");

	ABP_LinkAlt_3P_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkAlt_3P.BP_LinkAlt_3P_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_LinkAlt_3P_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkAlt_3P.BP_LinkAlt_3P_C.ReceiveBeginPlay");

	ABP_LinkAlt_3P_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkAlt_3P.BP_LinkAlt_3P_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_LinkAlt_3P_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkAlt_3P.BP_LinkAlt_3P_C.ReceiveTick");

	ABP_LinkAlt_3P_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkAlt_3P.BP_LinkAlt_3P_C.MaterialCheck
// (BlueprintCallable, BlueprintEvent)

void ABP_LinkAlt_3P_C::MaterialCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkAlt_3P.BP_LinkAlt_3P_C.MaterialCheck");

	ABP_LinkAlt_3P_C_MaterialCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkAlt_3P.BP_LinkAlt_3P_C.ExecuteUbergraph_BP_LinkAlt_3P
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_LinkAlt_3P_C::ExecuteUbergraph_BP_LinkAlt_3P(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkAlt_3P.BP_LinkAlt_3P_C.ExecuteUbergraph_BP_LinkAlt_3P");

	ABP_LinkAlt_3P_C_ExecuteUbergraph_BP_LinkAlt_3P_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

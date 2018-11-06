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

// Function BP_LinkGun_Attach.BP_LinkGun_Attach_C.OverrideFiringEffects
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_LinkGun_Attach_C::OverrideFiringEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGun_Attach.BP_LinkGun_Attach_C.OverrideFiringEffects");

	ABP_LinkGun_Attach_C_OverrideFiringEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_LinkGun_Attach.BP_LinkGun_Attach_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_LinkGun_Attach_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGun_Attach.BP_LinkGun_Attach_C.UserConstructionScript");

	ABP_LinkGun_Attach_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGun_Attach.BP_LinkGun_Attach_C.StopFiringEffects
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bIgnoreCurrentMode             (Parm, ZeroConstructor, IsPlainOldData)

void ABP_LinkGun_Attach_C::StopFiringEffects(bool* bIgnoreCurrentMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGun_Attach.BP_LinkGun_Attach_C.StopFiringEffects");

	ABP_LinkGun_Attach_C_StopFiringEffects_Params params;
	params.bIgnoreCurrentMode = bIgnoreCurrentMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGun_Attach.BP_LinkGun_Attach_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_LinkGun_Attach_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGun_Attach.BP_LinkGun_Attach_C.ReceiveEndPlay");

	ABP_LinkGun_Attach_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGun_Attach.BP_LinkGun_Attach_C.ExecuteUbergraph_BP_LinkGun_Attach
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_LinkGun_Attach_C::ExecuteUbergraph_BP_LinkGun_Attach(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGun_Attach.BP_LinkGun_Attach_C.ExecuteUbergraph_BP_LinkGun_Attach");

	ABP_LinkGun_Attach_C_ExecuteUbergraph_BP_LinkGun_Attach_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

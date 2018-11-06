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

// Function BP_Grenade.BP_Grenade_C.OnRep_MyTeam
// (BlueprintCallable, BlueprintEvent)

void ABP_Grenade_C::OnRep_MyTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade.BP_Grenade_C.OnRep_MyTeam");

	ABP_Grenade_C_OnRep_MyTeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade.BP_Grenade_C.FetchInstigator
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Grenade_C::FetchInstigator()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade.BP_Grenade_C.FetchInstigator");

	ABP_Grenade_C_FetchInstigator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade.BP_Grenade_C.SetupColor
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Grenade_C::SetupColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade.BP_Grenade_C.SetupColor");

	ABP_Grenade_C_SetupColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade.BP_Grenade_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Grenade_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade.BP_Grenade_C.UserConstructionScript");

	ABP_Grenade_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade.BP_Grenade_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_Grenade_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade.BP_Grenade_C.ReceiveBeginPlay");

	ABP_Grenade_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade.BP_Grenade_C.ExecuteUbergraph_BP_Grenade
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Grenade_C::ExecuteUbergraph_BP_Grenade(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade.BP_Grenade_C.ExecuteUbergraph_BP_Grenade");

	ABP_Grenade_C_ExecuteUbergraph_BP_Grenade_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

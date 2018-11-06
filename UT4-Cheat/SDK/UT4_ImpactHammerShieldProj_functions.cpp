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

// Function ImpactHammerShieldProj.ImpactHammerShieldProj_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AImpactHammerShieldProj_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ImpactHammerShieldProj.ImpactHammerShieldProj_C.UserConstructionScript");

	AImpactHammerShieldProj_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ImpactHammerShieldProj.ImpactHammerShieldProj_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AImpactHammerShieldProj_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ImpactHammerShieldProj.ImpactHammerShieldProj_C.ReceiveBeginPlay");

	AImpactHammerShieldProj_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ImpactHammerShieldProj.ImpactHammerShieldProj_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AImpactHammerShieldProj_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ImpactHammerShieldProj.ImpactHammerShieldProj_C.ReceiveTick");

	AImpactHammerShieldProj_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ImpactHammerShieldProj.ImpactHammerShieldProj_C.ExecuteUbergraph_ImpactHammerShieldProj
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AImpactHammerShieldProj_C::ExecuteUbergraph_ImpactHammerShieldProj(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ImpactHammerShieldProj.ImpactHammerShieldProj_C.ExecuteUbergraph_ImpactHammerShieldProj");

	AImpactHammerShieldProj_C_ExecuteUbergraph_ImpactHammerShieldProj_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

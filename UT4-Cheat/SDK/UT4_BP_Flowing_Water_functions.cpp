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

// Function BP_Flowing_Water.BP_Flowing_Water_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Flowing_Water_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Flowing_Water.BP_Flowing_Water_C.UserConstructionScript");

	ABP_Flowing_Water_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Flowing_Water.BP_Flowing_Water_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Flowing_Water_C::ReceiveActorBeginOverlap(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Flowing_Water.BP_Flowing_Water_C.ReceiveActorBeginOverlap");

	ABP_Flowing_Water_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Flowing_Water.BP_Flowing_Water_C.ReceiveActorEndOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Flowing_Water_C::ReceiveActorEndOverlap(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Flowing_Water.BP_Flowing_Water_C.ReceiveActorEndOverlap");

	ABP_Flowing_Water_C_ReceiveActorEndOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Flowing_Water.BP_Flowing_Water_C.ExecuteUbergraph_BP_Flowing_Water
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Flowing_Water_C::ExecuteUbergraph_BP_Flowing_Water(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Flowing_Water.BP_Flowing_Water_C.ExecuteUbergraph_BP_Flowing_Water");

	ABP_Flowing_Water_C_ExecuteUbergraph_BP_Flowing_Water_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

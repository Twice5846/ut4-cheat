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

// Function BP_FlagSplineCreator.BP_FlagSplineCreator_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_FlagSplineCreator_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlagSplineCreator.BP_FlagSplineCreator_C.UserConstructionScript");

	ABP_FlagSplineCreator_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FlagSplineCreator.BP_FlagSplineCreator_C.SplineFade__FinishedFunc
// (BlueprintEvent)

void ABP_FlagSplineCreator_C::SplineFade__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlagSplineCreator.BP_FlagSplineCreator_C.SplineFade__FinishedFunc");

	ABP_FlagSplineCreator_C_SplineFade__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FlagSplineCreator.BP_FlagSplineCreator_C.SplineFade__UpdateFunc
// (BlueprintEvent)

void ABP_FlagSplineCreator_C::SplineFade__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlagSplineCreator.BP_FlagSplineCreator_C.SplineFade__UpdateFunc");

	ABP_FlagSplineCreator_C_SplineFade__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FlagSplineCreator.BP_FlagSplineCreator_C.AddSplinePoint
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 NextPoint                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_FlagSplineCreator_C::AddSplinePoint(const struct FVector& NextPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlagSplineCreator.BP_FlagSplineCreator_C.AddSplinePoint");

	ABP_FlagSplineCreator_C_AddSplinePoint_Params params;
	params.NextPoint = NextPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FlagSplineCreator.BP_FlagSplineCreator_C.SetTeam
// (Event, Public, BlueprintEvent)
// Parameters:
// class AUTTeamInfo**            Team                           (Parm, ZeroConstructor, IsPlainOldData)

void ABP_FlagSplineCreator_C::SetTeam(class AUTTeamInfo** Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlagSplineCreator.BP_FlagSplineCreator_C.SetTeam");

	ABP_FlagSplineCreator_C_SetTeam_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FlagSplineCreator.BP_FlagSplineCreator_C.SetPoints
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<struct FVector>*        Points                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_FlagSplineCreator_C::SetPoints(TArray<struct FVector>* Points)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlagSplineCreator.BP_FlagSplineCreator_C.SetPoints");

	ABP_FlagSplineCreator_C_SetPoints_Params params;
	params.Points = Points;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FlagSplineCreator.BP_FlagSplineCreator_C.EndTrail
// (Event, Public, BlueprintEvent)

void ABP_FlagSplineCreator_C::EndTrail()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlagSplineCreator.BP_FlagSplineCreator_C.EndTrail");

	ABP_FlagSplineCreator_C_EndTrail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FlagSplineCreator.BP_FlagSplineCreator_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_FlagSplineCreator_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlagSplineCreator.BP_FlagSplineCreator_C.ReceiveTick");

	ABP_FlagSplineCreator_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FlagSplineCreator.BP_FlagSplineCreator_C.ExecuteUbergraph_BP_FlagSplineCreator
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_FlagSplineCreator_C::ExecuteUbergraph_BP_FlagSplineCreator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlagSplineCreator.BP_FlagSplineCreator_C.ExecuteUbergraph_BP_FlagSplineCreator");

	ABP_FlagSplineCreator_C_ExecuteUbergraph_BP_FlagSplineCreator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

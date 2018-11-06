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

// Function LineUpVisualizationCharacter.LineUpVisualizationCharacter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ALineUpVisualizationCharacter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function LineUpVisualizationCharacter.LineUpVisualizationCharacter_C.UserConstructionScript");

	ALineUpVisualizationCharacter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LineUpVisualizationCharacter.LineUpVisualizationCharacter_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ALineUpVisualizationCharacter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function LineUpVisualizationCharacter.LineUpVisualizationCharacter_C.ReceiveBeginPlay");

	ALineUpVisualizationCharacter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LineUpVisualizationCharacter.LineUpVisualizationCharacter_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ALineUpVisualizationCharacter_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function LineUpVisualizationCharacter.LineUpVisualizationCharacter_C.ReceiveTick");

	ALineUpVisualizationCharacter_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LineUpVisualizationCharacter.LineUpVisualizationCharacter_C.ExecuteUbergraph_LineUpVisualizationCharacter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ALineUpVisualizationCharacter_C::ExecuteUbergraph_LineUpVisualizationCharacter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LineUpVisualizationCharacter.LineUpVisualizationCharacter_C.ExecuteUbergraph_LineUpVisualizationCharacter");

	ALineUpVisualizationCharacter_C_ExecuteUbergraph_LineUpVisualizationCharacter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

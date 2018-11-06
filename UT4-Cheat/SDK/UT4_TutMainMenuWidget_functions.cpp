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

// Function TutMainMenuWidget.TutMainMenuWidget_C.GetText_3
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UTutMainMenuWidget_C::GetText_3()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutMainMenuWidget.TutMainMenuWidget_C.GetText_3");

	UTutMainMenuWidget_C_GetText_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TutMainMenuWidget.TutMainMenuWidget_C.GetText_2
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UTutMainMenuWidget_C::GetText_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutMainMenuWidget.TutMainMenuWidget_C.GetText_2");

	UTutMainMenuWidget_C_GetText_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TutMainMenuWidget.TutMainMenuWidget_C.GetText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UTutMainMenuWidget_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutMainMenuWidget.TutMainMenuWidget_C.GetText_1");

	UTutMainMenuWidget_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TutMainMenuWidget.TutMainMenuWidget_C.GetBackground_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UTutMainMenuWidget_C::GetBackground_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutMainMenuWidget.TutMainMenuWidget_C.GetBackground_1");

	UTutMainMenuWidget_C_GetBackground_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TutMainMenuWidget.TutMainMenuWidget_C.GetText_TotalTokenCountDisplay
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UTutMainMenuWidget_C::GetText_TotalTokenCountDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutMainMenuWidget.TutMainMenuWidget_C.GetText_TotalTokenCountDisplay");

	UTutMainMenuWidget_C_GetText_TotalTokenCountDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TutMainMenuWidget.TutMainMenuWidget_C.CountTokens
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           Array                          (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTutMainMenuWidget_C::CountTokens(TArray<struct FName>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function TutMainMenuWidget.TutMainMenuWidget_C.CountTokens");

	UTutMainMenuWidget_C_CountTokens_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}


// Function TutMainMenuWidget.TutMainMenuWidget_C.GetOverallTokenProgress
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTutMainMenuWidget_C::GetOverallTokenProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutMainMenuWidget.TutMainMenuWidget_C.GetOverallTokenProgress");

	UTutMainMenuWidget_C_GetOverallTokenProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TutMainMenuWidget.TutMainMenuWidget_C.GetPercent_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UTutMainMenuWidget_C::GetPercent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutMainMenuWidget.TutMainMenuWidget_C.GetPercent_1");

	UTutMainMenuWidget_C_GetPercent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TutMainMenuWidget.TutMainMenuWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTutMainMenuWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutMainMenuWidget.TutMainMenuWidget_C.Construct");

	UTutMainMenuWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TutMainMenuWidget.TutMainMenuWidget_C.ExecuteUbergraph_TutMainMenuWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTutMainMenuWidget_C::ExecuteUbergraph_TutMainMenuWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TutMainMenuWidget.TutMainMenuWidget_C.ExecuteUbergraph_TutMainMenuWidget");

	UTutMainMenuWidget_C_ExecuteUbergraph_TutMainMenuWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

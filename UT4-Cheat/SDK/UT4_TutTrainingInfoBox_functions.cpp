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

// Function TutTrainingInfoBox.TutTrainingInfoBox_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UTutTrainingInfoBox_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutTrainingInfoBox.TutTrainingInfoBox_C.GetVisibility_1");

	UTutTrainingInfoBox_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TutTrainingInfoBox.TutTrainingInfoBox_C.HasBeenPlayed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTutTrainingInfoBox_C::HasBeenPlayed()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutTrainingInfoBox.TutTrainingInfoBox_C.HasBeenPlayed");

	UTutTrainingInfoBox_C_HasBeenPlayed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TutTrainingInfoBox.TutTrainingInfoBox_C.GetUTLocalPlayer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUTLocalPlayer*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUTLocalPlayer* UTutTrainingInfoBox_C::GetUTLocalPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutTrainingInfoBox.TutTrainingInfoBox_C.GetUTLocalPlayer");

	UTutTrainingInfoBox_C_GetUTLocalPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TutTrainingInfoBox.TutTrainingInfoBox_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   inSectionName                  (Parm)
// struct FText                   inDescription                  (Parm)
// struct FName                   inLevelName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateBrush             inLevelScreenshot              (Parm)
// struct FName                   inTutorialTag                  (Parm, ZeroConstructor, IsPlainOldData)

void UTutTrainingInfoBox_C::Initialize(const struct FText& inSectionName, const struct FText& inDescription, const struct FName& inLevelName, const struct FSlateBrush& inLevelScreenshot, const struct FName& inTutorialTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function TutTrainingInfoBox.TutTrainingInfoBox_C.Initialize");

	UTutTrainingInfoBox_C_Initialize_Params params;
	params.inSectionName = inSectionName;
	params.inDescription = inDescription;
	params.inLevelName = inLevelName;
	params.inLevelScreenshot = inLevelScreenshot;
	params.inTutorialTag = inTutorialTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TutTrainingInfoBox.TutTrainingInfoBox_C.GetToolTip_PlayedTut
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UTutTrainingInfoBox_C::GetToolTip_PlayedTut()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutTrainingInfoBox.TutTrainingInfoBox_C.GetToolTip_PlayedTut");

	UTutTrainingInfoBox_C_GetToolTip_PlayedTut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TutTrainingInfoBox.TutTrainingInfoBox_C.GetBrush_PlayedTut
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UTutTrainingInfoBox_C::GetBrush_PlayedTut()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutTrainingInfoBox.TutTrainingInfoBox_C.GetBrush_PlayedTut");

	UTutTrainingInfoBox_C_GetBrush_PlayedTut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TutTrainingInfoBox.TutTrainingInfoBox_C.GetText_BestTimeNumberDisplay
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UTutTrainingInfoBox_C::GetText_BestTimeNumberDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutTrainingInfoBox.TutTrainingInfoBox_C.GetText_BestTimeNumberDisplay");

	UTutTrainingInfoBox_C_GetText_BestTimeNumberDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TutTrainingInfoBox.TutTrainingInfoBox_C.GatherTokenDisplayInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTutTrainingInfoBox_C::GatherTokenDisplayInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutTrainingInfoBox.TutTrainingInfoBox_C.GatherTokenDisplayInfo");

	UTutTrainingInfoBox_C_GatherTokenDisplayInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TutTrainingInfoBox.TutTrainingInfoBox_C.GetText_TokenNumberDisplay
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UTutTrainingInfoBox_C::GetText_TokenNumberDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutTrainingInfoBox.TutTrainingInfoBox_C.GetText_TokenNumberDisplay");

	UTutTrainingInfoBox_C_GetText_TokenNumberDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TutTrainingInfoBox.TutTrainingInfoBox_C.GetToolTipText_BestRun
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UTutTrainingInfoBox_C::GetToolTipText_BestRun()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutTrainingInfoBox.TutTrainingInfoBox_C.GetToolTipText_BestRun");

	UTutTrainingInfoBox_C_GetToolTipText_BestRun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TutTrainingInfoBox.TutTrainingInfoBox_C.GetToolTipText_TokenCounter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UTutTrainingInfoBox_C::GetToolTipText_TokenCounter()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutTrainingInfoBox.TutTrainingInfoBox_C.GetToolTipText_TokenCounter");

	UTutTrainingInfoBox_C_GetToolTipText_TokenCounter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TutTrainingInfoBox.TutTrainingInfoBox_C.GetText_DescriptionText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UTutTrainingInfoBox_C::GetText_DescriptionText()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutTrainingInfoBox.TutTrainingInfoBox_C.GetText_DescriptionText");

	UTutTrainingInfoBox_C_GetText_DescriptionText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TutTrainingInfoBox.TutTrainingInfoBox_C.GetText_SectionName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UTutTrainingInfoBox_C::GetText_SectionName()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutTrainingInfoBox.TutTrainingInfoBox_C.GetText_SectionName");

	UTutTrainingInfoBox_C_GetText_SectionName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TutTrainingInfoBox.TutTrainingInfoBox_C.GetBrush_LevelImage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UTutTrainingInfoBox_C::GetBrush_LevelImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutTrainingInfoBox.TutTrainingInfoBox_C.GetBrush_LevelImage");

	UTutTrainingInfoBox_C_GetBrush_LevelImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TutTrainingInfoBox.TutTrainingInfoBox_C.BndEvt__Button_57_K2Node_ComponentBoundEvent_82_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UTutTrainingInfoBox_C::BndEvt__Button_57_K2Node_ComponentBoundEvent_82_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutTrainingInfoBox.TutTrainingInfoBox_C.BndEvt__Button_57_K2Node_ComponentBoundEvent_82_OnButtonPressedEvent__DelegateSignature");

	UTutTrainingInfoBox_C_BndEvt__Button_57_K2Node_ComponentBoundEvent_82_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TutTrainingInfoBox.TutTrainingInfoBox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTutTrainingInfoBox_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutTrainingInfoBox.TutTrainingInfoBox_C.Construct");

	UTutTrainingInfoBox_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TutTrainingInfoBox.TutTrainingInfoBox_C.ExecuteUbergraph_TutTrainingInfoBox
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTutTrainingInfoBox_C::ExecuteUbergraph_TutTrainingInfoBox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TutTrainingInfoBox.TutTrainingInfoBox_C.ExecuteUbergraph_TutTrainingInfoBox");

	UTutTrainingInfoBox_C_ExecuteUbergraph_TutTrainingInfoBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

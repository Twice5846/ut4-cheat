#pragma once

// Unreal Tournament 4 (Pre Alpha) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TutTrainingInfoBox.TutTrainingInfoBox_C.GetVisibility_1
struct UTutTrainingInfoBox_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TutTrainingInfoBox.TutTrainingInfoBox_C.HasBeenPlayed
struct UTutTrainingInfoBox_C_HasBeenPlayed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TutTrainingInfoBox.TutTrainingInfoBox_C.GetUTLocalPlayer
struct UTutTrainingInfoBox_C_GetUTLocalPlayer_Params
{
	class UUTLocalPlayer*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TutTrainingInfoBox.TutTrainingInfoBox_C.Initialize
struct UTutTrainingInfoBox_C_Initialize_Params
{
	struct FText                                       inSectionName;                                            // (Parm)
	struct FText                                       inDescription;                                            // (Parm)
	struct FName                                       inLevelName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 inLevelScreenshot;                                        // (Parm)
	struct FName                                       inTutorialTag;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TutTrainingInfoBox.TutTrainingInfoBox_C.GetToolTip_PlayedTut
struct UTutTrainingInfoBox_C_GetToolTip_PlayedTut_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TutTrainingInfoBox.TutTrainingInfoBox_C.GetBrush_PlayedTut
struct UTutTrainingInfoBox_C_GetBrush_PlayedTut_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TutTrainingInfoBox.TutTrainingInfoBox_C.GetText_BestTimeNumberDisplay
struct UTutTrainingInfoBox_C_GetText_BestTimeNumberDisplay_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TutTrainingInfoBox.TutTrainingInfoBox_C.GatherTokenDisplayInfo
struct UTutTrainingInfoBox_C_GatherTokenDisplayInfo_Params
{
};

// Function TutTrainingInfoBox.TutTrainingInfoBox_C.GetText_TokenNumberDisplay
struct UTutTrainingInfoBox_C_GetText_TokenNumberDisplay_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TutTrainingInfoBox.TutTrainingInfoBox_C.GetToolTipText_BestRun
struct UTutTrainingInfoBox_C_GetToolTipText_BestRun_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TutTrainingInfoBox.TutTrainingInfoBox_C.GetToolTipText_TokenCounter
struct UTutTrainingInfoBox_C_GetToolTipText_TokenCounter_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TutTrainingInfoBox.TutTrainingInfoBox_C.GetText_DescriptionText
struct UTutTrainingInfoBox_C_GetText_DescriptionText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TutTrainingInfoBox.TutTrainingInfoBox_C.GetText_SectionName
struct UTutTrainingInfoBox_C_GetText_SectionName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TutTrainingInfoBox.TutTrainingInfoBox_C.GetBrush_LevelImage
struct UTutTrainingInfoBox_C_GetBrush_LevelImage_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TutTrainingInfoBox.TutTrainingInfoBox_C.BndEvt__Button_57_K2Node_ComponentBoundEvent_82_OnButtonPressedEvent__DelegateSignature
struct UTutTrainingInfoBox_C_BndEvt__Button_57_K2Node_ComponentBoundEvent_82_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function TutTrainingInfoBox.TutTrainingInfoBox_C.Construct
struct UTutTrainingInfoBox_C_Construct_Params
{
};

// Function TutTrainingInfoBox.TutTrainingInfoBox_C.ExecuteUbergraph_TutTrainingInfoBox
struct UTutTrainingInfoBox_C_ExecuteUbergraph_TutTrainingInfoBox_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

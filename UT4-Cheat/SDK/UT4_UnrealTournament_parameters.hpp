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

// Function UnrealTournament.ToolTipWidget.Show
struct UToolTipWidget_Show_Params
{
};

// Function UnrealTournament.ToolTipWidget.SetAdditionalContent
struct UToolTipWidget_SetAdditionalContent_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.ToolTipWidget.Hide
struct UToolTipWidget_Hide_Params
{
};

// Function UnrealTournament.UTTeamInterface.SetTeamForSideSwap
struct UUTTeamInterface_SetTeamForSideSwap_Params
{
	unsigned char                                      NewTeamNum;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTTeamInterface.ScriptGetTeamNum
struct UUTTeamInterface_ScriptGetTeamNum_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTBot.WhatToDoNext
struct AUTBot_WhatToDoNext_Params
{
};

// Function UnrealTournament.UTBot.UpdateEnemyInfo
struct AUTBot_UpdateEnemyInfo_Params
{
	class APawn*                                       NewEnemy;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAIEnemyUpdateType>                    UpdateType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTBot.SetTarget
struct AUTBot_SetTarget_Params
{
	class AActor*                                      NewTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTBot.SetEnemy
struct AUTBot_SetEnemy_Params
{
	class APawn*                                       NewEnemy;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTBot.ReceiveProjWarning
struct AUTBot_ReceiveProjWarning_Params
{
	class AUTProjectile*                               Incoming;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTBot.ReceiveInstantWarning
struct AUTBot_ReceiveInstantWarning_Params
{
	class AUTCharacter*                                Shooter;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     FireDir;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function UnrealTournament.UTBot.ProcessIncomingWarning
struct AUTBot_ProcessIncomingWarning_Params
{
};

// Function UnrealTournament.UTBot.PostMovementUpdate
struct AUTBot_PostMovementUpdate_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OldLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OldVelocity;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTBot.PickNewEnemy
struct AUTBot_PickNewEnemy_Params
{
};

// Function UnrealTournament.UTBot.NotifyBump
struct AUTBot_NotifyBump_Params
{
	class AActor*                                      SelfActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function UnrealTournament.UTBot.CheckWeaponFiringTimed
struct AUTBot_CheckWeaponFiringTimed_Params
{
};

// Function UnrealTournament.UTBot.ApplyCrouch
struct AUTBot_ApplyCrouch_Params
{
};

// Function UnrealTournament.UTBot.AddFearSpot
struct AUTBot_AddFearSpot_Params
{
	class AUTAvoidMarker*                              NewSpot;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTDefensePoint.GetPriorityFor
struct AUTDefensePoint_GetPriorityFor_Params
{
	class AUTBot*                                      B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTAIAction_RangedAttack.FirstShotTimer
struct UUTAIAction_RangedAttack_FirstShotTimer_Params
{
};

// Function UnrealTournament.UTAIAction_RangedAttack.EndTimer
struct UUTAIAction_RangedAttack_EndTimer_Params
{
};

// Function UnrealTournament.UTAIAction_TacticalMove.StartFinalMove
struct UUTAIAction_TacticalMove_StartFinalMove_Params
{
};

// Function UnrealTournament.UTAIAction_TacticalMove.FinalWaitFinished
struct UUTAIAction_TacticalMove_FinalWaitFinished_Params
{
};

// Function UnrealTournament.UTAnalyticsBlueprintLibrary.StartSessionWithAttributes
struct UUTAnalyticsBlueprintLibrary_StartSessionWithAttributes_Params
{
	TArray<struct FUTAnalyticsEventAttr>               Attributes;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTAnalyticsBlueprintLibrary.StartSession
struct UUTAnalyticsBlueprintLibrary_StartSession_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTAnalyticsBlueprintLibrary.SetUserId
struct UUTAnalyticsBlueprintLibrary_SetUserId_Params
{
	struct FString                                     UserId;                                                   // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTAnalyticsBlueprintLibrary.SetSessionId
struct UUTAnalyticsBlueprintLibrary_SetSessionId_Params
{
	struct FString                                     SessionId;                                                // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTAnalyticsBlueprintLibrary.SetLocation
struct UUTAnalyticsBlueprintLibrary_SetLocation_Params
{
	struct FString                                     Location;                                                 // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTAnalyticsBlueprintLibrary.SetGender
struct UUTAnalyticsBlueprintLibrary_SetGender_Params
{
	struct FString                                     Gender;                                                   // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTAnalyticsBlueprintLibrary.SetBuildInfo
struct UUTAnalyticsBlueprintLibrary_SetBuildInfo_Params
{
	struct FString                                     BuildInfo;                                                // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTAnalyticsBlueprintLibrary.SetAge
struct UUTAnalyticsBlueprintLibrary_SetAge_Params
{
	int                                                Age;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTAnalyticsBlueprintLibrary.RecordSimpleItemPurchaseWithAttributes
struct UUTAnalyticsBlueprintLibrary_RecordSimpleItemPurchaseWithAttributes_Params
{
	struct FString                                     ItemId;                                                   // (Parm, ZeroConstructor)
	int                                                ItemQuantity;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FUTAnalyticsEventAttr>               Attributes;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function UnrealTournament.UTAnalyticsBlueprintLibrary.RecordSimpleItemPurchase
struct UUTAnalyticsBlueprintLibrary_RecordSimpleItemPurchase_Params
{
	struct FString                                     ItemId;                                                   // (Parm, ZeroConstructor)
	int                                                ItemQuantity;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTAnalyticsBlueprintLibrary.RecordSimpleCurrencyPurchaseWithAttributes
struct UUTAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchaseWithAttributes_Params
{
	struct FString                                     GameCurrencyType;                                         // (Parm, ZeroConstructor)
	int                                                GameCurrencyAmount;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FUTAnalyticsEventAttr>               Attributes;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function UnrealTournament.UTAnalyticsBlueprintLibrary.RecordSimpleCurrencyPurchase
struct UUTAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchase_Params
{
	struct FString                                     GameCurrencyType;                                         // (Parm, ZeroConstructor)
	int                                                GameCurrencyAmount;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTAnalyticsBlueprintLibrary.RecordProgressWithFullHierarchyAndAttributes
struct UUTAnalyticsBlueprintLibrary_RecordProgressWithFullHierarchyAndAttributes_Params
{
	struct FString                                     ProgressType;                                             // (Parm, ZeroConstructor)
	TArray<struct FString>                             ProgressNames;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FUTAnalyticsEventAttr>               Attributes;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function UnrealTournament.UTAnalyticsBlueprintLibrary.RecordProgressWithAttributes
struct UUTAnalyticsBlueprintLibrary_RecordProgressWithAttributes_Params
{
	struct FString                                     ProgressType;                                             // (Parm, ZeroConstructor)
	struct FString                                     ProgressName;                                             // (Parm, ZeroConstructor)
	TArray<struct FUTAnalyticsEventAttr>               Attributes;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function UnrealTournament.UTAnalyticsBlueprintLibrary.RecordProgress
struct UUTAnalyticsBlueprintLibrary_RecordProgress_Params
{
	struct FString                                     ProgressType;                                             // (Parm, ZeroConstructor)
	struct FString                                     ProgressName;                                             // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTAnalyticsBlueprintLibrary.RecordItemPurchase
struct UUTAnalyticsBlueprintLibrary_RecordItemPurchase_Params
{
	struct FString                                     ItemId;                                                   // (Parm, ZeroConstructor)
	struct FString                                     Currency;                                                 // (Parm, ZeroConstructor)
	int                                                PerItemCost;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemQuantity;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTAnalyticsBlueprintLibrary.RecordEventWithAttributes
struct UUTAnalyticsBlueprintLibrary_RecordEventWithAttributes_Params
{
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	TArray<struct FUTAnalyticsEventAttr>               Attributes;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function UnrealTournament.UTAnalyticsBlueprintLibrary.RecordEventWithAttribute
struct UUTAnalyticsBlueprintLibrary_RecordEventWithAttribute_Params
{
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	struct FString                                     AttributeName;                                            // (Parm, ZeroConstructor)
	struct FString                                     AttributeValue;                                           // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTAnalyticsBlueprintLibrary.RecordEvent
struct UUTAnalyticsBlueprintLibrary_RecordEvent_Params
{
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTAnalyticsBlueprintLibrary.RecordErrorWithAttributes
struct UUTAnalyticsBlueprintLibrary_RecordErrorWithAttributes_Params
{
	struct FString                                     Error;                                                    // (Parm, ZeroConstructor)
	TArray<struct FUTAnalyticsEventAttr>               Attributes;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function UnrealTournament.UTAnalyticsBlueprintLibrary.RecordError
struct UUTAnalyticsBlueprintLibrary_RecordError_Params
{
	struct FString                                     Error;                                                    // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTAnalyticsBlueprintLibrary.RecordCurrencyPurchase
struct UUTAnalyticsBlueprintLibrary_RecordCurrencyPurchase_Params
{
	struct FString                                     GameCurrencyType;                                         // (Parm, ZeroConstructor)
	int                                                GameCurrencyAmount;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     RealCurrencyType;                                         // (Parm, ZeroConstructor)
	float                                              RealMoneyCost;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PaymentProvider;                                          // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTAnalyticsBlueprintLibrary.RecordCurrencyGivenWithAttributes
struct UUTAnalyticsBlueprintLibrary_RecordCurrencyGivenWithAttributes_Params
{
	struct FString                                     GameCurrencyType;                                         // (Parm, ZeroConstructor)
	int                                                GameCurrencyAmount;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FUTAnalyticsEventAttr>               Attributes;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function UnrealTournament.UTAnalyticsBlueprintLibrary.RecordCurrencyGiven
struct UUTAnalyticsBlueprintLibrary_RecordCurrencyGiven_Params
{
	struct FString                                     GameCurrencyType;                                         // (Parm, ZeroConstructor)
	int                                                GameCurrencyAmount;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTAnalyticsBlueprintLibrary.MakeEventAttribute
struct UUTAnalyticsBlueprintLibrary_MakeEventAttribute_Params
{
	struct FString                                     AttributeName;                                            // (Parm, ZeroConstructor)
	struct FString                                     AttributeValue;                                           // (Parm, ZeroConstructor)
	struct FUTAnalyticsEventAttr                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UnrealTournament.UTAnalyticsBlueprintLibrary.GetUserId
struct UUTAnalyticsBlueprintLibrary_GetUserId_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function UnrealTournament.UTAnalyticsBlueprintLibrary.GetSessionId
struct UUTAnalyticsBlueprintLibrary_GetSessionId_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function UnrealTournament.UTAnalyticsBlueprintLibrary.FlushEvents
struct UUTAnalyticsBlueprintLibrary_FlushEvents_Params
{
};

// Function UnrealTournament.UTAnalyticsBlueprintLibrary.EndSession
struct UUTAnalyticsBlueprintLibrary_EndSession_Params
{
};

// Function UnrealTournament.UTBasePlayerController.UTLogOut
struct AUTBasePlayerController_UTLogOut_Params
{
};

// Function UnrealTournament.UTBasePlayerController.UTDumpPartyState
struct AUTBasePlayerController_UTDumpPartyState_Params
{
};

// Function UnrealTournament.UTBasePlayerController.UTDumpOnlineSessionState
struct AUTBasePlayerController_UTDumpOnlineSessionState_Params
{
};

// Function UnrealTournament.UTBasePlayerController.TeamTalk
struct AUTBasePlayerController_TeamTalk_Params
{
};

// Function UnrealTournament.UTBasePlayerController.TeamSay
struct AUTBasePlayerController_TeamSay_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTBasePlayerController.Talk
struct AUTBasePlayerController_Talk_Params
{
};

// Function UnrealTournament.UTBasePlayerController.StopVOIPTalking
struct AUTBasePlayerController_StopVOIPTalking_Params
{
};

// Function UnrealTournament.UTBasePlayerController.StartVOIPTalking
struct AUTBasePlayerController_StartVOIPTalking_Params
{
};

// Function UnrealTournament.UTBasePlayerController.ShowMenu
struct AUTBasePlayerController_ShowMenu_Params
{
	struct FString                                     Parameters;                                               // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTBasePlayerController.SetLoadingMovieToPlay
struct AUTBasePlayerController_SetLoadingMovieToPlay_Params
{
	struct FString                                     MoviePath;                                                // (Parm, ZeroConstructor)
	bool                                               bSuppressLoadingText;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTBasePlayerController.ServerSetAvatar
struct AUTBasePlayerController_ServerSetAvatar_Params
{
	struct FName                                       newAvatar;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTBasePlayerController.ServerSay
struct AUTBasePlayerController_ServerSay_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
	bool                                               bTeamMessage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTBasePlayerController.ServerReceiveStatsID
struct AUTBasePlayerController_ServerReceiveStatsID_Params
{
	struct FString                                     NewStatsID;                                               // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTBasePlayerController.ServerReceiveStars
struct AUTBasePlayerController_ServerReceiveStars_Params
{
	int                                                TotalStars;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTBasePlayerController.ServerReceiveCosmetics
struct AUTBasePlayerController_ServerReceiveCosmetics_Params
{
	struct FString                                     CosmeticString;                                           // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTBasePlayerController.ServerRconUnban
struct AUTBasePlayerController_ServerRconUnban_Params
{
	struct FString                                     UIDStr;                                                   // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTBasePlayerController.ServerRconNormal
struct AUTBasePlayerController_ServerRconNormal_Params
{
};

// Function UnrealTournament.UTBasePlayerController.ServerRconMessage
struct AUTBasePlayerController_ServerRconMessage_Params
{
	struct FString                                     DestinationId;                                            // (Parm, ZeroConstructor)
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTBasePlayerController.ServerRconKick
struct AUTBasePlayerController_ServerRconKick_Params
{
	struct FString                                     NameOrUIDStr;                                             // (Parm, ZeroConstructor)
	bool                                               bBan;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Reason;                                                   // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTBasePlayerController.ServerRconExec
struct AUTBasePlayerController_ServerRconExec_Params
{
	struct FString                                     Command;                                                  // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTBasePlayerController.ServerRconDBExec
struct AUTBasePlayerController_ServerRconDBExec_Params
{
	struct FString                                     Command;                                                  // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTBasePlayerController.ServerRconAuth
struct AUTBasePlayerController_ServerRconAuth_Params
{
	struct FString                                     Password;                                                 // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTBasePlayerController.ServerLobbySay
struct AUTBasePlayerController_ServerLobbySay_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTBasePlayerController.ServerFriendSay
struct AUTBasePlayerController_ServerFriendSay_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
	TArray<struct FUniqueNetIdRepl>                    FriendIds;                                                // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function UnrealTournament.UTBasePlayerController.ServerDebugTest
struct AUTBasePlayerController_ServerDebugTest_Params
{
	struct FString                                     TestCommand;                                              // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTBasePlayerController.ServerChangeClanName
struct AUTBasePlayerController_ServerChangeClanName_Params
{
	struct FString                                     S;                                                        // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTBasePlayerController.Say
struct AUTBasePlayerController_Say_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTBasePlayerController.SaveProfileSettings
struct AUTBasePlayerController_SaveProfileSettings_Params
{
};

// Function UnrealTournament.UTBasePlayerController.RepeatTutorial
struct AUTBasePlayerController_RepeatTutorial_Params
{
};

// Function UnrealTournament.UTBasePlayerController.RconUnban
struct AUTBasePlayerController_RconUnban_Params
{
	struct FString                                     UIDStr;                                                   // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTBasePlayerController.RconNormal
struct AUTBasePlayerController_RconNormal_Params
{
};

// Function UnrealTournament.UTBasePlayerController.RconMessage
struct AUTBasePlayerController_RconMessage_Params
{
	struct FString                                     DestinationId;                                            // (Parm, ZeroConstructor)
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTBasePlayerController.RconKick
struct AUTBasePlayerController_RconKick_Params
{
	struct FString                                     NameOrUIDStr;                                             // (Parm, ZeroConstructor)
	bool                                               bBan;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Reason;                                                   // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTBasePlayerController.RconExec
struct AUTBasePlayerController_RconExec_Params
{
	struct FString                                     Command;                                                  // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTBasePlayerController.RconDBExec
struct AUTBasePlayerController_RconDBExec_Params
{
	struct FString                                     Command;                                                  // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTBasePlayerController.RconAuth
struct AUTBasePlayerController_RconAuth_Params
{
	struct FString                                     Password;                                                 // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTBasePlayerController.PrevTutorial
struct AUTBasePlayerController_PrevTutorial_Params
{
};

// Function UnrealTournament.UTBasePlayerController.NextTutorial
struct AUTBasePlayerController_NextTutorial_Params
{
};

// Function UnrealTournament.UTBasePlayerController.MarkTutorialAsCompleted
struct AUTBasePlayerController_MarkTutorialAsCompleted_Params
{
	int                                                TutorialMask;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTBasePlayerController.LobbySay
struct AUTBasePlayerController_LobbySay_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTBasePlayerController.LaunchTutorial
struct AUTBasePlayerController_LaunchTutorial_Params
{
	struct FName                                       TutorialName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTBasePlayerController.IsPlayerGameMuted
struct AUTBasePlayerController_IsPlayerGameMuted_Params
{
	class AUTPlayerState*                              PlayerToCheck;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTBasePlayerController.ImportKeyBinds
struct AUTBasePlayerController_ImportKeyBinds_Params
{
};

// Function UnrealTournament.UTBasePlayerController.HideMenu
struct AUTBasePlayerController_HideMenu_Params
{
};

// Function UnrealTournament.UTBasePlayerController.GuaranteedKick
struct AUTBasePlayerController_GuaranteedKick_Params
{
	struct FText                                       KickReason;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bKickToHubIfPossible;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTBasePlayerController.GetUTLocalPlayer
struct AUTBasePlayerController_GetUTLocalPlayer_Params
{
	class UUTLocalPlayer*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTBasePlayerController.GetTutorialSectionText
struct AUTBasePlayerController_GetTutorialSectionText_Params
{
	TEnumAsByte<ETutorialSections>                     Section;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UnrealTournament.UTBasePlayerController.GetProfileSettings
struct AUTBasePlayerController_GetProfileSettings_Params
{
	class UUTProfileSettings*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTBasePlayerController.GetPrevTutorialName
struct AUTBasePlayerController_GetPrevTutorialName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UnrealTournament.UTBasePlayerController.GetNextTutorialName
struct AUTBasePlayerController_GetNextTutorialName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UnrealTournament.UTBasePlayerController.FriendSay
struct AUTBasePlayerController_FriendSay_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTBasePlayerController.ExportKeyBinds
struct AUTBasePlayerController_ExportKeyBinds_Params
{
};

// Function UnrealTournament.UTBasePlayerController.ExportGameRulesets
struct AUTBasePlayerController_ExportGameRulesets_Params
{
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTBasePlayerController.DebugTest
struct AUTBasePlayerController_DebugTest_Params
{
	struct FString                                     TestCommand;                                              // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTBasePlayerController.ClientStopMovie
struct AUTBasePlayerController_ClientStopMovie_Params
{
};

// Function UnrealTournament.UTBasePlayerController.ClientSetPresence
struct AUTBasePlayerController_ClientSetPresence_Params
{
	struct FString                                     NewPresenceString;                                        // (Parm, ZeroConstructor)
	bool                                               bAllowInvites;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowJoinInProgress;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowJoinViaPresence;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowJoinViaPresenceFriendsOnly;                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTBasePlayerController.ClientSay
struct AUTBasePlayerController_ClientSay_Params
{
	class AUTPlayerState*                              Speaker;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
	struct FName                                       Destination;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTBasePlayerController.ClientReturnToLobby
struct AUTBasePlayerController_ClientReturnToLobby_Params
{
	bool                                               bKicked;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIdle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTBasePlayerController.ClientReturnedToMenus
struct AUTBasePlayerController_ClientReturnedToMenus_Params
{
};

// Function UnrealTournament.UTBasePlayerController.ClientRequireContentItemListComplete
struct AUTBasePlayerController_ClientRequireContentItemListComplete_Params
{
};

// Function UnrealTournament.UTBasePlayerController.ClientRequireContentItemListBegin
struct AUTBasePlayerController_ClientRequireContentItemListBegin_Params
{
	struct FString                                     CloudId;                                                  // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTBasePlayerController.ClientRequireContentItem
struct AUTBasePlayerController_ClientRequireContentItem_Params
{
	struct FString                                     PakFile;                                                  // (Parm, ZeroConstructor)
	struct FString                                     MD5;                                                      // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTBasePlayerController.ClientRankedGameAbandoned
struct AUTBasePlayerController_ClientRankedGameAbandoned_Params
{
};

// Function UnrealTournament.UTBasePlayerController.ClientPlayMovie
struct AUTBasePlayerController_ClientPlayMovie_Params
{
	struct FString                                     MovieName;                                                // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTBasePlayerController.ClientMatchmakingGameComplete
struct AUTBasePlayerController_ClientMatchmakingGameComplete_Params
{
};

// Function UnrealTournament.UTBasePlayerController.ClientGenericInitialization
struct AUTBasePlayerController_ClientGenericInitialization_Params
{
};

// Function UnrealTournament.UTBasePlayerController.ClientCloseAllUI
struct AUTBasePlayerController_ClientCloseAllUI_Params
{
	bool                                               bExceptDialogs;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTBasePlayerController.ClanName
struct AUTBasePlayerController_ClanName_Params
{
	struct FString                                     S;                                                        // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTBasePlayerController.AreMenusOpen
struct AUTBasePlayerController_AreMenusOpen_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTBasePlayerController.ApplyProfileSettings
struct AUTBasePlayerController_ApplyProfileSettings_Params
{
};

// Function UnrealTournament.UTPlayerController.VoiceDebug
struct AUTPlayerController_VoiceDebug_Params
{
	struct FString                                     Command;                                                  // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTPlayerController.VoiceChatReconnected
struct AUTPlayerController_VoiceChatReconnected_Params
{
};

// Function UnrealTournament.UTPlayerController.VoiceChatChannelJoinFailed
struct AUTPlayerController_VoiceChatChannelJoinFailed_Params
{
};

// Function UnrealTournament.UTPlayerController.ViewProjectile
struct AUTPlayerController_ViewProjectile_Params
{
};

// Function UnrealTournament.UTPlayerController.ViewPowerup
struct AUTPlayerController_ViewPowerup_Params
{
	struct FString                                     PowerupName;                                              // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTPlayerController.ViewPlayerNum
struct AUTPlayerController_ViewPlayerNum_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      TeamNum;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.ViewNextPlayer
struct AUTPlayerController_ViewNextPlayer_Params
{
};

// Function UnrealTournament.UTPlayerController.ViewFlag
struct AUTPlayerController_ViewFlag_Params
{
	unsigned char                                      Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.ViewClosestVisiblePlayer
struct AUTPlayerController_ViewClosestVisiblePlayer_Params
{
};

// Function UnrealTournament.UTPlayerController.ViewCamera
struct AUTPlayerController_ViewCamera_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.UTDemoPause
struct AUTPlayerController_UTDemoPause_Params
{
};

// Function UnrealTournament.UTPlayerController.UTClientSetRotation
struct AUTPlayerController_UTClientSetRotation_Params
{
	struct FRotator                                    NewRotation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.UTClientPlaySound
struct AUTPlayerController_UTClientPlaySound_Params
{
	class USoundBase*                                  Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.UTBugIt
struct AUTPlayerController_UTBugIt_Params
{
	struct FString                                     ScreenShotDescription;                                    // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTPlayerController.ToggleTacCom
struct AUTPlayerController_ToggleTacCom_Params
{
};

// Function UnrealTournament.UTPlayerController.ToggleSlideOut
struct AUTPlayerController_ToggleSlideOut_Params
{
};

// Function UnrealTournament.UTPlayerController.ToggleSingleTap
struct AUTPlayerController_ToggleSingleTap_Params
{
};

// Function UnrealTournament.UTPlayerController.ToggleShowTimers
struct AUTPlayerController_ToggleShowTimers_Params
{
};

// Function UnrealTournament.UTPlayerController.ToggleShowDamage
struct AUTPlayerController_ToggleShowDamage_Params
{
};

// Function UnrealTournament.UTPlayerController.ToggleShowBinds
struct AUTPlayerController_ToggleShowBinds_Params
{
};

// Function UnrealTournament.UTPlayerController.ToggleScoreboard
struct AUTPlayerController_ToggleScoreboard_Params
{
	bool                                               bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.TogglePlayerInfo
struct AUTPlayerController_TogglePlayerInfo_Params
{
};

// Function UnrealTournament.UTPlayerController.ToggleMinimap
struct AUTPlayerController_ToggleMinimap_Params
{
};

// Function UnrealTournament.UTPlayerController.ToggleBehindView
struct AUTPlayerController_ToggleBehindView_Params
{
};

// Function UnrealTournament.UTPlayerController.ThrowWeapon
struct AUTPlayerController_ThrowWeapon_Params
{
};

// Function UnrealTournament.UTPlayerController.TestVote
struct AUTPlayerController_TestVote_Params
{
};

// Function UnrealTournament.UTPlayerController.TestCallstack
struct AUTPlayerController_TestCallstack_Params
{
};

// Function UnrealTournament.UTPlayerController.SwitchWeaponGroup
struct AUTPlayerController_SwitchWeaponGroup_Params
{
	int                                                Group;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.SwitchWeapon
struct AUTPlayerController_SwitchWeapon_Params
{
	int                                                Group;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.SwitchToBestWeapon
struct AUTPlayerController_SwitchToBestWeapon_Params
{
};

// Function UnrealTournament.UTPlayerController.Suicide
struct AUTPlayerController_Suicide_Params
{
};

// Function UnrealTournament.UTPlayerController.StopDropCarriedObject
struct AUTPlayerController_StopDropCarriedObject_Params
{
};

// Function UnrealTournament.UTPlayerController.StartCastingGuide
struct AUTPlayerController_StartCastingGuide_Params
{
};

// Function UnrealTournament.UTPlayerController.SlowerEmote
struct AUTPlayerController_SlowerEmote_Params
{
};

// Function UnrealTournament.UTPlayerController.SkullPickedUp
struct AUTPlayerController_SkullPickedUp_Params
{
};

// Function UnrealTournament.UTPlayerController.ShowWeaponWheel
struct AUTPlayerController_ShowWeaponWheel_Params
{
};

// Function UnrealTournament.UTPlayerController.ShowDropMenu
struct AUTPlayerController_ShowDropMenu_Params
{
};

// Function UnrealTournament.UTPlayerController.ShowComsMenu
struct AUTPlayerController_ShowComsMenu_Params
{
};

// Function UnrealTournament.UTPlayerController.SetWeaponHand
struct AUTPlayerController_SetWeaponHand_Params
{
	EWeaponHand                                        NewHand;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.SetWeaponBobScaling
struct AUTPlayerController_SetWeaponBobScaling_Params
{
	float                                              NewScaling;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.SetViewedScorePS
struct AUTPlayerController_SetViewedScorePS_Params
{
	class AUTPlayerState*                              ViewedPS;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      NewStatsPage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.SetStylizedPP
struct AUTPlayerController_SetStylizedPP_Params
{
	int                                                NewPP;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.SetMouseSensitivityUT
struct AUTPlayerController_SetMouseSensitivityUT_Params
{
	float                                              NewSensitivity;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.SetMouseAccelPower
struct AUTPlayerController_SetMouseAccelPower_Params
{
	float                                              NewAccelPower;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.SetMouseAccelOffset
struct AUTPlayerController_SetMouseAccelOffset_Params
{
	float                                              NewAccelOffset;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.SetMouseAccelMax
struct AUTPlayerController_SetMouseAccelMax_Params
{
	float                                              NewAccelMax;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.SetMouseAccel
struct AUTPlayerController_SetMouseAccel_Params
{
	float                                              NewAccel;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.SetGamepadSensitivityRight
struct AUTPlayerController_SetGamepadSensitivityRight_Params
{
	float                                              NewSensitivity;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.SetGamepadSensitivityLeft
struct AUTPlayerController_SetGamepadSensitivityLeft_Params
{
	float                                              NewSensitivity;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.SetEyeOffsetScaling
struct AUTPlayerController_SetEyeOffsetScaling_Params
{
	float                                              NewScaling;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.SetEmoteSpeed
struct AUTPlayerController_SetEmoteSpeed_Params
{
	float                                              NewEmoteSpeed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.ServerVoiceDebug
struct AUTPlayerController_ServerVoiceDebug_Params
{
	struct FString                                     Command;                                                  // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTPlayerController.ServerVoiceChatRejoinChannel
struct AUTPlayerController_ServerVoiceChatRejoinChannel_Params
{
};

// Function UnrealTournament.UTPlayerController.ServerVoiceChatReconnected
struct AUTPlayerController_ServerVoiceChatReconnected_Params
{
};

// Function UnrealTournament.UTPlayerController.ServerViewProjectile
struct AUTPlayerController_ServerViewProjectile_Params
{
};

// Function UnrealTournament.UTPlayerController.ServerViewPlayerState
struct AUTPlayerController_ServerViewPlayerState_Params
{
	class APlayerState*                                PS;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.ServerViewPlaceholderAtLocation
struct AUTPlayerController_ServerViewPlaceholderAtLocation_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.ServerViewPawn
struct AUTPlayerController_ServerViewPawn_Params
{
	class APawn*                                       PawnToView;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.ServerViewFlagHolder
struct AUTPlayerController_ServerViewFlagHolder_Params
{
	unsigned char                                      TeamIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.ServerViewFlag
struct AUTPlayerController_ServerViewFlag_Params
{
	unsigned char                                      Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.ServerUpdatePing
struct AUTPlayerController_ServerUpdatePing_Params
{
	float                                              ExactPing;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.ServerToggleWarmup
struct AUTPlayerController_ServerToggleWarmup_Params
{
};

// Function UnrealTournament.UTPlayerController.ServerThrowWeapon
struct AUTPlayerController_ServerThrowWeapon_Params
{
};

// Function UnrealTournament.UTPlayerController.ServerSwitchTeam
struct AUTPlayerController_ServerSwitchTeam_Params
{
};

// Function UnrealTournament.UTPlayerController.ServerSuicide
struct AUTPlayerController_ServerSuicide_Params
{
};

// Function UnrealTournament.UTPlayerController.ServerStartCastingGuide
struct AUTPlayerController_ServerStartCastingGuide_Params
{
};

// Function UnrealTournament.UTPlayerController.ServerSetViewedScorePS
struct AUTPlayerController_ServerSetViewedScorePS_Params
{
	class AUTPlayerState*                              ViewedPS;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      NewStatsPage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.ServerSendComsMessage
struct AUTPlayerController_ServerSendComsMessage_Params
{
	class AUTPlayerState*                              Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Switch;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.ServerSelectSpawnPoint
struct AUTPlayerController_ServerSelectSpawnPoint_Params
{
	class APlayerStart*                                DesiredStart;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.ServerRestartPlayerAltFire
struct AUTPlayerController_ServerRestartPlayerAltFire_Params
{
};

// Function UnrealTournament.UTPlayerController.ServerRequestRally
struct AUTPlayerController_ServerRequestRally_Params
{
};

// Function UnrealTournament.UTPlayerController.ServerRegisterBanVote
struct AUTPlayerController_ServerRegisterBanVote_Params
{
	class AUTPlayerState*                              BadGuy;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.ServerReceiveCountryFlag
struct AUTPlayerController_ServerReceiveCountryFlag_Params
{
	struct FName                                       NewCountryFlag;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.ServerRconNextMap
struct AUTPlayerController_ServerRconNextMap_Params
{
	struct FString                                     NextMap;                                                  // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTPlayerController.ServerRconMap
struct AUTPlayerController_ServerRconMap_Params
{
	struct FString                                     NewMap;                                                   // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTPlayerController.ServerPlayGroupTaunt
struct AUTPlayerController_ServerPlayGroupTaunt_Params
{
};

// Function UnrealTournament.UTPlayerController.ServerNP
struct AUTPlayerController_ServerNP_Params
{
};

// Function UnrealTournament.UTPlayerController.ServerNotifyProjectileHit
struct AUTPlayerController_ServerNotifyProjectileHit_Params
{
	class AUTProjectile*                               HitProj;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize                         HitLocation;                                              // (Parm)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeStamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.ServerNegotiatePredictionPing
struct AUTPlayerController_ServerNegotiatePredictionPing_Params
{
	float                                              NewPredictionPing;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.ServerMutate
struct AUTPlayerController_ServerMutate_Params
{
	struct FString                                     MutateString;                                             // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTPlayerController.ServerEmote
struct AUTPlayerController_ServerEmote_Params
{
	int                                                EmoteIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.ServerCasterReady
struct AUTPlayerController_ServerCasterReady_Params
{
};

// Function UnrealTournament.UTPlayerController.ServerBouncePing
struct AUTPlayerController_ServerBouncePing_Params
{
	float                                              TimeStamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.ServerActivatePowerUpPress
struct AUTPlayerController_ServerActivatePowerUpPress_Params
{
};

// Function UnrealTournament.UTPlayerController.SendComsMessage
struct AUTPlayerController_SendComsMessage_Params
{
	class AUTPlayerState*                              Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Switch;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.SelectTranslocator
struct AUTPlayerController_SelectTranslocator_Params
{
};

// Function UnrealTournament.UTPlayerController.RestartVOIP
struct AUTPlayerController_RestartVOIP_Params
{
};

// Function UnrealTournament.UTPlayerController.ResolveKeybindToFKey
struct AUTPlayerController_ResolveKeybindToFKey_Params
{
	struct FString                                     Command;                                                  // (Parm, ZeroConstructor)
	TArray<struct FKey>                                Keys;                                                     // (Parm, OutParm, ZeroConstructor)
	bool                                               bIncludeGamepad;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeAxis;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.ResolveKeybind
struct AUTPlayerController_ResolveKeybind_Params
{
	struct FString                                     Command;                                                  // (Parm, ZeroConstructor)
	TArray<struct FString>                             Keys;                                                     // (Parm, OutParm, ZeroConstructor)
	bool                                               bIncludeGamepad;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeAxis;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.RequestRally
struct AUTPlayerController_RequestRally_Params
{
};

// Function UnrealTournament.UTPlayerController.RefreshWeaponGroups
struct AUTPlayerController_RefreshWeaponGroups_Params
{
};

// Function UnrealTournament.UTPlayerController.RconNextMap
struct AUTPlayerController_RconNextMap_Params
{
	struct FString                                     NextMap;                                                  // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTPlayerController.RconMap
struct AUTPlayerController_RconMap_Params
{
	struct FString                                     NewMap;                                                   // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTPlayerController.PumpkinPickedUp
struct AUTPlayerController_PumpkinPickedUp_Params
{
	float                                              GainedAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GoalAmount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.Predict
struct AUTPlayerController_Predict_Params
{
	float                                              NewDesiredPredictionPing;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.PlayTaunt2
struct AUTPlayerController_PlayTaunt2_Params
{
};

// Function UnrealTournament.UTPlayerController.PlayTaunt
struct AUTPlayerController_PlayTaunt_Params
{
};

// Function UnrealTournament.UTPlayerController.PlayMenuSelectSound
struct AUTPlayerController_PlayMenuSelectSound_Params
{
};

// Function UnrealTournament.UTPlayerController.PlayGroupTaunt
struct AUTPlayerController_PlayGroupTaunt_Params
{
};

// Function UnrealTournament.UTPlayerController.OnRepVoiceChatLoginToken
struct AUTPlayerController_OnRepVoiceChatLoginToken_Params
{
};

// Function UnrealTournament.UTPlayerController.OnRepVoiceChatJoinToken
struct AUTPlayerController_OnRepVoiceChatJoinToken_Params
{
};

// Function UnrealTournament.UTPlayerController.OnRep_HUDClass
struct AUTPlayerController_OnRep_HUDClass_Params
{
};

// Function UnrealTournament.UTPlayerController.OnRep_CastingViewIndex
struct AUTPlayerController_OnRep_CastingViewIndex_Params
{
};

// Function UnrealTournament.UTPlayerController.OnRep_CastingGuide
struct AUTPlayerController_OnRep_CastingGuide_Params
{
};

// Function UnrealTournament.UTPlayerController.NP
struct AUTPlayerController_NP_Params
{
};

// Function UnrealTournament.UTPlayerController.NetStats
struct AUTPlayerController_NetStats_Params
{
};

// Function UnrealTournament.UTPlayerController.Mutate
struct AUTPlayerController_Mutate_Params
{
	struct FString                                     MutateString;                                             // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTPlayerController.K2_ReceiveLocalizedMessage
struct AUTPlayerController_K2_ReceiveLocalizedMessage_Params
{
	class UClass*                                      Message;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Switch;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerState*                                RelatedPlayerState_2;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerState*                                RelatedPlayerState_3;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     OptionalObject;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.IsLineUpActive
struct AUTPlayerController_IsLineUpActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.HudSettings
struct AUTPlayerController_HudSettings_Params
{
};

// Function UnrealTournament.UTPlayerController.HideWeaponWheel
struct AUTPlayerController_HideWeaponWheel_Params
{
};

// Function UnrealTournament.UTPlayerController.HideComsMenu
struct AUTPlayerController_HideComsMenu_Params
{
};

// Function UnrealTournament.UTPlayerController.GhostStop
struct AUTPlayerController_GhostStop_Params
{
};

// Function UnrealTournament.UTPlayerController.GhostStart
struct AUTPlayerController_GhostStart_Params
{
};

// Function UnrealTournament.UTPlayerController.GhostPlay
struct AUTPlayerController_GhostPlay_Params
{
};

// Function UnrealTournament.UTPlayerController.GetUTCharacter
struct AUTPlayerController_GetUTCharacter_Params
{
	class AUTCharacter*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.GetSpectatingRotation
struct AUTPlayerController_GetSpectatingRotation_Params
{
	struct FVector                                     ViewLoc;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.FlushVOIP
struct AUTPlayerController_FlushVOIP_Params
{
};

// Function UnrealTournament.UTPlayerController.FindGoodView
struct AUTPlayerController_FindGoodView_Params
{
	struct FVector                                     TargetLoc;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bIsUpdate;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.FasterEmote
struct AUTPlayerController_FasterEmote_Params
{
};

// Function UnrealTournament.UTPlayerController.EnableAutoCam
struct AUTPlayerController_EnableAutoCam_Params
{
};

// Function UnrealTournament.UTPlayerController.Emote
struct AUTPlayerController_Emote_Params
{
	int                                                EmoteIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.DumpMapVote
struct AUTPlayerController_DumpMapVote_Params
{
};

// Function UnrealTournament.UTPlayerController.DropCarriedObject
struct AUTPlayerController_DropCarriedObject_Params
{
};

// Function UnrealTournament.UTPlayerController.DemoTimeDilation
struct AUTPlayerController_DemoTimeDilation_Params
{
	float                                              DeltaAmount;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.DemoSetTimeDilation
struct AUTPlayerController_DemoSetTimeDilation_Params
{
	float                                              Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.DemoSeek
struct AUTPlayerController_DemoSeek_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.DemoRestart
struct AUTPlayerController_DemoRestart_Params
{
};

// Function UnrealTournament.UTPlayerController.DemoGoToLive
struct AUTPlayerController_DemoGoToLive_Params
{
};

// Function UnrealTournament.UTPlayerController.DemoGoTo
struct AUTPlayerController_DemoGoTo_Params
{
	float                                              Seconds;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.ClientWarnEnemyBehind
struct AUTPlayerController_ClientWarnEnemyBehind_Params
{
	class AUTPlayerState*                              TeamPS;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AUTCharacter*                                Targeter;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      TeammateVoice;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.ClientViewSpectatorPawn
struct AUTPlayerController_ClientViewSpectatorPawn_Params
{
	struct FViewTargetTransitionParams                 TransitionParams;                                         // (Parm)
};

// Function UnrealTournament.UTPlayerController.ClientVerifyFiringInputs
struct AUTPlayerController_ClientVerifyFiringInputs_Params
{
};

// Function UnrealTournament.UTPlayerController.ClientUpdateWarmup
struct AUTPlayerController_ClientUpdateWarmup_Params
{
	bool                                               bNewWarmingUp;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.ClientUpdateTeamStats
struct AUTPlayerController_ClientUpdateTeamStats_Params
{
	unsigned char                                      TeamNum;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      TeamStatsIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.ClientUpdateSkillRating
struct AUTPlayerController_ClientUpdateSkillRating_Params
{
	struct FString                                     MatchRatingType;                                          // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTPlayerController.ClientUpdateScoreStats
struct AUTPlayerController_ClientUpdateScoreStats_Params
{
	class AUTPlayerState*                              ViewedPS;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      StatsPage;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      StatsIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.ClientUpdateDamageDone
struct AUTPlayerController_ClientUpdateDamageDone_Params
{
	int                                                DamageDone;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                RoundDamageDone;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.ClientToggleScoreboard
struct AUTPlayerController_ClientToggleScoreboard_Params
{
	bool                                               bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.ClientSwitchToBestWeapon
struct AUTPlayerController_ClientSwitchToBestWeapon_Params
{
};

// Function UnrealTournament.UTPlayerController.ClientStopKillcam
struct AUTPlayerController_ClientStopKillcam_Params
{
};

// Function UnrealTournament.UTPlayerController.ClientStartRally
struct AUTPlayerController_ClientStartRally_Params
{
	class AUTRallyPoint*                               RallyTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewRallyLocation;                                         // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.ClientShowMapVote
struct AUTPlayerController_ClientShowMapVote_Params
{
};

// Function UnrealTournament.UTPlayerController.ClientReturnPing
struct AUTPlayerController_ClientReturnPing_Params
{
	float                                              TimeStamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.ClientReceivePersonalMessage
struct AUTPlayerController_ClientReceivePersonalMessage_Params
{
	class UClass*                                      Message;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Switch;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerState*                                RelatedPlayerState_2;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerState*                                RelatedPlayerState_3;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     OptionalObject;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.ClientQueueCoolMoment
struct AUTPlayerController_ClientQueueCoolMoment_Params
{
	struct FUniqueNetIdRepl                            NetId;                                                    // (Parm)
	float                                              TimeToRewind;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.ClientPumpkinPickedUp
struct AUTPlayerController_ClientPumpkinPickedUp_Params
{
	float                                              GainedAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GoalAmount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.ClientProgressRally
struct AUTPlayerController_ClientProgressRally_Params
{
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.ClientPrepareForLineUp
struct AUTPlayerController_ClientPrepareForLineUp_Params
{
};

// Function UnrealTournament.UTPlayerController.ClientPrepareForIntermission
struct AUTPlayerController_ClientPrepareForIntermission_Params
{
};

// Function UnrealTournament.UTPlayerController.ClientPlayKillcam
struct AUTPlayerController_ClientPlayKillcam_Params
{
	class AController*                                 KillingController;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       PawnToFocus;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize                         FocusLoc;                                                 // (Parm)
	int                                                FocusYaw;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.ClientPlayInstantReplay
struct AUTPlayerController_ClientPlayInstantReplay_Params
{
	class APawn*                                       PawnToFocus;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeToRewind;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartDelay;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.ClientPlayBadSelectionSound
struct AUTPlayerController_ClientPlayBadSelectionSound_Params
{
};

// Function UnrealTournament.UTPlayerController.ClientNotifyTakeHit
struct AUTPlayerController_ClientNotifyTakeHit_Params
{
	bool                                               bFriendlyFire;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ShotDirYaw;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageTypeClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.ClientNotifyCausedHit
struct AUTPlayerController_ClientNotifyCausedHit_Params
{
	class AActor*                                      HitActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bArmorDamage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOverhealth;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.ClientLineUpIntroPlayerChange
struct AUTPlayerController_ClientLineUpIntroPlayerChange_Params
{
	class AUTPlayerState*                              PlayerChanged;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.ClientHideMapVote
struct AUTPlayerController_ClientHideMapVote_Params
{
};

// Function UnrealTournament.UTPlayerController.ClientHearSound
struct AUTPlayerController_ClientHearSound_Params
{
	class USoundBase*                                  TheSound;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      SoundPlayer;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize                         SoundLocation;                                            // (Parm)
	bool                                               bStopWhenOwnerDestroyed;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAmplifyVolume;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESoundAmplificationType>               AmpType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.ClientGotWeaponStayPickup
struct AUTPlayerController_ClientGotWeaponStayPickup_Params
{
	class AUTPickupWeapon*                             Pickup;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       TouchedBy;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.ClientDrawLine
struct AUTPlayerController_ClientDrawLine_Params
{
	struct FVector                                     Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FColor                                      Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.ClientDebugRewind
struct AUTPlayerController_ClientDebugRewind_Params
{
	struct FVector_NetQuantize                         TargetLocation;                                           // (Parm)
	struct FVector_NetQuantize                         RewindLocation;                                           // (Parm)
	struct FVector_NetQuantize                         PrePosition;                                              // (Parm)
	struct FVector_NetQuantize                         PostPosition;                                             // (Parm)
	float                                              TargetCapsuleHeight;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PredictionTime;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTeleported;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.ClientCompleteRally
struct AUTPlayerController_ClientCompleteRally_Params
{
};

// Function UnrealTournament.UTPlayerController.ClientBackendNotify
struct AUTPlayerController_ClientBackendNotify_Params
{
	struct FString                                     TypeStr;                                                  // (Parm, ZeroConstructor)
	struct FString                                     Data;                                                     // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTPlayerController.ClientAnnounceRoundScore
struct AUTPlayerController_ClientAnnounceRoundScore_Params
{
	class AUTTeamInfo*                                 WinningTeam;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerState*                                ScoringPlayer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      RoundBonus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.ClearTokens
struct AUTPlayerController_ClearTokens_Params
{
};

// Function UnrealTournament.UTPlayerController.ChangeTeam
struct AUTPlayerController_ChangeTeam_Params
{
	unsigned char                                      NewTeamIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.BehindView
struct AUTPlayerController_BehindView_Params
{
	bool                                               bWantBehindView;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerController.ActivateSpecial
struct AUTPlayerController_ActivateSpecial_Params
{
};

// Function UnrealTournament.UTAnnouncer.StartNextAnnouncement
struct UUTAnnouncer_StartNextAnnouncement_Params
{
	bool                                               bUseSpacing;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTAnnouncer.PrecacheAnnouncement
struct UUTAnnouncer_PrecacheAnnouncement_Params
{
	struct FName                                       SoundName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTAnnouncer.PlayNextAnnouncement
struct UUTAnnouncer_PlayNextAnnouncement_Params
{
};

// Function UnrealTournament.UTAnnouncer.PlayAnnouncement
struct UUTAnnouncer_PlayAnnouncement_Params
{
	class UClass*                                      MessageClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Switch;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerState*                                PlayerState1;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class APlayerState*                                PlayerState2;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     OptionalObject;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTAnnouncer.AnnouncementFinished
struct UUTAnnouncer_AnnouncementFinished_Params
{
};

// Function UnrealTournament.UTAvoidMarker.OnOverlapBegin
struct AUTAvoidMarker_OnOverlapBegin_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function UnrealTournament.UTGib.OnPhysicsCollision
struct AUTGib_OnPhysicsCollision_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function UnrealTournament.UTDamageType.ShouldGib
struct UUTDamageType_ShouldGib_Params
{
	class AUTCharacter*                                Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTDamageType.ScoreKill
struct UUTDamageType_ScoreKill_Params
{
	class AUTPlayerState*                              KillerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AUTPlayerState*                              VictimState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       KilledPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTDamageType.PlayHitEffects
struct UUTDamageType_PlayHitEffects_Params
{
	class AUTCharacter*                                HitPawn;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPlayedArmorEffect;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTDamageType.PlayGibEffects
struct UUTDamageType_PlayGibEffects_Params
{
	class AUTGib*                                      Gib;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTDamageType.PlayDeathEffects
struct UUTDamageType_PlayDeathEffects_Params
{
	class AUTCharacter*                                DyingPawn;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTDamageType.OverrideDeathSound
struct UUTDamageType_OverrideDeathSound_Params
{
	class AUTCharacter*                                Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTDamageType.GetDeathAnim
struct UUTDamageType_GetDeathAnim_Params
{
	class AUTCharacter*                                DyingPawn;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTCosmetic.SetBodiesToSimulatePhysics
struct AUTCosmetic_SetBodiesToSimulatePhysics_Params
{
};

// Function UnrealTournament.UTCosmetic.OverrideGib
struct AUTCosmetic_OverrideGib_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTCosmetic.OnWearerHeadshot
struct AUTCosmetic_OnWearerHeadshot_Params
{
};

// Function UnrealTournament.UTCosmetic.OnWearerEmoteStarted
struct AUTCosmetic_OnWearerEmoteStarted_Params
{
};

// Function UnrealTournament.UTCosmetic.OnWearerEmoteEnded
struct AUTCosmetic_OnWearerEmoteEnded_Params
{
};

// Function UnrealTournament.UTCosmetic.OnWearerDeath
struct AUTCosmetic_OnWearerDeath_Params
{
	class UClass*                                      DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCosmetic.OnVariantSelected
struct AUTCosmetic_OnVariantSelected_Params
{
	int                                                Variant;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCosmetic.OnSpreeLevelChanged
struct AUTCosmetic_OnSpreeLevelChanged_Params
{
	int                                                NewSpreeLevel;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCosmetic.OnFlashCountIncremented
struct AUTCosmetic_OnFlashCountIncremented_Params
{
};

// Function UnrealTournament.UTHat.HeadshotRotationComplete
struct AUTHat_HeadshotRotationComplete_Params
{
};

// Function UnrealTournament.UTLocalMessage.ShouldCountInstances
struct UUTLocalMessage_ShouldCountInstances_Params
{
	int                                                MessageIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     OptionalObject;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTLocalMessage.ResolveMessage
struct UUTLocalMessage_ResolveMessage_Params
{
	int                                                Switch;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTargetsPlayerState1;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerState*                                RelatedPlayerState_2;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerState*                                RelatedPlayerState_3;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     OptionalObject;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UnrealTournament.UTLocalMessage.PrecacheAnnouncements
struct UUTLocalMessage_PrecacheAnnouncements_Params
{
	class UUTAnnouncer*                                Announcer;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTLocalMessage.OnClientReceive
struct UUTLocalMessage_OnClientReceive_Params
{
	class APlayerController*                           LocalPC;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Switch;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerState*                                RelatedPlayerState_2;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerState*                                RelatedPlayerState_3;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     OptionalObject;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTLocalMessage.OnAnnouncementPlayed
struct UUTLocalMessage_OnAnnouncementPlayed_Params
{
	int                                                Switch;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     OptionalObject;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTLocalMessage.InterruptAnnouncement
struct UUTLocalMessage_InterruptAnnouncement_Params
{
	int                                                Switch;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     OptionalObject;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OtherMessageClass;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherSwitch;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     OtherOptionalObject;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTLocalMessage.GetText
struct UUTLocalMessage_GetText_Params
{
	int                                                Switch;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTargetsPlayerState1;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerState*                                RelatedPlayerState_2;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerState*                                RelatedPlayerState_3;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     OptionalObject;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UnrealTournament.UTLocalMessage.GetScaleInTime
struct UUTLocalMessage_GetScaleInTime_Params
{
	int                                                MessageIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTLocalMessage.GetScaleInSize
struct UUTLocalMessage_GetScaleInSize_Params
{
	int                                                MessageIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTLocalMessage.GetMessageColor
struct UUTLocalMessage_GetMessageColor_Params
{
	int                                                MessageIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTLocalMessage.GetLifeTime
struct UUTLocalMessage_GetLifeTime_Params
{
	int                                                Switch;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTLocalMessage.GetAnnouncementUMGClassname
struct UUTLocalMessage_GetAnnouncementUMGClassname_Params
{
	int                                                Switch;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     OptionalObject;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function UnrealTournament.UTLocalMessage.GetAnnouncementSpacing
struct UUTLocalMessage_GetAnnouncementSpacing_Params
{
	int                                                Switch;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     OptionalObject;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTLocalMessage.GetAnnouncementSound
struct UUTLocalMessage_GetAnnouncementSound_Params
{
	int                                                Switch;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     OptionalObject;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTLocalMessage.GetAnnouncementName
struct UUTLocalMessage_GetAnnouncementName_Params
{
	int                                                Switch;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     OptionalObject;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class APlayerState*                                RelatedPlayerState_2;                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class APlayerState*                                RelatedPlayerState_3;                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTLocalMessage.CancelByAnnouncement
struct UUTLocalMessage_CancelByAnnouncement_Params
{
	int                                                Switch;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     OptionalObject;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OtherMessageClass;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherSwitch;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     OtherOptionalObject;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTLocalMessage.Blueprint_GetText
struct UUTLocalMessage_Blueprint_GetText_Params
{
	int                                                Switch;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTargetsPlayerState1;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerState*                                RelatedPlayerState_2;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerState*                                RelatedPlayerState_3;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     OptionalObject;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UnrealTournament.UTLocalMessage.Blueprint_GetLifeTime
struct UUTLocalMessage_Blueprint_GetLifeTime_Params
{
	int                                                Switch;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTResetInterface.Reset
struct UUTResetInterface_Reset_Params
{
};

// Function UnrealTournament.UTGameVolume.ScriptGetTeamNum
struct AUTGameVolume_ScriptGetTeamNum_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerState.UpdateWeaponSkinPrefFromProfile
struct AUTPlayerState_UpdateWeaponSkinPrefFromProfile_Params
{
	class AUTWeapon*                                   Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerState.SetRemainingBoosts
struct AUTPlayerState_SetRemainingBoosts_Params
{
	unsigned char                                      NewRemainingBoosts;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerState.SetCharacterVoice
struct AUTPlayerState_SetCharacterVoice_Params
{
	struct FString                                     CharacterVoicePath;                                       // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTPlayerState.SetCharacter
struct AUTPlayerState_SetCharacter_Params
{
	struct FString                                     CharacterPath;                                            // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTPlayerState.SetCarriedObject
struct AUTPlayerState_SetCarriedObject_Params
{
	class AUTCarriedObject*                            NewCarriedObject;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerState.ServerSlowerEmote
struct AUTPlayerState_ServerSlowerEmote_Params
{
};

// Function UnrealTournament.UTPlayerState.ServerSetEmoteSpeed
struct AUTPlayerState_ServerSetEmoteSpeed_Params
{
	float                                              NewEmoteSpeed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerState.ServerSetCharacter
struct AUTPlayerState_ServerSetCharacter_Params
{
	struct FString                                     CharacterPath;                                            // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTPlayerState.ServerSetBoostItem
struct AUTPlayerState_ServerSetBoostItem_Params
{
	int                                                PowerupIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerState.ServerRequestChangeTeam
struct AUTPlayerState_ServerRequestChangeTeam_Params
{
	unsigned char                                      NewTeamIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerState.ServerReceiveWeaponSkin
struct AUTPlayerState_ServerReceiveWeaponSkin_Params
{
	struct FString                                     NewWeaponSkin;                                            // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTPlayerState.ServerReceiveTauntClass
struct AUTPlayerState_ServerReceiveTauntClass_Params
{
	struct FString                                     NewTauntClass;                                            // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTPlayerState.ServerReceiveTaunt2Class
struct AUTPlayerState_ServerReceiveTaunt2Class_Params
{
	struct FString                                     NewTauntClass;                                            // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTPlayerState.ServerReceiveLeaderHatClass
struct AUTPlayerState_ServerReceiveLeaderHatClass_Params
{
	struct FString                                     NewLeaderHatClass;                                        // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTPlayerState.ServerReceiveIntroClass
struct AUTPlayerState_ServerReceiveIntroClass_Params
{
	struct FString                                     NewIntroClass;                                            // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTPlayerState.ServerReceiveHatVariant
struct AUTPlayerState_ServerReceiveHatVariant_Params
{
	int                                                NewVariant;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerState.ServerReceiveHatClass
struct AUTPlayerState_ServerReceiveHatClass_Params
{
	struct FString                                     NewHatClass;                                              // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTPlayerState.ServerReceiveGroupTauntClass
struct AUTPlayerState_ServerReceiveGroupTauntClass_Params
{
	struct FString                                     NewGroupTauntClass;                                       // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTPlayerState.ServerReceiveEyewearVariant
struct AUTPlayerState_ServerReceiveEyewearVariant_Params
{
	int                                                NewVariant;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerState.ServerReceiveEyewearClass
struct AUTPlayerState_ServerReceiveEyewearClass_Params
{
	struct FString                                     NewEyewearClass;                                          // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTPlayerState.ServerNextChatDestination
struct AUTPlayerState_ServerNextChatDestination_Params
{
};

// Function UnrealTournament.UTPlayerState.ServerFasterEmote
struct AUTPlayerState_ServerFasterEmote_Params
{
};

// Function UnrealTournament.UTPlayerState.RegisterVote
struct AUTPlayerState_RegisterVote_Params
{
	class AUTReplicatedMapInfo*                        VoteInfo;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerState.PlayTauntByIndex
struct AUTPlayerState_PlayTauntByIndex_Params
{
	int                                                TauntIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerState.PlayTauntByClass
struct AUTPlayerState_PlayTauntByClass_Params
{
	class UClass*                                      TauntToPlay;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerState.PlayGroupTaunt
struct AUTPlayerState_PlayGroupTaunt_Params
{
};

// Function UnrealTournament.UTPlayerState.OnWeaponSpreeDamage
struct AUTPlayerState_OnWeaponSpreeDamage_Params
{
};

// Function UnrealTournament.UTPlayerState.OnRespawnWaitReceived
struct AUTPlayerState_OnRespawnWaitReceived_Params
{
};

// Function UnrealTournament.UTPlayerState.OnRepTaunt
struct AUTPlayerState_OnRepTaunt_Params
{
};

// Function UnrealTournament.UTPlayerState.OnRepSpecialTeamPlayer
struct AUTPlayerState_OnRepSpecialTeamPlayer_Params
{
};

// Function UnrealTournament.UTPlayerState.OnRepSpecialPlayer
struct AUTPlayerState_OnRepSpecialPlayer_Params
{
};

// Function UnrealTournament.UTPlayerState.OnRepOverrideHat
struct AUTPlayerState_OnRepOverrideHat_Params
{
};

// Function UnrealTournament.UTPlayerState.OnRepHatVariant
struct AUTPlayerState_OnRepHatVariant_Params
{
};

// Function UnrealTournament.UTPlayerState.OnRepHatLeader
struct AUTPlayerState_OnRepHatLeader_Params
{
};

// Function UnrealTournament.UTPlayerState.OnRepHat
struct AUTPlayerState_OnRepHat_Params
{
};

// Function UnrealTournament.UTPlayerState.OnRepEyewearVariant
struct AUTPlayerState_OnRepEyewearVariant_Params
{
};

// Function UnrealTournament.UTPlayerState.OnRepEyewear
struct AUTPlayerState_OnRepEyewear_Params
{
};

// Function UnrealTournament.UTPlayerState.OnRepEmoteSpeed
struct AUTPlayerState_OnRepEmoteSpeed_Params
{
};

// Function UnrealTournament.UTPlayerState.OnRep_HasHighScore
struct AUTPlayerState_OnRep_HasHighScore_Params
{
};

// Function UnrealTournament.UTPlayerState.OnRep_ActiveGroupTaunt
struct AUTPlayerState_OnRep_ActiveGroupTaunt_Params
{
};

// Function UnrealTournament.UTPlayerState.OnPlayerCardUpdated
struct AUTPlayerState_OnPlayerCardUpdated_Params
{
};

// Function UnrealTournament.UTPlayerState.OnPlayerCardLoadError
struct AUTPlayerState_OnPlayerCardLoadError_Params
{
};

// Function UnrealTournament.UTPlayerState.OnPlayerCardLoadCompleted
struct AUTPlayerState_OnPlayerCardLoadCompleted_Params
{
};

// Function UnrealTournament.UTPlayerState.OnOutOfLives
struct AUTPlayerState_OnOutOfLives_Params
{
};

// Function UnrealTournament.UTPlayerState.OnDeathsReceived
struct AUTPlayerState_OnDeathsReceived_Params
{
};

// Function UnrealTournament.UTPlayerState.OnCarriedObjectChanged
struct AUTPlayerState_OnCarriedObjectChanged_Params
{
};

// Function UnrealTournament.UTPlayerState.NotifyTeamChanged
struct AUTPlayerState_NotifyTeamChanged_Params
{
};

// Function UnrealTournament.UTPlayerState.NotIdle
struct AUTPlayerState_NotIdle_Params
{
};

// Function UnrealTournament.UTPlayerState.IsOnlySpectator
struct AUTPlayerState_IsOnlySpectator_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerState.IsABeginner
struct AUTPlayerState_IsABeginner_Params
{
	class AUTBaseGameMode*                             DefaultGameMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerState.IncrementKills
struct AUTPlayerState_IncrementKills_Params
{
	class UClass*                                      DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnemyKill;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AUTPlayerState*                              VictimPS;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerState.IncrementKillAssists
struct AUTPlayerState_IncrementKillAssists_Params
{
	class UClass*                                      DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnemyKill;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AUTPlayerState*                              VictimPS;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerState.IncrementDeaths
struct AUTPlayerState_IncrementDeaths_Params
{
	class UClass*                                      DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AUTPlayerState*                              KillerPlayerState;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerState.HandleTeamChanged
struct AUTPlayerState_HandleTeamChanged_Params
{
	class AController*                                 Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerState.GetUTCharacter
struct AUTPlayerState_GetUTCharacter_Params
{
	class AUTCharacter*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerState.GetTeamNum
struct AUTPlayerState_GetTeamNum_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerState.GetTeamInfo
struct AUTPlayerState_GetTeamInfo_Params
{
	class AUTTeamInfo*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerState.GetStatsValue
struct AUTPlayerState_GetStatsValue_Params
{
	struct FName                                       StatsName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerState.GetRoundStatsValue
struct AUTPlayerState_GetRoundStatsValue_Params
{
	struct FName                                       StatsName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerState.GetRankCheck
struct AUTPlayerState_GetRankCheck_Params
{
	class AUTBaseGameMode*                             DefaultGame;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerState.GetPrevXP
struct AUTPlayerState_GetPrevXP_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerState.GetBadgeFromELO
struct AUTPlayerState_GetBadgeFromELO_Params
{
	class AUTBaseGameMode*                             DefaultGame;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRankedSession;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                BadgeLevel;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                SubLevel;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerState.ClientReceiveRconMessage
struct AUTPlayerState_ClientReceiveRconMessage_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTPlayerState.ClearCarriedObject
struct AUTPlayerState_ClearCarriedObject_Params
{
	class AUTCarriedObject*                            OldCarriedObject;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerState.ClampXP
struct AUTPlayerState_ClampXP_Params
{
	int                                                MaxValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerState.CanAwardOnlineXP
struct AUTPlayerState_CanAwardOnlineXP_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerState.AdjustScore
struct AUTPlayerState_AdjustScore_Params
{
	int                                                ScoreAdjustment;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPlayerState.AddCoolFactorMinorEvent
struct AUTPlayerState_AddCoolFactorMinorEvent_Params
{
};

// Function UnrealTournament.UTPlayerState.AddCoolFactorEvent
struct AUTPlayerState_AddCoolFactorEvent_Params
{
	float                                              CoolFactorAddition;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTBaseGameMode.GetHostId
struct AUTBaseGameMode_GetHostId_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function UnrealTournament.UTBaseGameMode.EvalBoolOptions
struct AUTBaseGameMode_EvalBoolOptions_Params
{
	struct FString                                     InOpt;                                                    // (Parm, ZeroConstructor)
	bool                                               Default;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTBaseGameMode.AllowTextMessage
struct AUTBaseGameMode_AllowTextMessage_Params
{
	struct FString                                     Msg;                                                      // (Parm, OutParm, ZeroConstructor)
	bool                                               bIsTeamMessage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AUTBasePlayerController*                     Sender;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTServerBeaconClient.ServerRequestQuickplay
struct AUTServerBeaconClient_ServerRequestQuickplay_Params
{
	struct FString                                     MatchType;                                                // (Parm, ZeroConstructor)
	int                                                ELORank;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBeginner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTServerBeaconClient.ServerRequestNextInstancePlayer
struct AUTServerBeaconClient_ServerRequestNextInstancePlayer_Params
{
	int                                                InstanceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LastInstancePlayersIndex;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTServerBeaconClient.ServerRequestNextInstance
struct AUTServerBeaconClient_ServerRequestNextInstance_Params
{
	int                                                LastInstanceIndex;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTServerBeaconClient.ServerRequestInstanceJoin
struct AUTServerBeaconClient_ServerRequestInstanceJoin_Params
{
	struct FString                                     InstanceId;                                               // (Parm, ZeroConstructor)
	bool                                               bSpectator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Rank;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTServerBeaconClient.ServerRequestInfo
struct AUTServerBeaconClient_ServerRequestInfo_Params
{
};

// Function UnrealTournament.UTServerBeaconClient.ServerPing
struct AUTServerBeaconClient_ServerPing_Params
{
};

// Function UnrealTournament.UTServerBeaconClient.ClientWaitForQuickplay
struct AUTServerBeaconClient_ClientWaitForQuickplay_Params
{
	uint32_t                                           bNewInstance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTServerBeaconClient.ClientRequestInstanceResult
struct AUTServerBeaconClient_ClientRequestInstanceResult_Params
{
	TEnumAsByte<EInstanceJoinResult>                   JoinResult;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Params;                                                   // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTServerBeaconClient.ClientReceiveInstancePlayer
struct AUTServerBeaconClient_ClientReceiveInstancePlayer_Params
{
	int                                                InstanceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InInstancePlayersCount;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMatchPlayerListStruct                      inPlayerInfo;                                             // (ConstParm, Parm, ReferenceParm)
};

// Function UnrealTournament.UTServerBeaconClient.ClientReceiveInstance
struct AUTServerBeaconClient_ClientReceiveInstance_Params
{
	int                                                InInstanceCount;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TotalInstances;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FServerInstanceData                         InstanceInfo;                                             // (ConstParm, Parm, ReferenceParm)
};

// Function UnrealTournament.UTServerBeaconClient.ClientReceiveInfo
struct AUTServerBeaconClient_ClientReceiveInfo_Params
{
	struct FServerBeaconInfo                           ServerInfo;                                               // (ConstParm, Parm)
	int                                                NumInstances;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTServerBeaconClient.ClientReceivedAllInstancePlayers
struct AUTServerBeaconClient_ClientReceivedAllInstancePlayers_Params
{
	int                                                InstanceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FinalCount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTServerBeaconClient.ClientReceivedAllInstance
struct AUTServerBeaconClient_ClientReceivedAllInstance_Params
{
	int                                                FinalCount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTServerBeaconClient.ClientQuickplayNotAvailable
struct AUTServerBeaconClient_ClientQuickplayNotAvailable_Params
{
};

// Function UnrealTournament.UTServerBeaconClient.ClientPong
struct AUTServerBeaconClient_ClientPong_Params
{
	int                                                inServerTickRate;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTServerBeaconClient.ClientJoinQuickplay
struct AUTServerBeaconClient_ClientJoinQuickplay_Params
{
	struct FString                                     InstanceGuid;                                             // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTReplicatedMapInfo.OnRep_VoteCount
struct AUTReplicatedMapInfo_OnRep_VoteCount_Params
{
};

// Function UnrealTournament.UTReplicatedMapInfo.OnRep_MapScreenshotReference
struct AUTReplicatedMapInfo_OnRep_MapScreenshotReference_Params
{
};

// Function UnrealTournament.UTReplicatedMapInfo.OnRep_MapPackageName
struct AUTReplicatedMapInfo_OnRep_MapPackageName_Params
{
};

// Function UnrealTournament.UTServerBeaconLobbyClient.Lobby_UpdatePlayer
struct AUTServerBeaconLobbyClient_Lobby_UpdatePlayer_Params
{
	uint32_t                                           InstanceId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRemotePlayerInfo                           PlayerInfo;                                               // (Parm)
	bool                                               bLastUpdate;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTServerBeaconLobbyClient.Lobby_UpdateMatch
struct AUTServerBeaconLobbyClient_Lobby_UpdateMatch_Params
{
	uint32_t                                           InstanceId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMatchUpdate                                MatchUpdate;                                              // (ConstParm, Parm, ReferenceParm)
};

// Function UnrealTournament.UTServerBeaconLobbyClient.Lobby_StartGame
struct AUTServerBeaconLobbyClient_Lobby_StartGame_Params
{
	uint32_t                                           InstanceId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMatchUpdate                                MatchUpdate;                                              // (ConstParm, Parm, ReferenceParm)
};

// Function UnrealTournament.UTServerBeaconLobbyClient.Lobby_RequestNextBanFromServer
struct AUTServerBeaconLobbyClient_Lobby_RequestNextBanFromServer_Params
{
	uint32_t                                           InstanceId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LastIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTServerBeaconLobbyClient.Lobby_RequestFirstBanFromServer
struct AUTServerBeaconLobbyClient_Lobby_RequestFirstBanFromServer_Params
{
	uint32_t                                           InstanceId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTServerBeaconLobbyClient.Lobby_ReceiveUserMessage
struct AUTServerBeaconLobbyClient_Lobby_ReceiveUserMessage_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
	struct FString                                     SenderName;                                               // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTServerBeaconLobbyClient.Lobby_NotifyInstanceIsReady
struct AUTServerBeaconLobbyClient_Lobby_NotifyInstanceIsReady_Params
{
	uint32_t                                           InstanceId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       InstanceGuid;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     MapName;                                                  // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTServerBeaconLobbyClient.Lobby_IsDedicatedInstance
struct AUTServerBeaconLobbyClient_Lobby_IsDedicatedInstance_Params
{
	struct FGuid                                       InstanceGuid;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InHubKey;                                                 // (Parm, ZeroConstructor)
	struct FString                                     ServerName;                                               // (Parm, ZeroConstructor)
	struct FString                                     ServerGameMode;                                           // (Parm, ZeroConstructor)
	struct FString                                     ServerDescription;                                        // (Parm, ZeroConstructor)
	int                                                MaxPlayers;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTeamGame;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTServerBeaconLobbyClient.Lobby_InstanceEmpty
struct AUTServerBeaconLobbyClient_Lobby_InstanceEmpty_Params
{
	uint32_t                                           InstanceId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTServerBeaconLobbyClient.Lobby_EndGame
struct AUTServerBeaconLobbyClient_Lobby_EndGame_Params
{
	uint32_t                                           InstanceId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMatchUpdate                                MatchUpdate;                                              // (ConstParm, Parm, ReferenceParm)
};

// Function UnrealTournament.UTServerBeaconLobbyClient.Instance_ReceiveUserMessage
struct AUTServerBeaconLobbyClient_Instance_ReceiveUserMessage_Params
{
	struct FString                                     TargetUniqueId;                                           // (Parm, ZeroConstructor)
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTServerBeaconLobbyClient.Instance_ReceiveBan
struct AUTServerBeaconLobbyClient_Instance_ReceiveBan_Params
{
	struct FUniqueNetIdRepl                            BanId;                                                    // (Parm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Total;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFinished;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTServerBeaconLobbyClient.Instance_ReceieveRconMessage
struct AUTServerBeaconLobbyClient_Instance_ReceieveRconMessage_Params
{
	struct FString                                     TargetUniqueId;                                           // (Parm, ZeroConstructor)
	struct FString                                     AdminMessage;                                             // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTServerBeaconLobbyClient.Instance_Kick
struct AUTServerBeaconLobbyClient_Instance_Kick_Params
{
	struct FString                                     TargetUniqueId;                                           // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTServerBeaconLobbyClient.Instance_ForceShutdown
struct AUTServerBeaconLobbyClient_Instance_ForceShutdown_Params
{
};

// Function UnrealTournament.UTServerBeaconLobbyClient.Instance_AuthorizeAdmin
struct AUTServerBeaconLobbyClient_Instance_AuthorizeAdmin_Params
{
	struct FString                                     AdminId;                                                  // (Parm, ZeroConstructor)
	bool                                               bIsAdmin;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTServerBeaconLobbyClient.AuthorizeDedicatedInstance
struct AUTServerBeaconLobbyClient_AuthorizeDedicatedInstance_Params
{
	struct FGuid                                       HubGuid;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InstanceId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTGameMode.TravelToNextMap
struct AUTGameMode_TravelToNextMap_Params
{
};

// Function UnrealTournament.UTGameMode.SetWorldGravity
struct AUTGameMode_SetWorldGravity_Params
{
	float                                              NewGravity;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTGameMode.SetPlayerDefaults
struct AUTGameMode_SetPlayerDefaults_Params
{
	class APawn*                                       PlayerPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTGameMode.SetBotCount
struct AUTGameMode_SetBotCount_Params
{
	unsigned char                                      NewCount;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTGameMode.ScoreTeamKill
struct AUTGameMode_ScoreTeamKill_Params
{
	class AController*                                 Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       KilledPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTGameMode.ScorePickup
struct AUTGameMode_ScorePickup_Params
{
	class AUTPickup*                                   Pickup;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AUTPlayerState*                              PickedUpBy;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AUTPlayerState*                              LastPickedUpBy;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTGameMode.ScoreObject
struct AUTGameMode_ScoreObject_Params
{
	class AUTCarriedObject*                            GameObject;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AUTCharacter*                                HolderPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AUTPlayerState*                              Holder;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTGameMode.ScoreKill
struct AUTGameMode_ScoreKill_Params
{
	class AController*                                 Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       KilledPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTGameMode.ScoreDamage
struct AUTGameMode_ScoreDamage_Params
{
	int                                                DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AUTPlayerState*                              Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AUTPlayerState*                              Attacker;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTGameMode.PreventDeath
struct AUTGameMode_PreventDeath_Params
{
	class APawn*                                       KilledPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTGameMode.PostInitGame
struct AUTGameMode_PostInitGame_Params
{
	struct FString                                     Options;                                                  // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTGameMode.PlayerCanAltRestart
struct AUTGameMode_PlayerCanAltRestart_Params
{
	class APlayerController*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTGameMode.OverridePickupQuery
struct AUTGameMode_OverridePickupQuery_Params
{
	class APawn*                                       Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ItemClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Pickup;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowPickup;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTGameMode.NotifyPlayerDefaultsSet
struct AUTGameMode_NotifyPlayerDefaultsSet_Params
{
	class APawn*                                       PlayerPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTGameMode.ModifyDamage
struct AUTGameMode_ModifyDamage_Params
{
	int                                                Damage;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Momentum;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class APawn*                                       Injured;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTGameMode.KillBots
struct AUTGameMode_KillBots_Params
{
};

// Function UnrealTournament.UTGameMode.KickIdlePlayers
struct AUTGameMode_KickIdlePlayers_Params
{
};

// Function UnrealTournament.UTGameMode.IsThereAWinner
struct AUTGameMode_IsThereAWinner_Params
{
	bool                                               bTied;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AUTPlayerState*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTGameMode.IsPlayerIdle
struct AUTGameMode_IsPlayerIdle_Params
{
	class AUTPlayerState*                              PS;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTGameMode.GetGood
struct AUTGameMode_GetGood_Params
{
};

// Function UnrealTournament.UTGameMode.ForceAddNamedBot
struct AUTGameMode_ForceAddNamedBot_Params
{
	struct FString                                     BotName;                                                  // (Parm, ZeroConstructor)
	unsigned char                                      TeamNum;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AUTBotPlayer*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTGameMode.ForceAddBot
struct AUTGameMode_ForceAddBot_Params
{
	unsigned char                                      TeamNum;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AUTBotPlayer*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTGameMode.EndGame
struct AUTGameMode_EndGame_Params
{
	class AUTPlayerState*                              Winner;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTGameMode.DiscardInventory
struct AUTGameMode_DiscardInventory_Params
{
	class APawn*                                       Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTGameMode.Demigod
struct AUTGameMode_Demigod_Params
{
};

// Function UnrealTournament.UTGameMode.CheckScore
struct AUTGameMode_CheckScore_Params
{
	class AUTPlayerState*                              Scorer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTGameMode.CheckRelevance
struct AUTGameMode_CheckRelevance_Params
{
	class AActor*                                      Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTGameMode.ChangeTeam
struct AUTGameMode_ChangeTeam_Params
{
	class AController*                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      NewTeam;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBroadcast;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTGameMode.BroadcastSpectator
struct AUTGameMode_BroadcastSpectator_Params
{
	class AActor*                                      Sender;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Message;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Switch;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerState*                                RelatedPlayerState_2;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerState*                                RelatedPlayerState_3;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     OptionalObject;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTGameMode.BlueprintSendLocalized
struct AUTGameMode_BlueprintSendLocalized_Params
{
	class AActor*                                      Sender;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AUTPlayerController*                         Receiver;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Message;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Switch;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerState*                                RelatedPlayerState_2;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerState*                                RelatedPlayerState_3;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     OptionalObject;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTGameMode.BlueprintBroadcastLocalized
struct AUTGameMode_BlueprintBroadcastLocalized_Params
{
	class AActor*                                      Sender;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Message;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Switch;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerState*                                RelatedPlayerState_2;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerState*                                RelatedPlayerState_3;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     OptionalObject;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTGameMode.AddMutatorClass
struct AUTGameMode_AddMutatorClass_Params
{
	class UClass*                                      MutClass;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTGameMode.AddMutator
struct AUTGameMode_AddMutator_Params
{
	struct FString                                     MutatorPath;                                              // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTGameMode.AddBots
struct AUTGameMode_AddBots_Params
{
	unsigned char                                      Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTProjectileMovementComponent.ServerUpdateState
struct UUTProjectileMovementComponent_ServerUpdateState_Params
{
	struct FVector                                     InAcceleration;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCarriedObject.Use
struct AUTCarriedObject_Use_Params
{
};

// Function UnrealTournament.UTCarriedObject.UpdateOutline
struct AUTCarriedObject_UpdateOutline_Params
{
};

// Function UnrealTournament.UTCarriedObject.TryPickup
struct AUTCarriedObject_TryPickup_Params
{
	class AUTCharacter*                                Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCarriedObject.SetHolder
struct AUTCarriedObject_SetHolder_Params
{
	class AUTCharacter*                                NewHolder;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCarriedObject.SendHome
struct AUTCarriedObject_SendHome_Params
{
};

// Function UnrealTournament.UTCarriedObject.Score
struct AUTCarriedObject_Score_Params
{
	struct FName                                       Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AUTCharacter*                                ScoringPawn;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AUTPlayerState*                              ScoringPS;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCarriedObject.PlayAlarm
struct AUTCarriedObject_PlayAlarm_Params
{
};

// Function UnrealTournament.UTCarriedObject.OnStop
struct AUTCarriedObject_OnStop_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function UnrealTournament.UTCarriedObject.OnRep_Team
struct AUTCarriedObject_OnRep_Team_Params
{
};

// Function UnrealTournament.UTCarriedObject.OnRep_Moving
struct AUTCarriedObject_OnRep_Moving_Params
{
};

// Function UnrealTournament.UTCarriedObject.OnOverlapBegin
struct AUTCarriedObject_OnOverlapBegin_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function UnrealTournament.UTCarriedObject.OnObjectStateChanged
struct AUTCarriedObject_OnObjectStateChanged_Params
{
};

// Function UnrealTournament.UTCarriedObject.OnHolderChanged
struct AUTCarriedObject_OnHolderChanged_Params
{
};

// Function UnrealTournament.UTCarriedObject.NoLongerHeld
struct AUTCarriedObject_NoLongerHeld_Params
{
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCarriedObject.MoveToHome
struct AUTCarriedObject_MoveToHome_Params
{
};

// Function UnrealTournament.UTCarriedObject.IsHome
struct AUTCarriedObject_IsHome_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTCarriedObject.GetTeamNum
struct AUTCarriedObject_GetTeamNum_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTCarriedObject.Drop
struct AUTCarriedObject_Drop_Params
{
	class AController*                                 Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCarriedObject.DetachFrom
struct AUTCarriedObject_DetachFrom_Params
{
	class USkeletalMeshComponent*                      AttachToMesh;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UnrealTournament.UTCarriedObject.CheckTouching
struct AUTCarriedObject_CheckTouching_Params
{
};

// Function UnrealTournament.UTCarriedObject.ChangeState
struct AUTCarriedObject_ChangeState_Params
{
	struct FName                                       NewCarriedObjectState;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCarriedObject.AttachTo
struct AUTCarriedObject_AttachTo_Params
{
	class USkeletalMeshComponent*                      AttachToMesh;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UnrealTournament.UTFlag.PlayCaptureEffect
struct AUTFlag_PlayCaptureEffect_Params
{
};

// Function UnrealTournament.UTCharacterMovement.WantsWallSlide
struct UUTCharacterMovement_WantsWallSlide_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTCharacterMovement.WantsFloorSlide
struct UUTCharacterMovement_WantsFloorSlide_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTCharacterMovement.UpdateWallSlide
struct UUTCharacterMovement_UpdateWallSlide_Params
{
	bool                                               bNewWantsWallSlide;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCharacterMovement.UpdateFloorSlide
struct UUTCharacterMovement_UpdateFloorSlide_Params
{
	bool                                               bNewWantsFloorSlide;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCharacterMovement.PerformDodge
struct UUTCharacterMovement_PerformDodge_Params
{
	struct FVector                                     DodgeDir;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DodgeCross;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTCharacterMovement.GetSimpleFloorInfo
struct UUTCharacterMovement_GetSimpleFloorInfo_Params
{
	struct FVector                                     ImpactPoint;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCharacterMovement.FallingDamageReduction
struct UUTCharacterMovement_FallingDamageReduction_Params
{
	float                                              FallingDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTCharacterMovement.ClientNoBaseAdjustPosition
struct UUTCharacterMovement_ClientNoBaseAdjustPosition_Params
{
	float                                              TimeStamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewLoc;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewVelocity;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ServerMovementMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCharacterMovement.ClearRestrictedJump
struct UUTCharacterMovement_ClearRestrictedJump_Params
{
};

// Function UnrealTournament.UTCharacterMovement.ApplyImpactVelocity
struct UUTCharacterMovement_ApplyImpactVelocity_Params
{
	struct FVector                                     JumpDir;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsFullImpactImpulse;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCharacterMovement.AddDampedImpulse
struct UUTCharacterMovement_AddDampedImpulse_Params
{
	struct FVector                                     Impulse;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSelfInflicted;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.UTServerMoveSaved
struct AUTCharacter_UTServerMoveSaved_Params
{
	float                                              TimeStamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize                         InAccel;                                                  // (Parm)
	unsigned char                                      PendingFlags;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ViewYaw;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ViewPitch;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.UTServerMoveQuick
struct AUTCharacter_UTServerMoveQuick_Params
{
	float                                              TimeStamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize                         InAccel;                                                  // (Parm)
	unsigned char                                      PendingFlags;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.UTServerMoveOld
struct AUTCharacter_UTServerMoveOld_Params
{
	float                                              OldTimeStamp;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize                         OldAccel;                                                 // (Parm)
	float                                              OldYaw;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      OldMoveFlags;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.UTServerMove
struct AUTCharacter_UTServerMove_Params
{
	float                                              TimeStamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize                         InAccel;                                                  // (Parm)
	struct FVector_NetQuantize                         ClientLoc;                                                // (Parm)
	unsigned char                                      CompressedMoveFlags;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ViewYaw;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ViewPitch;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         ClientMovementBase;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       ClientBaseBoneName;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ClientMovementMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.UseCarriedObject
struct AUTCharacter_UseCarriedObject_Params
{
};

// Function UnrealTournament.UTCharacter.UpdateWeaponSkinPrefFromProfile
struct AUTCharacter_UpdateWeaponSkinPrefFromProfile_Params
{
	class AUTWeapon*                                   Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.UpdateWeaponOverlays
struct AUTCharacter_UpdateWeaponOverlays_Params
{
};

// Function UnrealTournament.UTCharacter.UpdateWeaponFiring
struct AUTCharacter_UpdateWeaponFiring_Params
{
};

// Function UnrealTournament.UTCharacter.UpdateWeaponAttachment
struct AUTCharacter_UpdateWeaponAttachment_Params
{
};

// Function UnrealTournament.UTCharacter.UpdateSkin
struct AUTCharacter_UpdateSkin_Params
{
};

// Function UnrealTournament.UTCharacter.UpdateOutline
struct AUTCharacter_UpdateOutline_Params
{
};

// Function UnrealTournament.UTCharacter.UpdateHolsteredWeaponAttachment
struct AUTCharacter_UpdateHolsteredWeaponAttachment_Params
{
};

// Function UnrealTournament.UTCharacter.UpdateCharOverlays
struct AUTCharacter_UpdateCharOverlays_Params
{
};

// Function UnrealTournament.UTCharacter.UpdateCharOverlayFlags
struct AUTCharacter_UpdateCharOverlayFlags_Params
{
};

// Function UnrealTournament.UTCharacter.UpdateArmorOverlay
struct AUTCharacter_UpdateArmorOverlay_Params
{
};

// Function UnrealTournament.UTCharacter.TurnOff
struct AUTCharacter_TurnOff_Params
{
};

// Function UnrealTournament.UTCharacter.TossInventory
struct AUTCharacter_TossInventory_Params
{
	class AUTInventory*                                InvToToss;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ExtraVelocity;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.TakeFallingDamage
struct AUTCharacter_TakeFallingDamage_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              FallingSpeed;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.SwitchWeapon
struct AUTCharacter_SwitchWeapon_Params
{
	class AUTWeapon*                                   NewWeapon;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.StopFiring
struct AUTCharacter_StopFiring_Params
{
};

// Function UnrealTournament.UTCharacter.StopFire
struct AUTCharacter_StopFire_Params
{
	unsigned char                                      FireModeNum;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.StatusAmbientSoundUpdated
struct AUTCharacter_StatusAmbientSoundUpdated_Params
{
};

// Function UnrealTournament.UTCharacter.StartFire
struct AUTCharacter_StartFire_Params
{
	unsigned char                                      FireModeNum;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.SpawnGib
struct AUTCharacter_SpawnGib_Params
{
	struct FGibSlotInfo                                GibSlot;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	class UClass*                                      DmgType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.SpawnBloodDecal
struct AUTCharacter_SpawnBloodDecal_Params
{
	struct FVector                                     TraceStart;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     TraceDir;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.SetWeaponOverlayEffect
struct AUTCharacter_SetWeaponOverlayEffect_Params
{
	struct FOverlayEffect                              NewOverlay;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.SetWeaponOverlay
struct AUTCharacter_SetWeaponOverlay_Params
{
	class UMaterialInterface*                          NewOverlay;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.SetWeaponAttachmentClass
struct AUTCharacter_SetWeaponAttachmentClass_Params
{
	class UClass*                                      NewWeaponAttachmentClass;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.SetWalkMovementReduction
struct AUTCharacter_SetWalkMovementReduction_Params
{
	float                                              InPct;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InDuration;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.SetStatusAmbientSound
struct AUTCharacter_SetStatusAmbientSound_Params
{
	class USoundBase*                                  NewAmbientSound;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SoundVolume;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PitchMultipier;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bClear;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.SetSkin
struct AUTCharacter_SetSkin_Params
{
	class UMaterialInterface*                          NewSkin;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          NewSkin1P;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.SetRagdollGravityScale
struct AUTCharacter_SetRagdollGravityScale_Params
{
	float                                              NewScale;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.SetOutlineServer
struct AUTCharacter_SetOutlineServer_Params
{
	bool                                               bNowOutlined;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWhenUnoccluded;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      TeamMask;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.SetOutlineLocal
struct AUTCharacter_SetOutlineLocal_Params
{
	bool                                               bNowOutlined;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWhenUnoccluded;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.SetLocalAmbientSound
struct AUTCharacter_SetLocalAmbientSound_Params
{
	class USoundBase*                                  NewAmbientSound;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SoundVolume;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bClear;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.SetInvisible
struct AUTCharacter_SetInvisible_Params
{
	bool                                               bNowInvisible;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.SetInitialHealth
struct AUTCharacter_SetInitialHealth_Params
{
};

// Function UnrealTournament.UTCharacter.SetHolsteredWeaponAttachmentClass
struct AUTCharacter_SetHolsteredWeaponAttachmentClass_Params
{
	class UClass*                                      NewWeaponAttachmentClass;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.SetHeadScale
struct AUTCharacter_SetHeadScale_Params
{
	float                                              NewHeadScale;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.SetHatVariant
struct AUTCharacter_SetHatVariant_Params
{
	int                                                NewHatVariant;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.SetHatClass
struct AUTCharacter_SetHatClass_Params
{
	class UClass*                                      HatClass;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.SetFlashLocation
struct AUTCharacter_SetFlashLocation_Params
{
	struct FVector                                     InFlashLoc;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	unsigned char                                      InFireMode;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.SetFlashExtra
struct AUTCharacter_SetFlashExtra_Params
{
	unsigned char                                      NewFlashExtra;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      InFireMode;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.SetFireRateMultiplier
struct AUTCharacter_SetFireRateMultiplier_Params
{
	float                                              InMult;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.SetEyewearVariant
struct AUTCharacter_SetEyewearVariant_Params
{
	int                                                NewEyewearVariant;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.SetEyewearClass
struct AUTCharacter_SetEyewearClass_Params
{
	class UClass*                                      EyewearClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.SetCharacterOverlayEffect
struct AUTCharacter_SetCharacterOverlayEffect_Params
{
	struct FOverlayEffect                              NewOverlay;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.SetCharacterOverlay
struct AUTCharacter_SetCharacterOverlay_Params
{
	class UMaterialInterface*                          NewOverlay;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.SetBodyColorFlash
struct AUTCharacter_SetBodyColorFlash_Params
{
	class UCurveLinearColor*                           ColorCurve;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRimOnly;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.SetAmbientSound
struct AUTCharacter_SetAmbientSound_Params
{
	class USoundBase*                                  NewAmbientSound;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bClear;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.ServerVerifyWeapon
struct AUTCharacter_ServerVerifyWeapon_Params
{
	class AUTWeapon*                                   NewWeapon;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.ServerUseCarriedObject
struct AUTCharacter_ServerUseCarriedObject_Params
{
};

// Function UnrealTournament.UTCharacter.ServerSwitchWeapon
struct AUTCharacter_ServerSwitchWeapon_Params
{
	class AUTWeapon*                                   NewWeapon;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.ServerFeignDeath
struct AUTCharacter_ServerFeignDeath_Params
{
};

// Function UnrealTournament.UTCharacter.ServerDropPowerup
struct AUTCharacter_ServerDropPowerup_Params
{
	class AUTTimedPowerup*                             Powerup;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.ServerDropHealth
struct AUTCharacter_ServerDropHealth_Params
{
};

// Function UnrealTournament.UTCharacter.ServerDropCarriedObject
struct AUTCharacter_ServerDropCarriedObject_Params
{
};

// Function UnrealTournament.UTCharacter.ServerDropBoots
struct AUTCharacter_ServerDropBoots_Params
{
};

// Function UnrealTournament.UTCharacter.ServerDropArmor
struct AUTCharacter_ServerDropArmor_Params
{
};

// Function UnrealTournament.UTCharacter.RestoreAmmoPct
struct AUTCharacter_RestoreAmmoPct_Params
{
	float                                              Pct;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPctOfMax;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.ResetMaxSpeedPctModifier
struct AUTCharacter_ResetMaxSpeedPctModifier_Params
{
};

// Function UnrealTournament.UTCharacter.RemoveVisibilityMask
struct AUTCharacter_RemoveVisibilityMask_Params
{
	int                                                Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.RemoveInventory
struct AUTCharacter_RemoveInventory_Params
{
	class AUTInventory*                                InvToRemove;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.RemoveArmor
struct AUTCharacter_RemoveArmor_Params
{
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.PlayWaterSound
struct AUTCharacter_PlayWaterSound_Params
{
	class USoundBase*                                  WaterSound;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.PlayWaterEntryEffect
struct AUTCharacter_PlayWaterEntryEffect_Params
{
	struct FVector                                     InWaterLoc;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     OutofWaterLoc;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.PlayTauntByClass
struct AUTCharacter_PlayTauntByClass_Params
{
	class UClass*                                      TauntToPlay;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EmoteSpeed;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.PlayTakeHitEffects
struct AUTCharacter_PlayTakeHitEffects_Params
{
};

// Function UnrealTournament.UTCharacter.PlayLandedEffect
struct AUTCharacter_PlayLandedEffect_Params
{
};

// Function UnrealTournament.UTCharacter.PlayJump
struct AUTCharacter_PlayJump_Params
{
	struct FVector                                     JumpLocation;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     JumpDir;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.PlayGroupTaunt
struct AUTCharacter_PlayGroupTaunt_Params
{
	class UClass*                                      TauntToPlay;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.PlayFootstep
struct AUTCharacter_PlayFootstep_Params
{
	unsigned char                                      FootNum;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFirstPerson;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.PlayFeignDeath
struct AUTCharacter_PlayFeignDeath_Params
{
};

// Function UnrealTournament.UTCharacter.PlayDamageEffects
struct AUTCharacter_PlayDamageEffects_Params
{
};

// Function UnrealTournament.UTCharacter.OVV
struct AUTCharacter_OVV_Params
{
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.OverrideFellOutOfWorld
struct AUTCharacter_OverrideFellOutOfWorld_Params
{
	class UClass*                                      DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.OV
struct AUTCharacter_OV_Params
{
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.OnWallDodge
struct AUTCharacter_OnWallDodge_Params
{
	struct FVector                                     DodgeLocation;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     DodgeDir;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.OnTriggerRallyEffect
struct AUTCharacter_OnTriggerRallyEffect_Params
{
};

// Function UnrealTournament.UTCharacter.OnSlide
struct AUTCharacter_OnSlide_Params
{
	struct FVector                                     SlideLocation;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     SlideDir;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.OnRepWeaponSkin
struct AUTCharacter_OnRepWeaponSkin_Params
{
};

// Function UnrealTournament.UTCharacter.OnRepHeadArmorFlashCount
struct AUTCharacter_OnRepHeadArmorFlashCount_Params
{
};

// Function UnrealTournament.UTCharacter.OnRepFloorSliding
struct AUTCharacter_OnRepFloorSliding_Params
{
};

// Function UnrealTournament.UTCharacter.OnRepDrivenVehicle
struct AUTCharacter_OnRepDrivenVehicle_Params
{
};

// Function UnrealTournament.UTCharacter.OnRepCosmeticSpreeCount
struct AUTCharacter_OnRepCosmeticSpreeCount_Params
{
};

// Function UnrealTournament.UTCharacter.OnRepCosmeticFlashCount
struct AUTCharacter_OnRepCosmeticFlashCount_Params
{
};

// Function UnrealTournament.UTCharacter.OnRep_UTReplicatedMovement
struct AUTCharacter_OnRep_UTReplicatedMovement_Params
{
};

// Function UnrealTournament.UTCharacter.OnRep_ShouldWearLeaderHat
struct AUTCharacter_OnRep_ShouldWearLeaderHat_Params
{
};

// Function UnrealTournament.UTCharacter.OnRep_Invisible
struct AUTCharacter_OnRep_Invisible_Params
{
};

// Function UnrealTournament.UTCharacter.OnRagdollCollision
struct AUTCharacter_OnRagdollCollision_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.OnOverlapBegin
struct AUTCharacter_OnOverlapBegin_Params
{
	class AActor*                                      OverlappedActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.OnLandingAssist
struct AUTCharacter_OnLandingAssist_Params
{
};

// Function UnrealTournament.UTCharacter.OnHealthUpdated
struct AUTCharacter_OnHealthUpdated_Params
{
};

// Function UnrealTournament.UTCharacter.OnGroupTauntEnded
struct AUTCharacter_OnGroupTauntEnded_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInterrupted;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.OnFirstPersonWeaponEquipped
struct AUTCharacter_OnFirstPersonWeaponEquipped_Params
{
	class AUTWeapon*                                   EquippedWeapon;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.OnEmoteEnded
struct AUTCharacter_OnEmoteEnded_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInterrupted;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.OnDodge
struct AUTCharacter_OnDodge_Params
{
	struct FVector                                     DodgeLocation;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     DodgeDir;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.OnArmorUpdated
struct AUTCharacter_OnArmorUpdated_Params
{
};

// Function UnrealTournament.UTCharacter.MovementEventUpdated
struct AUTCharacter_MovementEventUpdated_Params
{
	TEnumAsByte<EMovementEvent>                        MovementEventType;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Dir;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.MovementEventReplicated
struct AUTCharacter_MovementEventReplicated_Params
{
};

// Function UnrealTournament.UTCharacter.ModifyDamageTaken
struct AUTCharacter_ModifyDamageTaken_Params
{
	int                                                AppliedDamage;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                Damage;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Momentum;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AUTInventory*                                HitArmor;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController*                                 EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.ModifyDamageCaused
struct AUTCharacter_ModifyDamageCaused_Params
{
	int                                                AppliedDamage;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                Damage;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Momentum;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AActor*                                      Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.LocalAmbientSoundUpdated
struct AUTCharacter_LocalAmbientSoundUpdated_Params
{
};

// Function UnrealTournament.UTCharacter.LeaderHatStatusChanged
struct AUTCharacter_LeaderHatStatusChanged_Params
{
};

// Function UnrealTournament.UTCharacter.K2_FiringInfoUpdated
struct AUTCharacter_K2_FiringInfoUpdated_Params
{
};

// Function UnrealTournament.UTCharacter.K2_FindInventoryType
struct AUTCharacter_K2_FindInventoryType_Params
{
	class UClass*                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bExactClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AUTInventory*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.K2_Died
struct AUTCharacter_K2_Died_Params
{
	class AController*                                 EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.K2_CreateInventory
struct AUTCharacter_K2_CreateInventory_Params
{
	class UClass*                                      NewInvClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoActivate;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AUTInventory*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.JumpVis
struct AUTCharacter_JumpVis_Params
{
};

// Function UnrealTournament.UTCharacter.IsWearingAnyCosmetic
struct AUTCharacter_IsWearingAnyCosmetic_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.IsTriggerDown
struct AUTCharacter_IsTriggerDown_Params
{
	unsigned char                                      InFireMode;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.IsThirdPersonTaunting
struct AUTCharacter_IsThirdPersonTaunting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.IsSpawnProtected
struct AUTCharacter_IsSpawnProtected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.IsRagdoll
struct AUTCharacter_IsRagdoll_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.IsOutlined
struct AUTCharacter_IsOutlined_Params
{
	unsigned char                                      TestTeam;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.IsLocallyViewed
struct AUTCharacter_IsLocallyViewed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.IsHeadShot
struct AUTCharacter_IsHeadShot_Params
{
	struct FVector                                     HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ShotDirection;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              WeaponHeadScaling;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AUTCharacter*                                ShotInstigator;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PredictionTime;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.IsFeigningDeath
struct AUTCharacter_IsFeigningDeath_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.IsDead
struct AUTCharacter_IsDead_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.InventoryEvent
struct AUTCharacter_InventoryEvent_Params
{
	struct FName                                       EventName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.IncrementFlashCount
struct AUTCharacter_IncrementFlashCount_Params
{
	unsigned char                                      InFireMode;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.HasMaxAmmo
struct AUTCharacter_HasMaxAmmo_Params
{
	class UClass*                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.HasHighScoreChanged
struct AUTCharacter_HasHighScoreChanged_Params
{
};

// Function UnrealTournament.UTCharacter.HandleFallingDamage
struct AUTCharacter_HandleFallingDamage_Params
{
	float                                              FallingSpeed;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.GiveArmor
struct AUTCharacter_GiveArmor_Params
{
	class AUTArmor*                                    InArmorType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.GibExplosion
struct AUTCharacter_GibExplosion_Params
{
};

// Function UnrealTournament.UTCharacter.GetWeaponBobScaling
struct AUTCharacter_GetWeaponBobScaling_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.GetTeamNum
struct AUTCharacter_GetTeamNum_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.GetTeamColor
struct AUTCharacter_GetTeamColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.GetRewindLocation
struct AUTCharacter_GetRewindLocation_Params
{
	float                                              PredictionTime;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AUTPlayerController*                         DebugViewer;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.GetRemoteViewPitch
struct AUTCharacter_GetRemoteViewPitch_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.GetPlayerCameraManager
struct AUTCharacter_GetPlayerCameraManager_Params
{
	class APlayerCameraManager*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.GetFireRateMultiplier
struct AUTCharacter_GetFireRateMultiplier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.GetCurrentAimContext
struct AUTCharacter_GetCurrentAimContext_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.GetCharOverlayMI
struct AUTCharacter_GetCharOverlayMI_Params
{
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.GetCharacterData
struct AUTCharacter_GetCharacterData_Params
{
	class AUTCharacterContent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.GetCarriedObject
struct AUTCharacter_GetCarriedObject_Params
{
	class AUTCarriedObject*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.GetArmorAmount
struct AUTCharacter_GetArmorAmount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.GetAmmoAmount
struct AUTCharacter_GetAmmoAmount_Params
{
	class UClass*                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.ForceFeignDeath
struct AUTCharacter_ForceFeignDeath_Params
{
	float                                              MinRecoveryDelay;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.FiringInfoReplicated
struct AUTCharacter_FiringInfoReplicated_Params
{
};

// Function UnrealTournament.UTCharacter.FiringExtraUpdated
struct AUTCharacter_FiringExtraUpdated_Params
{
};

// Function UnrealTournament.UTCharacter.FireRateChanged
struct AUTCharacter_FireRateChanged_Params
{
};

// Function UnrealTournament.UTCharacter.FeignDeath
struct AUTCharacter_FeignDeath_Params
{
};

// Function UnrealTournament.UTCharacter.EnableWeaponSwitching
struct AUTCharacter_EnableWeaponSwitching_Params
{
};

// Function UnrealTournament.UTCharacter.DropFlag
struct AUTCharacter_DropFlag_Params
{
};

// Function UnrealTournament.UTCharacter.DropCarriedObject
struct AUTCharacter_DropCarriedObject_Params
{
};

// Function UnrealTournament.UTCharacter.DodgeOverride
struct AUTCharacter_DodgeOverride_Params
{
	struct FVector                                     DodgeDir;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     DodgeCross;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.DiscardAllInventory
struct AUTCharacter_DiscardAllInventory_Params
{
};

// Function UnrealTournament.UTCharacter.DisallowWeaponFiring
struct AUTCharacter_DisallowWeaponFiring_Params
{
	bool                                               bDisallowed;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.DeathCleanupTimer
struct AUTCharacter_DeathCleanupTimer_Params
{
};

// Function UnrealTournament.UTCharacter.DeathAnimEnd
struct AUTCharacter_DeathAnimEnd_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInterrupted;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.ClientWeaponLost
struct AUTCharacter_ClientWeaponLost_Params
{
	class AUTWeapon*                                   LostWeapon;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.ClientVerifyWeapon
struct AUTCharacter_ClientVerifyWeapon_Params
{
};

// Function UnrealTournament.UTCharacter.ClientSwitchWeapon
struct AUTCharacter_ClientSwitchWeapon_Params
{
	class AUTWeapon*                                   NewWeapon;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.ClearFiringInfo
struct AUTCharacter_ClearFiringInfo_Params
{
};

// Function UnrealTournament.UTCharacter.ChangeAmbientSoundPitch
struct AUTCharacter_ChangeAmbientSoundPitch_Params
{
	class USoundBase*                                  InAmbientSound;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewPitch;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.CascadeGroupTaunt
struct AUTCharacter_CascadeGroupTaunt_Params
{
};

// Function UnrealTournament.UTCharacter.CanSlide
struct AUTCharacter_CanSlide_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.CanDodgeInternal
struct AUTCharacter_CanDodgeInternal_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.CanDodge
struct AUTCharacter_CanDodge_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.BoostSpeedForTime
struct AUTCharacter_BoostSpeedForTime_Params
{
	float                                              SpeedBoostPct;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeToBoost;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.BlockFeignDeath
struct AUTCharacter_BlockFeignDeath_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.BlockedHeadShot
struct AUTCharacter_BlockedHeadShot_Params
{
	struct FVector                                     HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ShotDirection;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              WeaponHeadScaling;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bConsumeArmor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AUTCharacter*                                ShotInstigator;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.AmbientSoundUpdated
struct AUTCharacter_AmbientSoundUpdated_Params
{
};

// Function UnrealTournament.UTCharacter.AmbientSoundPitchUpdated
struct AUTCharacter_AmbientSoundPitchUpdated_Params
{
};

// Function UnrealTournament.UTCharacter.AllowedSpecialMoveAnims
struct AUTCharacter_AllowedSpecialMoveAnims_Params
{
	TEnumAsByte<EAllowedSpecialMoveAnims>              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.AllAmmo
struct AUTCharacter_AllAmmo_Params
{
};

// Function UnrealTournament.UTCharacter.AddVisibilityMask
struct AUTCharacter_AddVisibilityMask_Params
{
	int                                                Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.AddInventory
struct AUTCharacter_AddInventory_Params
{
	class AUTInventory*                                InvToAdd;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoActivate;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTCharacter.AddAmmo
struct AUTCharacter_AddAmmo_Params
{
	struct FStoredAmmo                                 AmmoToAdd;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UnrealTournament.UTGameObjective.OnObjectStateChanged
struct AUTGameObjective_OnObjectStateChanged_Params
{
};

// Function UnrealTournament.UTCTFFlagBase.Reset
struct AUTCTFFlagBase_Reset_Params
{
};

// Function UnrealTournament.UTCTFFlagBase.OnOverlapBegin
struct AUTCTFFlagBase_OnOverlapBegin_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function UnrealTournament.UTCTFFlagBase.OnObjectWasPickedUp
struct AUTCTFFlagBase_OnObjectWasPickedUp_Params
{
};

// Function UnrealTournament.UTCTFFlagBase.OnFlagChanged
struct AUTCTFFlagBase_OnFlagChanged_Params
{
};

// Function UnrealTournament.UTGameState.UpdateHighlights
struct AUTGameState_UpdateHighlights_Params
{
};

// Function UnrealTournament.UTGameState.SetWinner
struct AUTGameState_SetWinner_Params
{
	class AUTPlayerState*                              NewWinner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTGameState.SetTimeLimit
struct AUTGameState_SetTimeLimit_Params
{
	int                                                NewTimeLimit;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTGameState.SetRespawnWaitTime
struct AUTGameState_SetRespawnWaitTime_Params
{
	float                                              NewWaitTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTGameState.SetGoalScore
struct AUTGameState_SetGoalScore_Params
{
	int                                                NewGoalScore;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTGameState.PreventWeaponFire
struct AUTGameState_PreventWeaponFire_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTGameState.OnWinnerReceived
struct AUTGameState_OnWinnerReceived_Params
{
};

// Function UnrealTournament.UTGameState.OnUpdateFriendlyLocation
struct AUTGameState_OnUpdateFriendlyLocation_Params
{
};

// Function UnrealTournament.UTGameState.OnUpdateEnemyLocation
struct AUTGameState_OnUpdateEnemyLocation_Params
{
};

// Function UnrealTournament.UTGameState.OnTeamSideSwap
struct AUTGameState_OnTeamSideSwap_Params
{
};

// Function UnrealTournament.UTGameState.OnSameTeam
struct AUTGameState_OnSameTeam_Params
{
	class AActor*                                      Actor1;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor2;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTGameState.OnRepRemainingTime
struct AUTGameState_OnRepRemainingTime_Params
{
};

// Function UnrealTournament.UTGameState.OnRep_ServerSessionId
struct AUTGameState_OnRep_ServerSessionId_Params
{
};

// Function UnrealTournament.UTGameState.OnRep_ServerName
struct AUTGameState_OnRep_ServerName_Params
{
};

// Function UnrealTournament.UTGameState.OnRep_ServerMOTD
struct AUTGameState_OnRep_ServerMOTD_Params
{
};

// Function UnrealTournament.UTGameState.OnRep_RemainingTime
struct AUTGameState_OnRep_RemainingTime_Params
{
};

// Function UnrealTournament.UTGameState.OnRep_OverlayEffects
struct AUTGameState_OnRep_OverlayEffects_Params
{
};

// Function UnrealTournament.UTGameState.OnReceiveHubGuid
struct AUTGameState_OnReceiveHubGuid_Params
{
};

// Function UnrealTournament.UTGameState.IsSelectedBoostValid
struct AUTGameState_IsSelectedBoostValid_Params
{
	class AUTPlayerState*                              PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTGameState.IsMatchIntermission
struct AUTGameState_IsMatchIntermission_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTGameState.IsMatchInProgress
struct AUTGameState_IsMatchInProgress_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTGameState.IsMatchInOvertime
struct AUTGameState_IsMatchInOvertime_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTGameState.IsMatchInCountdown
struct AUTGameState_IsMatchInCountdown_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTGameState.IsAllowedSpawnPoint
struct AUTGameState_IsAllowedSpawnPoint_Params
{
	class AUTPlayerState*                              Chooser;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerStart*                                DesiredStart;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTGameState.HasMatchStarted
struct AUTGameState_HasMatchStarted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTGameState.GetSelectableBoostByIndex
struct AUTGameState_GetSelectableBoostByIndex_Params
{
	class AUTPlayerState*                              PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTGameState.GetRespawnWaitTimeFor
struct AUTGameState_GetRespawnWaitTimeFor_Params
{
	class AUTPlayerState*                              PS;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTGameState.GetPlayerHighlights
struct AUTGameState_GetPlayerHighlights_Params
{
	class AUTPlayerState*                              PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FText>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function UnrealTournament.UTGameState.GetImportantPickups
struct AUTGameState_GetImportantPickups_Params
{
	TArray<class AUTPickup*>                           PickupList;                                               // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTGameState.GetGameModeClass
struct AUTGameState_GetGameModeClass_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTGameState.ClearHighlights
struct AUTGameState_ClearHighlights_Params
{
};

// Function UnrealTournament.UTGameState.ChangeTeamSides
struct AUTGameState_ChangeTeamSides_Params
{
	unsigned char                                      Offset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTGameState.AreAllPlayersReady
struct AUTGameState_AreAllPlayersReady_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTGameState.AddOverlayMaterial
struct AUTGameState_AddOverlayMaterial_Params
{
	class UMaterialInterface*                          NewOverlay;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          NewOverlay1P;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTGameState.AddOverlayEffect
struct AUTGameState_AddOverlayEffect_Params
{
	struct FOverlayEffect                              NewOverlay;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FOverlayEffect                              NewOverlay1P;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UnrealTournament.UTGameState.AddMinorHighlights
struct AUTGameState_AddMinorHighlights_Params
{
	class AUTPlayerState*                              PS;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCTFGameState.GetFlagHolder
struct AUTCTFGameState_GetFlagHolder_Params
{
	unsigned char                                      TeamNum;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AUTPlayerState*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTCTFGameState.AddScoringPlay
struct AUTCTFGameState_AddScoringPlay_Params
{
	struct FCTFScoringPlay                             NewScoringPlay;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UnrealTournament.UTCTFBaseGame.SetRedScore
struct AUTCTFBaseGame_SetRedScore_Params
{
	int                                                NewScore;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCTFBaseGame.SetBlueScore
struct AUTCTFBaseGame_SetBlueScore_Params
{
	int                                                NewScore;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCTFBaseGame.CheatScore
struct AUTCTFBaseGame_CheatScore_Params
{
};

// Function UnrealTournament.UTFlagRunGame.PlayRampUpMusic
struct AUTFlagRunGame_PlayRampUpMusic_Params
{
};

// Function UnrealTournament.UTFlagRunGame.PlayEndMusic
struct AUTFlagRunGame_PlayEndMusic_Params
{
};

// Function UnrealTournament.UTReplicatedEmitter.OnParticlesFinished
struct AUTReplicatedEmitter_OnParticlesFinished_Params
{
	class UParticleSystemComponent*                    FinishedPSC;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UnrealTournament.UTReplicatedEmitter.OnAttachedTo
struct AUTReplicatedEmitter_OnAttachedTo_Params
{
	class USceneComponent*                             BaseComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UnrealTournament.UTDroppedPickup.SetPickupSheen
struct AUTDroppedPickup_SetPickupSheen_Params
{
	float                                              SheenValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTDroppedPickup.SetInventory
struct AUTDroppedPickup_SetInventory_Params
{
	class AUTInventory*                                NewInventory;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTDroppedPickup.ProcessTouch
struct AUTDroppedPickup_ProcessTouch_Params
{
	class APawn*                                       TouchedBy;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTDroppedPickup.PlayTakenEffects
struct AUTDroppedPickup_PlayTakenEffects_Params
{
	class APawn*                                       TakenBy;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTDroppedPickup.PhysicsStopped
struct AUTDroppedPickup_PhysicsStopped_Params
{
	struct FHitResult                                  ImpactResult;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function UnrealTournament.UTDroppedPickup.OnRepWeaponSkin
struct AUTDroppedPickup_OnRepWeaponSkin_Params
{
};

// Function UnrealTournament.UTDroppedPickup.OnOverlapBegin
struct AUTDroppedPickup_OnOverlapBegin_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function UnrealTournament.UTDroppedPickup.InventoryTypeUpdated
struct AUTDroppedPickup_InventoryTypeUpdated_Params
{
};

// Function UnrealTournament.UTDroppedPickup.GiveTo
struct AUTDroppedPickup_GiveTo_Params
{
	class APawn*                                       Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTDroppedPickup.GetPickupSound
struct AUTDroppedPickup_GetPickupSound_Params
{
	class USoundBase*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTDroppedPickup.EnableInstigatorTouch
struct AUTDroppedPickup_EnableInstigatorTouch_Params
{
};

// Function UnrealTournament.UTDroppedPickup.DetourWeight
struct AUTDroppedPickup_DetourWeight_Params
{
	class APawn*                                       Asker;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PathDistance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTDroppedPickup.CheckTouching
struct AUTDroppedPickup_CheckTouching_Params
{
};

// Function UnrealTournament.UTDroppedPickup.BotDesireability
struct AUTDroppedPickup_BotDesireability_Params
{
	class APawn*                                       Asker;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 RequestOwner;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PathDistance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTDroppedPickup.AllowPickupBy
struct AUTDroppedPickup_AllowPickupBy_Params
{
	class APawn*                                       Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDefaultAllowPickup;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTPickup.WakeUpTimer
struct AUTPickup_WakeUpTimer_Params
{
};

// Function UnrealTournament.UTPickup.WakeUp
struct AUTPickup_WakeUp_Params
{
};

// Function UnrealTournament.UTPickup.StartSleeping
struct AUTPickup_StartSleeping_Params
{
};

// Function UnrealTournament.UTPickup.SetPickupHidden
struct AUTPickup_SetPickupHidden_Params
{
	bool                                               bNowHidden;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPickup.ProcessTouch
struct AUTPickup_ProcessTouch_Params
{
	class APawn*                                       TouchedBy;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPickup.PlayTakenEffects
struct AUTPickup_PlayTakenEffects_Params
{
	bool                                               bReplicate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPickup.PlayRespawnEffects
struct AUTPickup_PlayRespawnEffects_Params
{
};

// Function UnrealTournament.UTPickup.OnRep_RespawnTimeRemaining
struct AUTPickup_OnRep_RespawnTimeRemaining_Params
{
};

// Function UnrealTournament.UTPickup.OnRep_Reset
struct AUTPickup_OnRep_Reset_Params
{
};

// Function UnrealTournament.UTPickup.OnOverlapBegin
struct AUTPickup_OnOverlapBegin_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function UnrealTournament.UTPickup.IsTaken
struct AUTPickup_IsTaken_Params
{
	class APawn*                                       TestPawn;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTPickup.IsSuperDesireable
struct AUTPickup_IsSuperDesireable_Params
{
	class AController*                                 RequestOwner;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CalculatedDesire;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTPickup.GiveTo
struct AUTPickup_GiveTo_Params
{
	class APawn*                                       Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPickup.GetRespawnTimeOffset
struct AUTPickup_GetRespawnTimeOffset_Params
{
	class APawn*                                       Asker;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTPickup.GetMinimapIcon
struct AUTPickup_GetMinimapIcon_Params
{
	struct FCanvasIcon                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UnrealTournament.UTPickup.FlashOnMinimap
struct AUTPickup_FlashOnMinimap_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTPickup.DetourWeight
struct AUTPickup_DetourWeight_Params
{
	class APawn*                                       Asker;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PathDistance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTPickup.BotDesireability
struct AUTPickup_BotDesireability_Params
{
	class APawn*                                       Asker;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 RequestOwner;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PathDistance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTPickup.AllowPickupBy
struct AUTPickup_AllowPickupBy_Params
{
	class APawn*                                       Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDefaultAllowPickup;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTPickupHealth.GetHealMax
struct AUTPickupHealth_GetHealMax_Params
{
	class AUTCharacter*                                P;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTTeamInfo.UpdateEnemyInfo
struct AUTTeamInfo_UpdateEnemyInfo_Params
{
	class APawn*                                       NewEnemy;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAIEnemyUpdateType>                    UpdateType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTTeamInfo.RemoveFromTeam
struct AUTTeamInfo_RemoveFromTeam_Params
{
	class AController*                                 C;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTTeamInfo.ReceivedTeamIndex
struct AUTTeamInfo_ReceivedTeamIndex_Params
{
};

// Function UnrealTournament.UTTeamInfo.NotifyObjectiveEvent
struct AUTTeamInfo_NotifyObjectiveEvent_Params
{
	class AActor*                                      InObjective;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       EventName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTTeamInfo.GetStatsValue
struct AUTTeamInfo_GetStatsValue_Params
{
	struct FName                                       StatsName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTTeamInfo.AddToTeam
struct AUTTeamInfo_AddToTeam_Params
{
	class AController*                                 C;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTDroppedHealth.GetHealMax
struct AUTDroppedHealth_GetHealMax_Params
{
	class AUTCharacter*                                P;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTFlagRunPvEGame.EscalateMonsters
struct AUTFlagRunPvEGame_EscalateMonsters_Params
{
};

// Function UnrealTournament.UTShowdownGame.StartIntermission
struct AUTShowdownGame_StartIntermission_Params
{
};

// Function UnrealTournament.UTShowdownGame.AddDamagePing
struct AUTShowdownGame_AddDamagePing_Params
{
	class AUTCharacter*                                Char;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      VisibleToTeam;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LifeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTTimeDemoGameMode.StopTimeDemo
struct AUTTimeDemoGameMode_StopTimeDemo_Params
{
};

// Function UnrealTournament.UTTimeDemoGameMode.StartTimeDemo
struct AUTTimeDemoGameMode_StartTimeDemo_Params
{
};

// Function UnrealTournament.UTLobbyPlayerState.ServerJoinMatch
struct AUTLobbyPlayerState_ServerJoinMatch_Params
{
	class AUTLobbyMatchInfo*                           MatchToJoin;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAsSpectator;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTLobbyPlayerState.ServerDestroyOrLeaveMatch
struct AUTLobbyPlayerState_ServerDestroyOrLeaveMatch_Params
{
};

// Function UnrealTournament.UTLobbyPlayerState.ServerCreateInstance
struct AUTLobbyPlayerState_ServerCreateInstance_Params
{
	struct FString                                     CustomName;                                               // (Parm, ZeroConstructor)
	struct FString                                     RulesetTag;                                               // (Parm, ZeroConstructor)
	struct FString                                     StartingMap;                                              // (Parm, ZeroConstructor)
	bool                                               bIsInParty;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRankLocked;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSpectatable;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPrivateMatch;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBeginnerMatch;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseBots;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                BotDifficulty;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRequireFilled;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHostControl;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTLobbyPlayerState.ServerCreateCustomInstance
struct AUTLobbyPlayerState_ServerCreateCustomInstance_Params
{
	struct FString                                     CustomName;                                               // (Parm, ZeroConstructor)
	struct FString                                     GameMode;                                                 // (Parm, ZeroConstructor)
	struct FString                                     StartingMap;                                              // (Parm, ZeroConstructor)
	bool                                               bIsInParty;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Description;                                              // (Parm, ZeroConstructor)
	TArray<struct FString>                             GameOptions;                                              // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	int                                                DesiredPlayerCount;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTeamGame;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRankLocked;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSpectatable;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPrivateMatch;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBeginnerMatch;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseBots;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                BotDifficulty;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRequireFilled;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHostControl;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTLobbyPlayerState.Server_SendDataBlock
struct AUTLobbyPlayerState_Server_SendDataBlock_Params
{
	int                                                bLock;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTLobbyPlayerState.Server_ReadyToBeginDataPush
struct AUTLobbyPlayerState_Server_ReadyToBeginDataPush_Params
{
};

// Function UnrealTournament.UTLobbyPlayerState.OnRep_CurrentMatch
struct AUTLobbyPlayerState_OnRep_CurrentMatch_Params
{
};

// Function UnrealTournament.UTLobbyPlayerState.NotifyBeginnerAutoLock
struct AUTLobbyPlayerState_NotifyBeginnerAutoLock_Params
{
};

// Function UnrealTournament.UTLobbyPlayerState.ClientMatchError
struct AUTLobbyPlayerState_ClientMatchError_Params
{
	struct FText                                       MatchErrorMessage;                                        // (ConstParm, Parm, ReferenceParm)
	int                                                OptionalInt;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTLobbyPlayerState.ClientConnectToInstance
struct AUTLobbyPlayerState_ClientConnectToInstance_Params
{
	struct FString                                     GameInstanceGUIDString;                                   // (Parm, ZeroConstructor)
	int                                                InDesiredTeam;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAsSpectator;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTLobbyPlayerState.ClientAddedToMatch
struct AUTLobbyPlayerState_ClientAddedToMatch_Params
{
	bool                                               bIsHost;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTLobbyPlayerState.Client_ReceiveBlock
struct AUTLobbyPlayerState_Client_ReceiveBlock_Params
{
	int                                                bLock;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAllowedData                                Data;                                                     // (Parm)
};

// Function UnrealTournament.UTLobbyPlayerState.Client_BeginDataPush
struct AUTLobbyPlayerState_Client_BeginDataPush_Params
{
	int                                                ExpectedSendCount;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTLobbyPC.SetLobbyDebugLevel
struct AUTLobbyPC_SetLobbyDebugLevel_Params
{
	int                                                NewLevel;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTLobbyPC.ServerSendRedirectCount
struct AUTLobbyPC_ServerSendRedirectCount_Params
{
};

// Function UnrealTournament.UTLobbyPC.ServerSendAllRedirects
struct AUTLobbyPC_ServerSendAllRedirects_Params
{
};

// Function UnrealTournament.UTLobbyPC.ServerRconKillMatch
struct AUTLobbyPC_ServerRconKillMatch_Params
{
	class AUTLobbyMatchInfo*                           MatchToKill;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTLobbyPC.ServerChat
struct AUTLobbyPC_ServerChat_Params
{
	struct FName                                       Destination;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTLobbyPC.MatchChat
struct AUTLobbyPC_MatchChat_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTLobbyPC.GlobalChat
struct AUTLobbyPC_GlobalChat_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTLobbyPC.ClientReceiveRedirectCount
struct AUTLobbyPC_ClientReceiveRedirectCount_Params
{
	int                                                NewCount;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTLobbyPC.ClientReceiveRedirect
struct AUTLobbyPC_ClientReceiveRedirect_Params
{
	struct FPackageRedirectReference                   Redirect;                                                 // (ConstParm, Parm, ReferenceParm)
};

// Function UnrealTournament.UTReplicatedGameRuleset.OnReceiveData
struct AUTReplicatedGameRuleset_OnReceiveData_Params
{
};

// Function UnrealTournament.UTReplicatedGameRuleset.GetDescription
struct AUTReplicatedGameRuleset_GetDescription_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function UnrealTournament.UTReplicatedGameRuleset.GetDefaultGameModeObject
struct AUTReplicatedGameRuleset_GetDefaultGameModeObject_Params
{
	class AUTGameMode*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTReplicatedGameRuleset.BuildSlateBadge
struct AUTReplicatedGameRuleset_BuildSlateBadge_Params
{
};

// Function UnrealTournament.UTHUDWidget.ShouldDraw
struct UUTHUDWidget_ShouldDraw_Params
{
	bool                                               bShowScores;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTHUDWidget.SetHidden
struct UUTHUDWidget_SetHidden_Params
{
	bool                                               bIsHidden;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTHUDWidget.RenderObj_TextureAtWithRotation
struct UUTHUDWidget_RenderObj_TextureAtWithRotation_Params
{
	struct FHUDRenderObject_Texture                    TextureObject;                                            // (Parm, OutParm)
	struct FVector2D                                   Postion;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTHUDWidget.RenderObj_TextureAt
struct UUTHUDWidget_RenderObj_TextureAt_Params
{
	struct FHUDRenderObject_Texture                    TextureObject;                                            // (Parm, OutParm)
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Width;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTHUDWidget.RenderObj_Texture
struct UUTHUDWidget_RenderObj_Texture_Params
{
	struct FHUDRenderObject_Texture                    TextureObject;                                            // (Parm, OutParm)
	struct FVector2D                                   DrawOffset;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTHUDWidget.RenderObj_TextAt
struct UUTHUDWidget_RenderObj_TextAt_Params
{
	struct FHUDRenderObject_Text                       TextObject;                                               // (Parm, OutParm)
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTHUDWidget.RenderObj_Text
struct UUTHUDWidget_RenderObj_Text_Params
{
	struct FHUDRenderObject_Text                       TextObject;                                               // (Parm, OutParm)
	struct FVector2D                                   DrawOffset;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTHUDWidget.DrawTexture
struct UUTHUDWidget_DrawTexture_Params
{
	class UTexture*                                    Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Width;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaterialU;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaterialV;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaterialUL;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaterialVL;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DrawOpacity;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                DrawColor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   RenderOffset;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   RotPivot;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTHUDWidget.DrawText
struct UUTHUDWidget_DrawText_Params
{
	struct FText                                       Text;                                                     // (Parm)
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UFont*                                       Font;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawShadow;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ShadowDirection;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ShadowColor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawOutline;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                OutlineColor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TextScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DrawOpacity;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                DrawColor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                BackColor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextHorzPos>                          TextHorzAlignment;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextVertPos>                          TextVertAlignment;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFontRenderInfo                             RenderInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTHUDWidget.DrawMaterial
struct UUTHUDWidget_DrawMaterial_Params
{
	class UMaterialInterface*                          Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Width;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaterialU;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaterialV;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaterialUWidth;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaterialVHeight;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DrawOpacity;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                DrawColor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   RenderOffset;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   RotPivot;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTHUDWidget.DrawAllRenderObjects
struct UUTHUDWidget_DrawAllRenderObjects_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   DrawOffset;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTHUDWidget.Draw
struct UUTHUDWidget_Draw_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTHUDWidget.CalcRotatedDrawLocation
struct UUTHUDWidget_CalcRotatedDrawLocation_Params
{
	float                                              DistanceInPixels;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTHUDWidget.ApplyHUDColor
struct UUTHUDWidget_ApplyHUDColor_Params
{
	struct FLinearColor                                DrawColor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTInventory.StackPickup
struct AUTInventory_StackPickup_Params
{
	class AUTInventory*                                ContainedInv;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTInventory.ShouldDisplayHitEffect
struct AUTInventory_ShouldDisplayHitEffect_Params
{
	int                                                AttemptedDamage;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FinalHealth;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FinalArmor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTInventory.PreventHeadShot
struct AUTInventory_PreventHeadShot_Params
{
	struct FVector                                     HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ShotDirection;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              WeaponHeadScaling;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bConsumeArmor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTInventory.PlayArmorEffects
struct AUTInventory_PlayArmorEffects_Params
{
	class AUTCharacter*                                HitPawn;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTInventory.OwnerEvent
struct AUTInventory_OwnerEvent_Params
{
	struct FName                                       EventName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTInventory.OverrideGiveTo
struct AUTInventory_OverrideGiveTo_Params
{
	class AUTPickup*                                   Pickup;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTInventory.OnViewTargetChange
struct AUTInventory_OnViewTargetChange_Params
{
	class AUTPlayerController*                         NewViewTarget;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTInventory.ModifyDamageTaken
struct AUTInventory_ModifyDamageTaken_Params
{
	int                                                Damage;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Momentum;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AUTInventory*                                HitArmor;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTInventory.HUDShouldRender
struct AUTInventory_HUDShouldRender_Params
{
	class UUTHUDWidget*                                TargetWidget;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTInventory.HandleGivenTo
struct AUTInventory_HandleGivenTo_Params
{
	class AUTCharacter*                                Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTInventory.GetPickupMeshTemplate
struct AUTInventory_GetPickupMeshTemplate_Params
{
	struct FVector                                     OverrideScale;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UMeshComponent*                              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UnrealTournament.UTInventory.GetHUDText
struct AUTInventory_GetHUDText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UnrealTournament.UTInventory.GetEffectiveHealthModifier
struct AUTInventory_GetEffectiveHealthModifier_Params
{
	bool                                               bOnlyVisible;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTInventory.GetBoostPowerRating
struct AUTInventory_GetBoostPowerRating_Params
{
	class AUTBot*                                      B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTInventory.eventRemoved
struct AUTInventory_eventRemoved_Params
{
};

// Function UnrealTournament.UTInventory.eventGivenTo
struct AUTInventory_eventGivenTo_Params
{
	class AUTCharacter*                                NewOwner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoActivate;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTInventory.eventClientRemoved
struct AUTInventory_eventClientRemoved_Params
{
};

// Function UnrealTournament.UTInventory.eventClientGivenTo
struct AUTInventory_eventClientGivenTo_Params
{
	bool                                               bAutoActivate;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTInventory.DrawInventoryHUD
struct AUTInventory_DrawInventoryHUD_Params
{
	class UUTHUDWidget*                                Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Pos;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTInventory.DrawBoostHUD
struct AUTInventory_DrawBoostHUD_Params
{
	class AUTHUD*                                      HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UCanvas*                                     C;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       P;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTInventory.DetourWeight
struct AUTInventory_DetourWeight_Params
{
	class APawn*                                       Asker;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Pickup;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PathDistance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTInventory.ClientRemoved
struct AUTInventory_ClientRemoved_Params
{
};

// Function UnrealTournament.UTInventory.ClientGivenTo
struct AUTInventory_ClientGivenTo_Params
{
	class APawn*                                       NewInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoActivate;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTInventory.BotDesireability
struct AUTInventory_BotDesireability_Params
{
	class APawn*                                       Asker;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 RequestOwner;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Pickup;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PathDistance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTInventory.AddOverlayMaterials
struct AUTInventory_AddOverlayMaterials_Params
{
	class AUTGameState*                                GS;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPickupInventory.SetInventoryType
struct AUTPickupInventory_SetInventoryType_Params
{
	class UClass*                                      NewType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPickupInventory.InventoryTypeUpdated
struct AUTPickupInventory_InventoryTypeUpdated_Params
{
};

// Function UnrealTournament.UTProjectile.ShutDown
struct AUTProjectile_ShutDown_Params
{
};

// Function UnrealTournament.UTProjectile.ShouldIgnoreHit
struct AUTProjectile_ShouldIgnoreHit_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTProjectile.ProcessHit
struct AUTProjectile_ProcessHit_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function UnrealTournament.UTProjectile.OnStop
struct AUTProjectile_OnStop_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function UnrealTournament.UTProjectile.OnShutdown
struct AUTProjectile_OnShutdown_Params
{
};

// Function UnrealTournament.UTProjectile.OnRep_UTProjReplicatedMovement
struct AUTProjectile_OnRep_UTProjReplicatedMovement_Params
{
};

// Function UnrealTournament.UTProjectile.OnRep_Slomo
struct AUTProjectile_OnRep_Slomo_Params
{
};

// Function UnrealTournament.UTProjectile.OnPawnSphereOverlapBegin
struct AUTProjectile_OnPawnSphereOverlapBegin_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function UnrealTournament.UTProjectile.OnOverlapBegin
struct AUTProjectile_OnOverlapBegin_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function UnrealTournament.UTProjectile.OnBounce
struct AUTProjectile_OnBounce_Params
{
	struct FHitResult                                  ImpactResult;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ImpactVelocity;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function UnrealTournament.UTProjectile.InteractsWithProj
struct AUTProjectile_InteractsWithProj_Params
{
	class AUTProjectile*                               OtherProj;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTProjectile.GetMaxDamageRadius
struct AUTProjectile_GetMaxDamageRadius_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTProjectile.GetDamageParams
struct AUTProjectile_GetDamageParams_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              OutMomentum;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRadialDamageParams                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UnrealTournament.UTProjectile.Explode
struct AUTProjectile_Explode_Params
{
	struct FVector                                     HitLocation;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UPrimitiveComponent*                         HitComp;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UnrealTournament.UTProjectile.EndSlomo
struct AUTProjectile_EndSlomo_Params
{
};

// Function UnrealTournament.UTProjectile.DamageImpactedActor
struct AUTProjectile_DamageImpactedActor_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function UnrealTournament.UTGameInstance.EndLevelLoading
struct UUTGameInstance_EndLevelLoading_Params
{
};

// Function UnrealTournament.UTGameInstance.BeginLevelLoading
struct UUTGameInstance_BeginLevelLoading_Params
{
	struct FString                                     LevelName;                                                // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTGameplayStatics.UTSuggestProjectileVelocity
struct UUTGameplayStatics_UTSuggestProjectileVelocity_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TossVelocity;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StartLoc;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     EndLoc;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ZOvershootTolerance;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TossSpeed;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CollisionRadius;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OverrideGravityZ;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxSubdivisions;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESuggestProjVelocityTraceOption>       TraceOption;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTGameplayStatics.UTPlaySound
struct UUTGameplayStatics_UTPlaySound_Params
{
	class UWorld*                                      TheWorld;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  TheSound;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      SourceActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESoundReplicationType>                 RepType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bStopWhenOwnerDestroyed;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SoundLoc;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AUTPlayerController*                         AmpedListener;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNotifyAI;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESoundAmplificationType>               AmpType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTGameplayStatics.UTHurtRadius
struct UUTGameplayStatics_UTHurtRadius_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BaseDamage;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinimumDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BaseMomentumMag;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              DamageInnerRadius;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DamageOuterRadius;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DamageFalloff;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageTypeClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              IgnoreActors;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedByController;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 FFInstigatedBy;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FFDamageType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CollisionFreeRadius;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTGameplayStatics.TokensReset
struct UUTGameplayStatics_TokensReset_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTGameplayStatics.TokensCommit
struct UUTGameplayStatics_TokensCommit_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTGameplayStatics.TokenRevoke
struct UUTGameplayStatics_TokenRevoke_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TokenUniqueID;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTGameplayStatics.TokenPickedUp
struct UUTGameplayStatics_TokenPickedUp_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TokenUniqueID;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTGameplayStatics.SetModConfigStringArray
struct UUTGameplayStatics_SetModConfigStringArray_Params
{
	struct FString                                     ConfigSection;                                            // (Parm, ZeroConstructor)
	struct FString                                     ConfigKey;                                                // (Parm, ZeroConstructor)
	TArray<struct FString>                             Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function UnrealTournament.UTGameplayStatics.SetModConfigString
struct UUTGameplayStatics_SetModConfigString_Params
{
	struct FString                                     ConfigSection;                                            // (Parm, ZeroConstructor)
	struct FString                                     ConfigKey;                                                // (Parm, ZeroConstructor)
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTGameplayStatics.SetModConfigInt
struct UUTGameplayStatics_SetModConfigInt_Params
{
	struct FString                                     ConfigSection;                                            // (Parm, ZeroConstructor)
	struct FString                                     ConfigKey;                                                // (Parm, ZeroConstructor)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTGameplayStatics.SetModConfigFloat
struct UUTGameplayStatics_SetModConfigFloat_Params
{
	struct FString                                     ConfigSection;                                            // (Parm, ZeroConstructor)
	struct FString                                     ConfigKey;                                                // (Parm, ZeroConstructor)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTGameplayStatics.SetBestTime
struct UUTGameplayStatics_SetBestTime_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TimingSection;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InBestTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTGameplayStatics.SaveModConfig
struct UUTGameplayStatics_SaveModConfig_Params
{
};

// Function UnrealTournament.UTGameplayStatics.ReloadModConfig
struct UUTGameplayStatics_ReloadModConfig_Params
{
};

// Function UnrealTournament.UTGameplayStatics.RecordEvent_UTTutorialPlayInstruction
struct UUTGameplayStatics_RecordEvent_UTTutorialPlayInstruction_Params
{
	class AUTPlayerController*                         UTPC;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     AnnouncementName;                                         // (Parm, ZeroConstructor)
	int                                                InstructionID;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTGameplayStatics.RecordEvent_UTTutorialCompleted
struct UUTGameplayStatics_RecordEvent_UTTutorialCompleted_Params
{
	class AUTPlayerController*                         UTPC;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     TutorialMap;                                              // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTGameplayStatics.PlaySoundTeamAdjusted
struct UUTGameplayStatics_PlaySoundTeamAdjusted_Params
{
	class USoundCue*                                   SoundToPlay;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      SoundInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      SoundTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Attached;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UnrealTournament.UTGameplayStatics.PickBestAimTarget
struct UUTGameplayStatics_PickBestAimTarget_Params
{
	class AController*                                 AskingC;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StartLoc;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     FireDir;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinAim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxRange;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      TargetClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTGameplayStatics.LineTraceForWorldBlockingOnly
struct UUTGameplayStatics_LineTraceForWorldBlockingOnly_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Start;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTGameplayStatics.LineTraceForObjectsSimple
struct UUTGameplayStatics_LineTraceForObjectsSimple_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Start;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreSelf;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTGameplayStatics.K2_SaveConfig
struct UUTGameplayStatics_K2_SaveConfig_Params
{
	class UObject*                                     Obj;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTGameplayStatics.IsPlayInEditor
struct UUTGameplayStatics_IsPlayInEditor_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTGameplayStatics.IsForcingSingleSampleShadowFromStationaryLights
struct UUTGameplayStatics_IsForcingSingleSampleShadowFromStationaryLights_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTGameplayStatics.HowManyTokensHaveBeenPickedUpBefore
struct UUTGameplayStatics_HowManyTokensHaveBeenPickedUpBefore_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               TokenUniqueIDs;                                           // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTGameplayStatics.HasTokenBeenPickedUpBefore
struct UUTGameplayStatics_HasTokenBeenPickedUpBefore_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TokenUniqueID;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTGameplayStatics.GetModConfigStringArray
struct UUTGameplayStatics_GetModConfigStringArray_Params
{
	struct FString                                     ConfigSection;                                            // (Parm, ZeroConstructor)
	struct FString                                     ConfigKey;                                                // (Parm, ZeroConstructor)
	TArray<struct FString>                             Value;                                                    // (Parm, OutParm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTGameplayStatics.GetModConfigString
struct UUTGameplayStatics_GetModConfigString_Params
{
	struct FString                                     ConfigSection;                                            // (Parm, ZeroConstructor)
	struct FString                                     ConfigKey;                                                // (Parm, ZeroConstructor)
	struct FString                                     Value;                                                    // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTGameplayStatics.GetModConfigInt
struct UUTGameplayStatics_GetModConfigInt_Params
{
	struct FString                                     ConfigSection;                                            // (Parm, ZeroConstructor)
	struct FString                                     ConfigKey;                                                // (Parm, ZeroConstructor)
	int                                                Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTGameplayStatics.GetModConfigFloat
struct UUTGameplayStatics_GetModConfigFloat_Params
{
	struct FString                                     ConfigSection;                                            // (Parm, ZeroConstructor)
	struct FString                                     ConfigKey;                                                // (Parm, ZeroConstructor)
	float                                              Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTGameplayStatics.GetLocalPlayerController
struct UUTGameplayStatics_GetLocalPlayerController_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlayerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTGameplayStatics.GetLevelName
struct UUTGameplayStatics_GetLevelName_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShortName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function UnrealTournament.UTGameplayStatics.GetGravityZ
struct UUTGameplayStatics_GetGravityZ_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TestLoc;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTGameplayStatics.GetGameClass
struct UUTGameplayStatics_GetGameClass_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTGameplayStatics.GetFloatOption
struct UUTGameplayStatics_GetFloatOption_Params
{
	struct FString                                     Options;                                                  // (Parm, ZeroConstructor)
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	float                                              DefaultValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTGameplayStatics.GetCurrentAimContext
struct UUTGameplayStatics_GetCurrentAimContext_Params
{
	class AUTCharacter*                                PawnTarget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinAim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxRange;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      TargetClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTGameplayStatics.GetBestTime
struct UUTGameplayStatics_GetBestTime_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TimingSection;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutBestTime;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTGameplayStatics.ExecuteDatabaseQuery
struct UUTGameplayStatics_ExecuteDatabaseQuery_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     DatabaseQuery;                                            // (Parm, ZeroConstructor)
	TArray<struct FDatabaseRow>                        OutDatabaseRows;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function UnrealTournament.UTGameplayStatics.ChooseBestAimTarget
struct UUTGameplayStatics_ChooseBestAimTarget_Params
{
	class AController*                                 AskingC;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StartLoc;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     FireDir;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinAim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxRange;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxOffsetDist;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      TargetClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTGameplayStatics.AssignTeamAdjustmentValue
struct UUTGameplayStatics_AssignTeamAdjustmentValue_Params
{
	class UAudioComponent*                             AudioComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      SoundInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTUMGWidget.WidgetOpened
struct UUTUMGWidget_WidgetOpened_Params
{
};

// Function UnrealTournament.UTUMGWidget.WidgetClosed
struct UUTUMGWidget_WidgetClosed_Params
{
};

// Function UnrealTournament.UTUMGWidget.SimpleEvent
struct UUTUMGWidget_SimpleEvent_Params
{
	struct FName                                       EventTag;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTUMGWidget.ShowParticleSystem
struct UUTUMGWidget_ShowParticleSystem_Params
{
	class UParticleSystem*                             ParticleSystem;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ScreenLocation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRelativeCoords;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocationModifier;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    DirectionModifier;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAttachToCamera;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTUMGWidget.OnParticlesFinished
struct UUTUMGWidget_OnParticlesFinished_Params
{
	class UParticleSystemComponent*                    PCS;                                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UnrealTournament.UTUMGWidget.GetPlayerOwner
struct UUTUMGWidget_GetPlayerOwner_Params
{
	class UUTLocalPlayer*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTUMGWidget.CloseWidget
struct UUTUMGWidget_CloseWidget_Params
{
};

// Function UnrealTournament.UTUMGHudWidget.SetLifeTime
struct UUTUMGHudWidget_SetLifeTime_Params
{
	float                                              LifeSpan;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTUMGHudWidget.NotifyHUDWidgetIsDone
struct UUTUMGHudWidget_NotifyHUDWidgetIsDone_Params
{
};

// Function UnrealTournament.UTUMGHudWidget.GetHUDVisibility
struct UUTUMGHudWidget_GetHUDVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTUMGHudWidget.ApplyHUDVisibility
struct UUTUMGHudWidget_ApplyHUDVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTUMGHudWidget_Crosshair.ApplyCustomizations
struct UUTUMGHudWidget_Crosshair_ApplyCustomizations_Params
{
	struct FWeaponCustomizationInfo                    CustomizationsToApply;                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UnrealTournament.UTCrosshair.NativeDrawCrosshair
struct UUTCrosshair_NativeDrawCrosshair_Params
{
	class AUTHUD*                                      TargetHUD;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UCanvas*                                     Canvas;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AUTWeapon*                                   Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FWeaponCustomizationInfo                    CustomizationsToApply;                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UnrealTournament.UTCrosshair.DrawCrosshair
struct UUTCrosshair_DrawCrosshair_Params
{
	class AUTHUD*                                      TargetHUD;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UCanvas*                                     Canvas;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AUTWeapon*                                   Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FWeaponCustomizationInfo                    CustomizationsToApply;                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UnrealTournament.UTCrosshair.DeactivateCrosshair
struct UUTCrosshair_DeactivateCrosshair_Params
{
	class AUTHUD*                                      TargetHUD;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCrosshair.ActivateCrosshair
struct UUTCrosshair_ActivateCrosshair_Params
{
	class AUTHUD*                                      TargetHUD;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FWeaponCustomizationInfo                    CustomizationsToApply;                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	class AUTWeapon*                                   Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTWeapon.UpdateTiming
struct AUTWeapon_UpdateTiming_Params
{
};

// Function UnrealTournament.UTWeapon.UpdateCrosshairTarget
struct AUTWeapon_UpdateCrosshairTarget_Params
{
	class AUTPlayerState*                              NewCrosshairTarget;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UUTHUDWidget*                                WeaponHudWidget;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RenderDelta;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTWeapon.TestWeaponScale
struct AUTWeapon_TestWeaponScale_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTWeapon.TestWeaponRot
struct AUTWeapon_TestWeaponRot_Params
{
	float                                              Pitch;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Roll;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTWeapon.TestWeaponLoc
struct AUTWeapon_TestWeaponLoc_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTWeapon.SuggestDefenseStyle
struct AUTWeapon_SuggestDefenseStyle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTWeapon.SuggestAttackStyle
struct AUTWeapon_SuggestAttackStyle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTWeapon.StopFiringEffects
struct AUTWeapon_StopFiringEffects_Params
{
};

// Function UnrealTournament.UTWeapon.StopFire
struct AUTWeapon_StopFire_Params
{
	unsigned char                                      FireModeNum;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTWeapon.StartFire
struct AUTWeapon_StartFire_Params
{
	unsigned char                                      FireModeNum;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTWeapon.ShouldPlay1PVisuals
struct AUTWeapon_ShouldPlay1PVisuals_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTWeapon.ShouldDrawFFIndicator
struct AUTWeapon_ShouldDrawFFIndicator_Params
{
	class APlayerController*                           Viewer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AUTPlayerState*                              HitPlayerState;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTWeapon.ShouldAIDelayFiring
struct AUTWeapon_ShouldAIDelayFiring_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTWeapon.SetZoomState
struct AUTWeapon_SetZoomState_Params
{
	TEnumAsByte<EZoomState>                            NewZoomState;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTWeapon.SetZoomMode
struct AUTWeapon_SetZoomMode_Params
{
	unsigned char                                      NewZoomMode;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTWeapon.SetupSpecialMaterials
struct AUTWeapon_SetupSpecialMaterials_Params
{
};

// Function UnrealTournament.UTWeapon.ServerUpdateFiringStates
struct AUTWeapon_ServerUpdateFiringStates_Params
{
	unsigned char                                      FireSettings;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTWeapon.ServerStopFireRecent
struct AUTWeapon_ServerStopFireRecent_Params
{
	unsigned char                                      FireModeNum;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      InFireEventIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTWeapon.ServerStopFire
struct AUTWeapon_ServerStopFire_Params
{
	unsigned char                                      FireModeNum;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      InFireEventIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTWeapon.ServerStartFireOffset
struct AUTWeapon_ServerStartFireOffset_Params
{
	unsigned char                                      FireModeNum;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      InFireEventIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ZOffset;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bClientFired;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTWeapon.ServerStartFire
struct AUTWeapon_ServerStartFire_Params
{
	unsigned char                                      FireModeNum;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      InFireEventIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bClientFired;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTWeapon.ServerSetZoomState
struct AUTWeapon_ServerSetZoomState_Params
{
	unsigned char                                      NewZoomState;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTWeapon.ServerSetZoomMode
struct AUTWeapon_ServerSetZoomMode_Params
{
	unsigned char                                      NewZoomMode;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTWeapon.ServerHitScanHit
struct AUTWeapon_ServerHitScanHit_Params
{
	class AUTCharacter*                                HitScanChar;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      HitScanEventIndex;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTWeapon.ResendServerStartFireOffset
struct AUTWeapon_ResendServerStartFireOffset_Params
{
	unsigned char                                      FireModeNum;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      InFireEventIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ZOffset;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bClientFired;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTWeapon.ResendServerStartFire
struct AUTWeapon_ResendServerStartFire_Params
{
	unsigned char                                      FireModeNum;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      InFireEventIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bClientFired;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTWeapon.PlayWeaponAnim
struct AUTWeapon_PlayWeaponAnim_Params
{
	class UAnimMontage*                                WeaponAnim;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                HandsAnim;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RateOverride;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTWeapon.PlayImpactEffects
struct AUTWeapon_PlayImpactEffects_Params
{
	struct FVector                                     TargetLoc;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	unsigned char                                      FireMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpawnLocation;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    SpawnRotation;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function UnrealTournament.UTWeapon.PlayFiringEffects
struct AUTWeapon_PlayFiringEffects_Params
{
};

// Function UnrealTournament.UTWeapon.OnZoomedOut
struct AUTWeapon_OnZoomedOut_Params
{
};

// Function UnrealTournament.UTWeapon.OnZoomedIn
struct AUTWeapon_OnZoomedIn_Params
{
};

// Function UnrealTournament.UTWeapon.OnStoppedFiring
struct AUTWeapon_OnStoppedFiring_Params
{
};

// Function UnrealTournament.UTWeapon.OnStartedFiring
struct AUTWeapon_OnStartedFiring_Params
{
};

// Function UnrealTournament.UTWeapon.OnRep_ZoomState
struct AUTWeapon_OnRep_ZoomState_Params
{
};

// Function UnrealTournament.UTWeapon.OnRep_ZoomCount
struct AUTWeapon_OnRep_ZoomCount_Params
{
};

// Function UnrealTournament.UTWeapon.OnRep_AttachmentType
struct AUTWeapon_OnRep_AttachmentType_Params
{
};

// Function UnrealTournament.UTWeapon.OnRep_Ammo
struct AUTWeapon_OnRep_Ammo_Params
{
};

// Function UnrealTournament.UTWeapon.OnMultiPress
struct AUTWeapon_OnMultiPress_Params
{
	unsigned char                                      OtherFireMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTWeapon.OnHitScanDamage
struct AUTWeapon_OnHitScanDamage_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     FireDir;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTWeapon.OnContinuedFiring
struct AUTWeapon_OnContinuedFiring_Params
{
};

// Function UnrealTournament.UTWeapon.OnBringUp
struct AUTWeapon_OnBringUp_Params
{
};

// Function UnrealTournament.UTWeapon.NotifyTeamChanged
struct AUTWeapon_NotifyTeamChanged_Params
{
};

// Function UnrealTournament.UTWeapon.NotifyKillWhileHolding
struct AUTWeapon_NotifyKillWhileHolding_Params
{
	class UClass*                                      DmgType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTWeapon.NeedsAmmoDisplay
struct AUTWeapon_NeedsAmmoDisplay_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTWeapon.ModifyFireEffect
struct AUTWeapon_ModifyFireEffect_Params
{
	class UParticleSystemComponent*                    Effect;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UnrealTournament.UTWeapon.K2_FireInstantHit
struct AUTWeapon_K2_FireInstantHit_Params
{
	bool                                               bDealDamage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function UnrealTournament.UTWeapon.IsUnEquipping
struct AUTWeapon_IsUnEquipping_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTWeapon.IsPreparingAttack
struct AUTWeapon_IsPreparingAttack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTWeapon.IsFiring
struct AUTWeapon_IsFiring_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTWeapon.HasAnyAmmo
struct AUTWeapon_HasAnyAmmo_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTWeapon.HasAmmo
struct AUTWeapon_HasAmmo_Params
{
	unsigned char                                      FireModeNum;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTWeapon.GuessPlayerTarget
struct AUTWeapon_GuessPlayerTarget_Params
{
	struct FVector                                     StartFireLoc;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     FireDir;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function UnrealTournament.UTWeapon.GotoFireMode
struct AUTWeapon_GotoFireMode_Params
{
	unsigned char                                      NewFireMode;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTWeapon.GetZoomMaterial
struct AUTWeapon_GetZoomMaterial_Params
{
	unsigned char                                      FireModeNum;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTWeapon.GetWeaponHand
struct AUTWeapon_GetWeaponHand_Params
{
	EWeaponHand                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTWeapon.GetRefireTime
struct AUTWeapon_GetRefireTime_Params
{
	unsigned char                                      FireModeNum;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTWeapon.GetPutDownTime
struct AUTWeapon_GetPutDownTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTWeapon.GetImpactSpawnPosition
struct AUTWeapon_GetImpactSpawnPosition_Params
{
	struct FVector                                     TargetLoc;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     SpawnLocation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    SpawnRotation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTWeapon.GetImpactEffectHit
struct AUTWeapon_GetImpactEffectHit_Params
{
	class APawn*                                       Shooter;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StartLoc;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     TargetLoc;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FHitResult                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTWeapon.GetFiringAnim
struct AUTWeapon_GetFiringAnim_Params
{
	unsigned char                                      FireMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOnHands;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTWeapon.GetFireStartLoc
struct AUTWeapon_GetFireStartLoc_Params
{
	unsigned char                                      FireMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTWeapon.GetDamageRadius
struct AUTWeapon_GetDamageRadius_Params
{
	unsigned char                                      TestMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTWeapon.GetCrosshairScale
struct AUTWeapon_GetCrosshairScale_Params
{
	class AUTHUD*                                      HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTWeapon.GetCrosshairColor
struct AUTWeapon_GetCrosshairColor_Params
{
	class UUTHUDWidget*                                WeaponHudWidget;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTWeapon.GetBringUpTime
struct AUTWeapon_GetBringUpTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTWeapon.GetBaseFireRotation
struct AUTWeapon_GetBaseFireRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTWeapon.GetAISelectRating
struct AUTWeapon_GetAISelectRating_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTWeapon.GetAdjustedAim
struct AUTWeapon_GetAdjustedAim_Params
{
	struct FVector                                     StartFireLoc;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTWeapon.Get1PMeshes
struct AUTWeapon_Get1PMeshes_Params
{
	TArray<class UMeshComponent*>                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function UnrealTournament.UTWeapon.FiringInfoUpdated
struct AUTWeapon_FiringInfoUpdated_Params
{
	unsigned char                                      InFireMode;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      FlashCount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InFlashLocation;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTWeapon.FiringExtraUpdated
struct AUTWeapon_FiringExtraUpdated_Params
{
	unsigned char                                      NewFlashExtra;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      InFireMode;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTWeapon.FiringEffectsUpdated
struct AUTWeapon_FiringEffectsUpdated_Params
{
	unsigned char                                      InFireMode;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InFlashLocation;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTWeapon.FireShotOverride
struct AUTWeapon_FireShotOverride_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTWeapon.FireShot
struct AUTWeapon_FireShot_Params
{
};

// Function UnrealTournament.UTWeapon.FireProjectile
struct AUTWeapon_FireProjectile_Params
{
	class AUTProjectile*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTWeapon.FireCone
struct AUTWeapon_FireCone_Params
{
};

// Function UnrealTournament.UTWeapon.eventPreventPutDown
struct AUTWeapon_eventPreventPutDown_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTWeapon.DrawWeaponCrosshair
struct AUTWeapon_DrawWeaponCrosshair_Params
{
	class UUTHUDWidget*                                WeaponHudWidget;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RenderDelta;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTWeapon.DetachFromOwner
struct AUTWeapon_DetachFromOwner_Params
{
};

// Function UnrealTournament.UTWeapon.DetachFromHolster
struct AUTWeapon_DetachFromHolster_Params
{
};

// Function UnrealTournament.UTWeapon.ConsumeAmmo
struct AUTWeapon_ConsumeAmmo_Params
{
	unsigned char                                      FireModeNum;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTWeapon.ClientMissedHitScan
struct AUTWeapon_ClientMissedHitScan_Params
{
	struct FVector_NetQuantize                         MissedHitScanStart;                                       // (Parm)
	struct FVector_NetQuantize                         MissedHitScanEnd;                                         // (Parm)
	struct FVector_NetQuantize                         MissedHitScanLoc;                                         // (Parm)
	float                                              MissedHitScanTime;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      MissedHitScanIndex;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTWeapon.CanSwitchTo
struct AUTWeapon_CanSwitchTo_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTWeapon.CancelImpactEffect
struct AUTWeapon_CancelImpactEffect_Params
{
	struct FHitResult                                  ImpactHit;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTWeapon.CanAttack
struct AUTWeapon_CanAttack_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLoc;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bDirectOnly;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPreferCurrentMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      BestFireMode;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     OptimalTargetLoc;                                         // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTWeapon.AttachToOwner
struct AUTWeapon_AttachToOwner_Params
{
};

// Function UnrealTournament.UTWeapon.AttachToHolster
struct AUTWeapon_AttachToHolster_Params
{
};

// Function UnrealTournament.UTWeapon.AddAmmo
struct AUTWeapon_AddAmmo_Params
{
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTLineUpZoneVisualizationCharacter.OnChangeTeamNum
struct AUTLineUpZoneVisualizationCharacter_OnChangeTeamNum_Params
{
};

// Function UnrealTournament.UTLineUpZoneVisualizationCharacter.GetTeamNum
struct AUTLineUpZoneVisualizationCharacter_GetTeamNum_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTLineUpZone.UpdateSpawnLocationsWithVisualizationMove
struct AUTLineUpZone_UpdateSpawnLocationsWithVisualizationMove_Params
{
};

// Function UnrealTournament.UTLineUpZone.UpdateMeshVisualizations
struct AUTLineUpZone_UpdateMeshVisualizations_Params
{
};

// Function UnrealTournament.UTLineUpZone.SnapToFloor
struct AUTLineUpZone_SnapToFloor_Params
{
};

// Function UnrealTournament.UTLineUpZone.OnTransitionToWeaponReadyAnims
struct AUTLineUpZone_OnTransitionToWeaponReadyAnims_Params
{
};

// Function UnrealTournament.UTLineUpZone.OnPlayWeaponReadyAnimOnCharacter
struct AUTLineUpZone_OnPlayWeaponReadyAnimOnCharacter_Params
{
	class AUTCharacter*                                UTChar;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTLineUpZone.OnPlayIntroAnimationOnCharacter
struct AUTLineUpZone_OnPlayIntroAnimationOnCharacter_Params
{
	class AUTCharacter*                                UTChar;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTLineUpZone.OnLineUpStart
struct AUTLineUpZone_OnLineUpStart_Params
{
	ELineUpTypes                                       Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTLineUpZone.OnLineUpEnd
struct AUTLineUpZone_OnLineUpEnd_Params
{
	ELineUpTypes                                       Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTLineUpZone.InitializeMeshVisualizations
struct AUTLineUpZone_InitializeMeshVisualizations_Params
{
};

// Function UnrealTournament.UTLineUpZone.DeleteAllMeshVisualizations
struct AUTLineUpZone_DeleteAllMeshVisualizations_Params
{
};

// Function UnrealTournament.UTDemoRecSpectator.ToggleReplayWindow
struct AUTDemoRecSpectator_ToggleReplayWindow_Params
{
};

// Function UnrealTournament.UTDemoRecSpectator.MulticastReceiveLocalizedMessage
struct AUTDemoRecSpectator_MulticastReceiveLocalizedMessage_Params
{
	class UClass*                                      Message;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Switch;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerState*                                RelatedPlayerState_2;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerState*                                RelatedPlayerState_3;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     OptionalObject;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTDemoRecSpectator.DumpSpecInfo
struct AUTDemoRecSpectator_DumpSpecInfo_Params
{
};

// Function UnrealTournament.UTDemoRecSpectator.DemoNotifyCausedHit
struct AUTDemoRecSpectator_DemoNotifyCausedHit_Params
{
	class APawn*                                       InstigatorPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AUTCharacter*                                HitPawn;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      AppliedDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Momentum;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (ConstParm, Parm, ReferenceParm)
	bool                                               bArmorDamage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOverhealth;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTBlurWidget.SetColorAndOpacity
struct UUTBlurWidget_SetColorAndOpacity_Params
{
	struct FLinearColor                                InColorAndOpacity;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTUserWidgetBase.SetUTTooltip
struct UUTUserWidgetBase_SetUTTooltip_Params
{
	class UWidget*                                     InTooltipWidget;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTUserWidgetBase.SetBasicTooltipTitle
struct UUTUserWidgetBase_SetBasicTooltipTitle_Params
{
	struct FText                                       NewTooltipTitle;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UnrealTournament.UTUserWidgetBase.SetBasicTooltipText
struct UUTUserWidgetBase_SetBasicTooltipText_Params
{
	struct FText                                       NewTooltipText;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UnrealTournament.UTUserWidgetBase.SetBasicTooltipInfo
struct UUTUserWidgetBase_SetBasicTooltipInfo_Params
{
	struct FText                                       NewTooltipTitle;                                          // (Parm)
	struct FText                                       NewTooltipText;                                           // (Parm)
};

// Function UnrealTournament.UTUserWidgetBase.GetBasicTooltipText
struct UUTUserWidgetBase_GetBasicTooltipText_Params
{
	struct FText                                       ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function UnrealTournament.UTUserWidgetBase.DynamicGetTooltipContent
struct UUTUserWidgetBase_DynamicGetTooltipContent_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTInputHandlerWidget.HandleRequestedInput
struct UUTInputHandlerWidget_HandleRequestedInput_Params
{
	struct FKey                                        Key;                                                      // (Parm)
	TEnumAsByte<EInputEvent>                           EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTButtonStyle.GetSelectedTextStyle
struct UUTButtonStyle_GetSelectedTextStyle_Params
{
	class UUTTextStyle*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTButtonStyle.GetSelectedPressedBrush
struct UUTButtonStyle_GetSelectedPressedBrush_Params
{
	TEnumAsByte<EUTWidgetStyleSize>                    Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 Brush;                                                    // (Parm, OutParm)
};

// Function UnrealTournament.UTButtonStyle.GetSelectedHoveredBrush
struct UUTButtonStyle_GetSelectedHoveredBrush_Params
{
	TEnumAsByte<EUTWidgetStyleSize>                    Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 Brush;                                                    // (Parm, OutParm)
};

// Function UnrealTournament.UTButtonStyle.GetSelectedBaseBrush
struct UUTButtonStyle_GetSelectedBaseBrush_Params
{
	TEnumAsByte<EUTWidgetStyleSize>                    Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 Brush;                                                    // (Parm, OutParm)
};

// Function UnrealTournament.UTButtonStyle.GetNormalTextStyle
struct UUTButtonStyle_GetNormalTextStyle_Params
{
	class UUTTextStyle*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTButtonStyle.GetNormalPressedBrush
struct UUTButtonStyle_GetNormalPressedBrush_Params
{
	TEnumAsByte<EUTWidgetStyleSize>                    Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 Brush;                                                    // (Parm, OutParm)
};

// Function UnrealTournament.UTButtonStyle.GetNormalHoveredBrush
struct UUTButtonStyle_GetNormalHoveredBrush_Params
{
	TEnumAsByte<EUTWidgetStyleSize>                    Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 Brush;                                                    // (Parm, OutParm)
};

// Function UnrealTournament.UTButtonStyle.GetNormalBaseBrush
struct UUTButtonStyle_GetNormalBaseBrush_Params
{
	TEnumAsByte<EUTWidgetStyleSize>                    Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 Brush;                                                    // (Parm, OutParm)
};

// Function UnrealTournament.UTButtonStyle.GetDisabledTextStyle
struct UUTButtonStyle_GetDisabledTextStyle_Params
{
	class UUTTextStyle*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTButtonStyle.GetDisabledBrush
struct UUTButtonStyle_GetDisabledBrush_Params
{
	TEnumAsByte<EUTWidgetStyleSize>                    Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 Brush;                                                    // (Parm, OutParm)
};

// Function UnrealTournament.UTButtonStyle.GetCustomPadding
struct UUTButtonStyle_GetCustomPadding_Params
{
	TEnumAsByte<EUTWidgetStyleSize>                    Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     OutCustomPadding;                                         // (Parm, OutParm)
};

// Function UnrealTournament.UTButtonStyle.GetButtonPadding
struct UUTButtonStyle_GetButtonPadding_Params
{
	TEnumAsByte<EUTWidgetStyleSize>                    Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     OutButtonPadding;                                         // (Parm, OutParm)
};

// Function UnrealTournament.UTBaseButton.SetStyleSize
struct UUTBaseButton_SetStyleSize_Params
{
	TEnumAsByte<EUTWidgetStyleSize>                    InSize;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTBaseButton.SetStyle
struct UUTBaseButton_SetStyle_Params
{
	class UClass*                                      InStyle;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTBaseButton.SetSelectedInternal
struct UUTBaseButton_SetSelectedInternal_Params
{
	bool                                               bInSelected;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowSound;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBroadcast;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTBaseButton.SetMinDimensions
struct UUTBaseButton_SetMinDimensions_Params
{
	int                                                InMinWidth;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InMinHeight;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTBaseButton.SetIsSelected
struct UUTBaseButton_SetIsSelected_Params
{
	bool                                               InSelected;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromClick;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTBaseButton.SetIsSelectable
struct UUTBaseButton_SetIsSelectable_Params
{
	bool                                               bInIsSelectable;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTBaseButton.OnStyleSizeChanged
struct UUTBaseButton_OnStyleSizeChanged_Params
{
};

// Function UnrealTournament.UTBaseButton.IsPressed
struct UUTBaseButton_IsPressed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTBaseButton.IsInteractionEnabled
struct UUTBaseButton_IsInteractionEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTBaseButton.IsHovered
struct UUTBaseButton_IsHovered_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTBaseButton.HandleButtonClicked
struct UUTBaseButton_HandleButtonClicked_Params
{
};

// Function UnrealTournament.UTBaseButton.GetStyle
struct UUTBaseButton_GetStyle_Params
{
	class UUTButtonStyle*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTBaseButton.GetSelected
struct UUTBaseButton_GetSelected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTBaseButton.GetCurrentTextStyleClass
struct UUTBaseButton_GetCurrentTextStyleClass_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTBaseButton.GetCurrentTextStyle
struct UUTBaseButton_GetCurrentTextStyle_Params
{
	class UUTTextStyle*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTBaseButton.GetCurrentCustomPadding
struct UUTBaseButton_GetCurrentCustomPadding_Params
{
	struct FMargin                                     OutCustomPadding;                                         // (Parm, OutParm)
};

// Function UnrealTournament.UTBaseButton.GetCurrentButtonPadding
struct UUTBaseButton_GetCurrentButtonPadding_Params
{
	struct FMargin                                     OutButtonPadding;                                         // (Parm, OutParm)
};

// Function UnrealTournament.UTBaseButton.EnableButton
struct UUTBaseButton_EnableButton_Params
{
};

// Function UnrealTournament.UTBaseButton.DisableButtonWithReason
struct UUTBaseButton_DisableButtonWithReason_Params
{
	struct FText                                       DisabledReason;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UnrealTournament.UTBaseButton.DisableButton
struct UUTBaseButton_DisableButton_Params
{
};

// Function UnrealTournament.UTBaseButton.ClearSelection
struct UUTBaseButton_ClearSelection_Params
{
};

// Function UnrealTournament.UTBaseButton.BP_OnUnhovered
struct UUTBaseButton_BP_OnUnhovered_Params
{
};

// Function UnrealTournament.UTBaseButton.BP_OnSelected
struct UUTBaseButton_BP_OnSelected_Params
{
};

// Function UnrealTournament.UTBaseButton.BP_OnHovered
struct UUTBaseButton_BP_OnHovered_Params
{
};

// Function UnrealTournament.UTBaseButton.BP_OnEnabled
struct UUTBaseButton_BP_OnEnabled_Params
{
};

// Function UnrealTournament.UTBaseButton.BP_OnDisabled
struct UUTBaseButton_BP_OnDisabled_Params
{
};

// Function UnrealTournament.UTBaseButton.BP_OnDeselected
struct UUTBaseButton_BP_OnDeselected_Params
{
};

// Function UnrealTournament.UTBaseButton.BP_OnClicked
struct UUTBaseButton_BP_OnClicked_Params
{
};

// Function UnrealTournament.UTCanvasRenderTarget2D.UpdateDispatcher
struct UUTCanvasRenderTarget2D_UpdateDispatcher_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Width;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCheatManager.WOff
struct UUTCheatManager_WOff_Params
{
	float                                              F;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCheatManager.ViewBot
struct UUTCheatManager_ViewBot_Params
{
};

// Function UnrealTournament.UTCheatManager.UnlockTutorials
struct UUTCheatManager_UnlockTutorials_Params
{
};

// Function UnrealTournament.UTCheatManager.UnlimitedPowerupUses
struct UUTCheatManager_UnlimitedPowerupUses_Params
{
};

// Function UnrealTournament.UTCheatManager.UnlimitedAmmo
struct UUTCheatManager_UnlimitedAmmo_Params
{
};

// Function UnrealTournament.UTCheatManager.ua
struct UUTCheatManager_ua_Params
{
};

// Function UnrealTournament.UTCheatManager.TestPaths
struct UUTCheatManager_TestPaths_Params
{
	bool                                               bHighJumps;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWallDodges;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLifts;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLiftJumps;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCheatManager.TestAMDAllocation
struct UUTCheatManager_TestAMDAllocation_Params
{
};

// Function UnrealTournament.UTCheatManager.Teleport
struct UUTCheatManager_Teleport_Params
{
};

// Function UnrealTournament.UTCheatManager.Spread
struct UUTCheatManager_Spread_Params
{
	float                                              Scaling;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCheatManager.SetHat
struct UUTCheatManager_SetHat_Params
{
	struct FString                                     Hat;                                                      // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTCheatManager.SetEyewear
struct UUTCheatManager_SetEyewear_Params
{
	struct FString                                     Eyewear;                                                  // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTCheatManager.SetChar
struct UUTCheatManager_SetChar_Params
{
	struct FString                                     NewChar;                                                  // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTCheatManager.ReportWaitTime
struct UUTCheatManager_ReportWaitTime_Params
{
	struct FString                                     RatingType;                                               // (Parm, ZeroConstructor)
	int                                                Seconds;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCheatManager.PlayTaunt
struct UUTCheatManager_PlayTaunt_Params
{
	struct FString                                     TauntClass;                                               // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTCheatManager.NoOutline
struct UUTCheatManager_NoOutline_Params
{
};

// Function UnrealTournament.UTCheatManager.McpRefreshProfile
struct UUTCheatManager_McpRefreshProfile_Params
{
};

// Function UnrealTournament.UTCheatManager.McpGrantItem
struct UUTCheatManager_McpGrantItem_Params
{
	struct FString                                     ItemId;                                                   // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTCheatManager.McpGetVersion
struct UUTCheatManager_McpGetVersion_Params
{
};

// Function UnrealTournament.UTCheatManager.McpDestroyItem
struct UUTCheatManager_McpDestroyItem_Params
{
	struct FString                                     ItemId;                                                   // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTCheatManager.McpCheat
struct UUTCheatManager_McpCheat_Params
{
};

// Function UnrealTournament.UTCheatManager.MatchmakeMyParty
struct UUTCheatManager_MatchmakeMyParty_Params
{
	int                                                PlaylistId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCheatManager.Loaded
struct UUTCheatManager_Loaded_Params
{
};

// Function UnrealTournament.UTCheatManager.ImpartWeaponSkin
struct UUTCheatManager_ImpartWeaponSkin_Params
{
	struct FString                                     Skin;                                                     // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTCheatManager.ImpartHats
struct UUTCheatManager_ImpartHats_Params
{
	struct FString                                     Hat;                                                      // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTCheatManager.ImpartEyewear
struct UUTCheatManager_ImpartEyewear_Params
{
	struct FString                                     Eyewear;                                                  // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTCheatManager.HL
struct UUTCheatManager_HL_Params
{
};

// Function UnrealTournament.UTCheatManager.Gibs
struct UUTCheatManager_Gibs_Params
{
};

// Function UnrealTournament.UTCheatManager.EstimateWaitTimes
struct UUTCheatManager_EstimateWaitTimes_Params
{
};

// Function UnrealTournament.UTCheatManager.DebugAchievement
struct UUTCheatManager_DebugAchievement_Params
{
	struct FString                                     AchievementName;                                          // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTCheatManager.CheatShowRankedReconnectDialog
struct UUTCheatManager_CheatShowRankedReconnectDialog_Params
{
};

// Function UnrealTournament.UTCheatManager.AnnM
struct UUTCheatManager_AnnM_Params
{
	float                                              F;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCheatManager.Ann
struct UUTCheatManager_Ann_Params
{
	int                                                Switch;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTCheatManager.AllAmmo
struct UUTCheatManager_AllAmmo_Params
{
};

// Function UnrealTournament.UTDroppedArmor.OnArmorAmountReceived
struct AUTDroppedArmor_OnArmorAmountReceived_Params
{
};

// Function UnrealTournament.UTDroppedLife.OnReceivedOwnerPlayerState
struct AUTDroppedLife_OnReceivedOwnerPlayerState_Params
{
};

// Function UnrealTournament.UTDroppedLife.OnOverlapBegin
struct AUTDroppedLife_OnOverlapBegin_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function UnrealTournament.UTDroppedLife.Init
struct AUTDroppedLife_Init_Params
{
	class AUTPlayerState*                              inOwnerPlayerState;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AUTPlayerState*                              inKillerPlayerState;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTFlagReturnTrail.SetTeam
struct AUTFlagReturnTrail_SetTeam_Params
{
	class AUTTeamInfo*                                 Team;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTFlagReturnTrail.SetPoints
struct AUTFlagReturnTrail_SetPoints_Params
{
	TArray<struct FVector>                             Points;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function UnrealTournament.UTFlagReturnTrail.EndTrail
struct AUTFlagReturnTrail_EndTrail_Params
{
};

// Function UnrealTournament.UTBlitzDeliveryPoint.OnDefenseEffectChanged
struct AUTBlitzDeliveryPoint_OnDefenseEffectChanged_Params
{
};

// Function UnrealTournament.UTRallyPoint.OnReplicatedCountdown
struct AUTRallyPoint_OnReplicatedCountdown_Params
{
};

// Function UnrealTournament.UTRallyPoint.OnRallyTimeRemaining
struct AUTRallyPoint_OnRallyTimeRemaining_Params
{
};

// Function UnrealTournament.UTRallyPoint.OnRallyStateChanged
struct AUTRallyPoint_OnRallyStateChanged_Params
{
};

// Function UnrealTournament.UTRallyPoint.OnRallyChargingChanged
struct AUTRallyPoint_OnRallyChargingChanged_Params
{
};

// Function UnrealTournament.UTRallyPoint.OnOverlapEnd
struct AUTRallyPoint_OnOverlapEnd_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTRallyPoint.OnOverlapBegin
struct AUTRallyPoint_OnOverlapBegin_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function UnrealTournament.UTRallyPoint.OnAvailableEffectChanged
struct AUTRallyPoint_OnAvailableEffectChanged_Params
{
};

// Function UnrealTournament.UTRallyPoint.AmbientSoundUpdated
struct AUTRallyPoint_AmbientSoundUpdated_Params
{
};

// Function UnrealTournament.UTRallyPoint.AmbientSoundPitchUpdated
struct AUTRallyPoint_AmbientSoundPitchUpdated_Params
{
};

// Function UnrealTournament.UTFlagRunGameState.IsTeamOnOffense
struct AUTFlagRunGameState_IsTeamOnOffense_Params
{
	int                                                TeamNumber;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTFlagRunGameState.IsTeamOnDefenseNextRound
struct AUTFlagRunGameState_IsTeamOnDefenseNextRound_Params
{
	int                                                TeamNumber;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTFlagRunGameState.IsTeamOnDefense
struct AUTFlagRunGameState_IsTeamOnDefense_Params
{
	int                                                TeamNumber;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTFlagRunGameState.IsSelectedBoostValid
struct AUTFlagRunGameState_IsSelectedBoostValid_Params
{
	class AUTPlayerState*                              PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTFlagRunGameState.GetSelectableBoostByIndex
struct AUTFlagRunGameState_GetSelectableBoostByIndex_Params
{
	class AUTPlayerState*                              PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTFlagRunGameState.GetPowerupSelectWidgetPath
struct AUTFlagRunGameState_GetPowerupSelectWidgetPath_Params
{
	int                                                TeamNumber;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function UnrealTournament.UTFlagRunGameState.GetOffenseFlag
struct AUTFlagRunGameState_GetOffenseFlag_Params
{
	class AUTBlitzFlag*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTFlagRunGameState.GetFlagHolder
struct AUTFlagRunGameState_GetFlagHolder_Params
{
	class AUTPlayerState*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTFlagRunGameState.AddScoringPlay
struct AUTFlagRunGameState_AddScoringPlay_Params
{
	struct FCTFScoringPlay                             NewScoringPlay;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UnrealTournament.UTFlagRunPvEGameState.OnRep_EndingElapsedTime
struct AUTFlagRunPvEGameState_OnRep_EndingElapsedTime_Params
{
};

// Function UnrealTournament.UTShowdownGameState.OnRep_XRayVision
struct AUTShowdownGameState_OnRep_XRayVision_Params
{
};

// Function UnrealTournament.UTShowdownGameState.OnRep_StartSpawnSelect
struct AUTShowdownGameState_OnRep_StartSpawnSelect_Params
{
};

// Function UnrealTournament.UTTextStyle.GetShadowOffset
struct UUTTextStyle_GetShadowOffset_Params
{
	TEnumAsByte<EUTWidgetStyleSize>                    Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   OutShadowOffset;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTTextStyle.GetShadowColor
struct UUTTextStyle_GetShadowColor_Params
{
	TEnumAsByte<EUTTextColor>                          ColorType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                OutColor;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTTextStyle.GetMargin
struct UUTTextStyle_GetMargin_Params
{
	TEnumAsByte<EUTWidgetStyleSize>                    Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     OutMargin;                                                // (Parm, OutParm)
};

// Function UnrealTournament.UTTextStyle.GetLineHeightPercentage
struct UUTTextStyle_GetLineHeightPercentage_Params
{
	TEnumAsByte<EUTWidgetStyleSize>                    Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTTextStyle.GetFont
struct UUTTextStyle_GetFont_Params
{
	TEnumAsByte<EUTWidgetStyleSize>                    Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateFontInfo                              OutFont;                                                  // (Parm, OutParm)
};

// Function UnrealTournament.UTTextStyle.GetColor
struct UUTTextStyle_GetColor_Params
{
	TEnumAsByte<EUTTextColor>                          ColorType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                OutColor;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTTextBlock.SetWrapTextWidth
struct UUTTextBlock_SetWrapTextWidth_Params
{
	int                                                InWrapTextAt;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTTextBlock.SetUseDropShadow
struct UUTTextBlock_SetUseDropShadow_Params
{
	bool                                               bShouldUseDropShadow;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTTextBlock.SetStyle
struct UUTTextBlock_SetStyle_Params
{
	class UClass*                                      InStyle;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTTextBlock.SetSize
struct UUTTextBlock_SetSize_Params
{
	TEnumAsByte<EUTWidgetStyleSize>                    Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTTextBlock.SetProperties
struct UUTTextBlock_SetProperties_Params
{
	class UClass*                                      InStyle;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EUTWidgetStyleSize>                    Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EUTTextColor>                          Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InWrapTextAt;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldUseDropShadow;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTTextBlock.SetColorType
struct UUTTextBlock_SetColorType_Params
{
	TEnumAsByte<EUTTextColor>                          Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTRichTextHelperLibrary.GetCurrencyIconTagSpecific
struct UUTRichTextHelperLibrary_GetCurrencyIconTagSpecific_Params
{
	EUTCurrencyType                                    Currency;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EUTWidgetStyleSize>                    Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function UnrealTournament.UTRichTextHelperLibrary.GetCurrencyIconTag
struct UUTRichTextHelperLibrary_GetCurrencyIconTag_Params
{
	EUTCurrencyType                                    Currency;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function UnrealTournament.UTRichTextHelperLibrary.FormatAsKeywordSpecific
struct UUTRichTextHelperLibrary_FormatAsKeywordSpecific_Params
{
	struct FString                                     Text;                                                     // (Parm, ZeroConstructor)
	TEnumAsByte<EUTWidgetStyleSize>                    Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EUTTextColor>                          Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function UnrealTournament.UTRichTextHelperLibrary.FormatAsKeyword
struct UUTRichTextHelperLibrary_FormatAsKeyword_Params
{
	struct FString                                     Text;                                                     // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function UnrealTournament.UTRichTextHelperLibrary.FormatAsCurrency
struct UUTRichTextHelperLibrary_FormatAsCurrency_Params
{
	EUTCurrencyType                                    Currency;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       DisplayValue;                                             // (Parm)
	TEnumAsByte<EUTWidgetStyleSize>                    Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UnrealTournament.UTRichTextHelperLibrary.ConvertToKeywordSpecific
struct UUTRichTextHelperLibrary_ConvertToKeywordSpecific_Params
{
	struct FText                                       Text;                                                     // (Parm, OutParm, ReferenceParm)
	TEnumAsByte<EUTWidgetStyleSize>                    Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EUTTextColor>                          Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTRichTextHelperLibrary.ConvertToKeyword
struct UUTRichTextHelperLibrary_ConvertToKeyword_Params
{
	struct FText                                       Text;                                                     // (Parm, OutParm, ReferenceParm)
};

// Function UnrealTournament.UTGhostComponent.GhostStopRecording
struct UUTGhostComponent_GhostStopRecording_Params
{
};

// Function UnrealTournament.UTGhostComponent.GhostStopPlaying
struct UUTGhostComponent_GhostStopPlaying_Params
{
};

// Function UnrealTournament.UTGhostComponent.GhostStartRecording
struct UUTGhostComponent_GhostStartRecording_Params
{
};

// Function UnrealTournament.UTGhostComponent.GhostStartPlaying
struct UUTGhostComponent_GhostStartPlaying_Params
{
};

// Function UnrealTournament.UTGhostComponent.GhostMoveToStart
struct UUTGhostComponent_GhostMoveToStart_Params
{
};

// Function UnrealTournament.UTGhostComponent.CreateAndAddEvent
struct UUTGhostComponent_CreateAndAddEvent_Params
{
	class UClass*                                      EventClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UUTGhostEvent*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTGhostEvent.ApplyEvent
struct UUTGhostEvent_ApplyEvent_Params
{
	class AUTCharacter*                                UTC;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTGhostEvent_Move.ApplyEvent
struct UUTGhostEvent_Move_ApplyEvent_Params
{
	class AUTCharacter*                                UTC;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTGhostEvent_MovementEvent.ApplyEvent
struct UUTGhostEvent_MovementEvent_ApplyEvent_Params
{
	class AUTCharacter*                                UTC;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTGhostEvent_Input.ApplyEvent
struct UUTGhostEvent_Input_ApplyEvent_Params
{
	class AUTCharacter*                                UTC;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTGhostEvent_Weapon.ApplyEvent
struct UUTGhostEvent_Weapon_ApplyEvent_Params
{
	class AUTCharacter*                                UTC;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTGhostEvent_JumpBoots.ApplyEvent
struct UUTGhostEvent_JumpBoots_ApplyEvent_Params
{
	class AUTCharacter*                                UTC;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTGhostFlag.OnSetCarriedObject
struct AUTGhostFlag_OnSetCarriedObject_Params
{
};

// Function UnrealTournament.UTScoreboard.HandleContextCommand
struct UUTScoreboard_HandleContextCommand_Params
{
	unsigned char                                      ContextId;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AUTPlayerState*                              InSelectedPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTScoreboard.GetContextMenuItems
struct UUTScoreboard_GetContextMenuItems_Params
{
	TArray<struct FScoreboardContextMenuItem>          MenuItems;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function UnrealTournament.UTHUD.UpdateMinimapTexture
struct AUTHUD_UpdateMinimapTexture_Params
{
	class UCanvas*                                     C;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Width;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTHUD.ToggleScoreboard
struct AUTHUD_ToggleScoreboard_Params
{
	bool                                               bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTHUD.ShowUTMenu
struct AUTHUD_ShowUTMenu_Params
{
};

// Function UnrealTournament.UTHUD.ResolveFlag
struct AUTHUD_ResolveFlag_Params
{
	class AUTPlayerState*                              PS;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTextureUVs                                 UV;                                                       // (Parm, OutParm)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTHUD.IsUMGWidgetActive
struct AUTHUD_IsUMGWidgetActive_Params
{
	class UUTUMGHudWidget*                             TestWidget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTHUD.GetUseWeaponColors
struct AUTHUD_GetUseWeaponColors_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTHUD.GetQuickStatsType
struct AUTHUD_GetQuickStatsType_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTHUD.GetQuickStatsHidden
struct AUTHUD_GetQuickStatsHidden_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTHUD.GetQuickStatsForegroundAlpha
struct AUTHUD_GetQuickStatsForegroundAlpha_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTHUD.GetQuickStatsDistance
struct AUTHUD_GetQuickStatsDistance_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTHUD.GetQuickStatScaleOverride
struct AUTHUD_GetQuickStatScaleOverride_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTHUD.GetQuickStatsBackgroundAlpha
struct AUTHUD_GetQuickStatsBackgroundAlpha_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTHUD.GetQuickInfoHidden
struct AUTHUD_GetQuickInfoHidden_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTHUD.GetPlayKillSoundMsg
struct AUTHUD_GetPlayKillSoundMsg_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTHUD.GetInputMode
struct AUTHUD_GetInputMode_Params
{
	TEnumAsByte<EInputMode>                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTHUD.GetHUDWidgetWeaponBarScaleOverride
struct AUTHUD_GetHUDWidgetWeaponBarScaleOverride_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTHUD.GetHUDWidgetWeaponbarInactiveOpacity
struct AUTHUD_GetHUDWidgetWeaponbarInactiveOpacity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTHUD.GetHUDWidgetWeaponBarInactiveIconOpacity
struct AUTHUD_GetHUDWidgetWeaponBarInactiveIconOpacity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTHUD.GetHUDWidgetWeaponBarEmptyOpacity
struct AUTHUD_GetHUDWidgetWeaponBarEmptyOpacity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTHUD.GetHUDWidgetSlateOpacity
struct AUTHUD_GetHUDWidgetSlateOpacity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTHUD.GetHUDWidgetScaleOverride
struct AUTHUD_GetHUDWidgetScaleOverride_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTHUD.GetHUDWidgetOpacity
struct AUTHUD_GetHUDWidgetOpacity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTHUD.GetHUDWidgetBorderOpacity
struct AUTHUD_GetHUDWidgetBorderOpacity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTHUD.GetHUDMessageScaleOverride
struct AUTHUD_GetHUDMessageScaleOverride_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTHUD.GetHealthArcShown
struct AUTHUD_GetHealthArcShown_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTHUD.GetHealthArcRadius
struct AUTHUD_GetHealthArcRadius_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTHUD.GetDrawHUDKillIconMsg
struct AUTHUD_GetDrawHUDKillIconMsg_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTHUD.GetDrawChatKillMsg
struct AUTHUD_GetDrawChatKillMsg_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTHUD.GetDrawCenteredKillMsg
struct AUTHUD_GetDrawCenteredKillMsg_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTHUD.GetCrosshairForWeapon
struct AUTHUD_GetCrosshairForWeapon_Params
{
	struct FName                                       WeaponCustomizationTag;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FWeaponCustomizationInfo                    outWeaponCustomizationInfo;                               // (Parm, OutParm)
	class UUTCrosshair*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTHUD.DrawMinimapIcon
struct AUTHUD_DrawMinimapIcon_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Pos;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   DrawSize;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   UV;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   UVL;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                DrawColor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDropShadow;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTHUD.DrawMinimap
struct AUTHUD_DrawMinimap_Params
{
	struct FColor                                      DrawColor;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              MapSize;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   DrawPos;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTHUD.DeactivateUMGHudWidget
struct AUTHUD_DeactivateUMGHudWidget_Params
{
	struct FString                                     UMGHudWidgetClassName;                                    // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTHUD.DeactivateActualUMGHudWidget
struct AUTHUD_DeactivateActualUMGHudWidget_Params
{
	class UUTUMGHudWidget*                             WidgetToDeactivate;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTHUD.ClientRestart
struct AUTHUD_ClientRestart_Params
{
};

// Function UnrealTournament.UTHUD.ClearAllUMGWidgets
struct AUTHUD_ClearAllUMGWidgets_Params
{
};

// Function UnrealTournament.UTHUD.BeforeFirstFrame
struct AUTHUD_BeforeFirstFrame_Params
{
};

// Function UnrealTournament.UTHUD.AddHudWidget
struct AUTHUD_AddHudWidget_Params
{
	class UClass*                                      NewWidgetClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UUTHUDWidget*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTHUD.ActivateUMGHudWidget
struct AUTHUD_ActivateUMGHudWidget_Params
{
	struct FString                                     UMGHudWidgetClassName;                                    // (Parm, ZeroConstructor)
	bool                                               bUnique;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UUTUMGHudWidget*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTHUD.ActivateActualUMGHudWidget
struct AUTHUD_ActivateActualUMGHudWidget_Params
{
	class UUTUMGHudWidget*                             WidgetToActivate;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTHUDWidget_GameClock.GetPlayerScoreText
struct UUTHUDWidget_GameClock_GetPlayerScoreText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UnrealTournament.UTHUDWidget_GameClock.GetPlayerRankThText
struct UUTHUDWidget_GameClock_GetPlayerRankThText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UnrealTournament.UTHUDWidget_GameClock.GetPlayerRankText
struct UUTHUDWidget_GameClock_GetPlayerRankText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UnrealTournament.UTHUDWidget_GameClock.GetNumPlayersText
struct UUTHUDWidget_GameClock_GetNumPlayersText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UnrealTournament.UTHUDWidget_GameClock.GetClockText
struct UUTHUDWidget_GameClock_GetClockText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UnrealTournament.UTHUDWidget_TeamGameClock.GetRedScoreText
struct UUTHUDWidget_TeamGameClock_GetRedScoreText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UnrealTournament.UTHUDWidget_TeamGameClock.GetClockText
struct UUTHUDWidget_TeamGameClock_GetClockText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UnrealTournament.UTHUDWidget_TeamGameClock.GetBlueScoreText
struct UUTHUDWidget_TeamGameClock_GetBlueScoreText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UnrealTournament.UTHUDWidget_WeaponInfo.GetAmmoAmount
struct UUTHUDWidget_WeaponInfo_GetAmmoAmount_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UnrealTournament.UTHUDWidgetMessage.AgeMessages
struct UUTHUDWidgetMessage_AgeMessages_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTLineUpHelper.SpawnPlayerWeapon
struct AUTLineUpHelper_SpawnPlayerWeapon_Params
{
	class AUTCharacter*                                UTChar;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTLineUpHelper.SpawnLineUp
struct AUTLineUpHelper_SpawnLineUp_Params
{
};

// Function UnrealTournament.UTLineUpHelper.SpawnCharactersToSlots
struct AUTLineUpHelper_SpawnCharactersToSlots_Params
{
};

// Function UnrealTournament.UTLineUpHelper.SpawnCharacterFromLineUpSlot
struct AUTLineUpHelper_SpawnCharacterFromLineUpSlot_Params
{
	struct FLineUpSlot                                 Slot;                                                     // (Parm, OutParm)
	class AUTCharacter*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTLineUpHelper.SetupCharactersForLineUp
struct AUTLineUpHelper_SetupCharactersForLineUp_Params
{
};

// Function UnrealTournament.UTLineUpHelper.SetLineUpWeapons
struct AUTLineUpHelper_SetLineUpWeapons_Params
{
};

// Function UnrealTournament.UTLineUpHelper.ServerOnPlayerChange
struct AUTLineUpHelper_ServerOnPlayerChange_Params
{
	class AUTPlayerState*                              PlayerChanged;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTLineUpHelper.PlayIntroClientAnimationOnCharacter
struct AUTLineUpHelper_PlayIntroClientAnimationOnCharacter_Params
{
	class AUTCharacter*                                UTChar;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldPlayFullIntro;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTLineUpHelper.PerformLineUp
struct AUTLineUpHelper_PerformLineUp_Params
{
};

// Function UnrealTournament.UTLineUpHelper.OnRep_CheckForClientIntro
struct AUTLineUpHelper_OnRep_CheckForClientIntro_Params
{
};

// Function UnrealTournament.UTLineUpHelper.NotifyClientsOfLineUp
struct AUTLineUpHelper_NotifyClientsOfLineUp_Params
{
};

// Function UnrealTournament.UTLineUpHelper.MoveCharacterToLineUpSlot
struct AUTLineUpHelper_MoveCharacterToLineUpSlot_Params
{
	class AUTCharacter*                                UTChar;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLineUpSlot                                 Slot;                                                     // (Parm, OutParm)
};

// Function UnrealTournament.UTLineUpHelper.IsLineupDataReplicated
struct AUTLineUpHelper_IsLineupDataReplicated_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTLineUpHelper.IsActive
struct AUTLineUpHelper_IsActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTLineUpHelper.IntroSwapMeshComponentLocations
struct AUTLineUpHelper_IntroSwapMeshComponentLocations_Params
{
	class AUTCharacter*                                UTChar1;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AUTCharacter*                                UTChar2;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTLineUpHelper.IntroCheckForPawnReplicationToComplete
struct AUTLineUpHelper_IntroCheckForPawnReplicationToComplete_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTLineUpHelper.InitializeLineUp
struct AUTLineUpHelper_InitializeLineUp_Params
{
	ELineUpTypes                                       LineUpType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTLineUpHelper.HandleIntroClientAnimations
struct AUTLineUpHelper_HandleIntroClientAnimations_Params
{
};

// Function UnrealTournament.UTLineUpHelper.FlagFixUp
struct AUTLineUpHelper_FlagFixUp_Params
{
};

// Function UnrealTournament.UTLineUpHelper.DestroySpawnedClones
struct AUTLineUpHelper_DestroySpawnedClones_Params
{
};

// Function UnrealTournament.UTLineUpHelper.ClientOnPlayerChange
struct AUTLineUpHelper_ClientOnPlayerChange_Params
{
	class AUTPlayerState*                              PlayerChanged;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTLineUpHelper.CleanUp
struct AUTLineUpHelper_CleanUp_Params
{
};

// Function UnrealTournament.UTLineUpHelper.CanInitiateGroupTaunt
struct AUTLineUpHelper_CanInitiateGroupTaunt_Params
{
	class AUTPlayerState*                              PlayerToCheck;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTLineUpHelper.CalculateAllLineUpData
struct AUTLineUpHelper_CalculateAllLineUpData_Params
{
};

// Function UnrealTournament.UTLineUpHelper.BuildMapWeaponList
struct AUTLineUpHelper_BuildMapWeaponList_Params
{
};

// Function UnrealTournament.UTLineUpHelper.ApplyCharacterAnimsForLineUp
struct AUTLineUpHelper_ApplyCharacterAnimsForLineUp_Params
{
	class AUTCharacter*                                UTChar;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTImpactEffect.SpawnEffect
struct AUTImpactEffect_SpawnEffect_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  InTransform;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UPrimitiveComponent*                         HitComp;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      SpawnedBy;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESoundReplicationType>                 SoundReplication;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FImpactEffectNamedParameters                EffectParams;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTImpactEffect.ShouldCreateComponent
struct AUTImpactEffect_ShouldCreateComponent_Params
{
	class USceneComponent*                             TestComp;                                                 // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       CompTemplateName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  BaseTransform;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UPrimitiveComponent*                         HitComp;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      SpawnedBy;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTImpactEffect.ComponentCreated
struct AUTImpactEffect_ComponentCreated_Params
{
	class USceneComponent*                             NewComp;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         HitComp;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      SpawnedBy;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FImpactEffectNamedParameters                EffectParams;                                             // (Parm)
};

// Function UnrealTournament.UTImpactEffect.CallSpawnEffect
struct AUTImpactEffect_CallSpawnEffect_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Effect;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  InTransform;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UPrimitiveComponent*                         HitComp;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      SpawnedBy;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESoundReplicationType>                 SoundReplication;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FImpactEffectNamedParameters                EffectParams;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UnrealTournament.UTInputVisualizer.ShowSpecificKey
struct UUTInputVisualizer_ShowSpecificKey_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function UnrealTournament.UTInputVisualizer.ShowInputAxis
struct UUTInputVisualizer_ShowInputAxis_Params
{
	struct FName                                       InAxisName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTInputVisualizer.ShowInputAction
struct UUTInputVisualizer_ShowInputAction_Params
{
	struct FName                                       InActionName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTInputVisualizer.SetSize
struct UUTInputVisualizer_SetSize_Params
{
	TEnumAsByte<EUTWidgetStyleSize>                    InSize;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTInputVisualizer.HandleControlsChanged
struct UUTInputVisualizer_HandleControlsChanged_Params
{
};

// Function UnrealTournament.UTIntermissionBeginInterface.IntermissionBegin
struct UUTIntermissionBeginInterface_IntermissionBegin_Params
{
};

// Function UnrealTournament.UTWeaponAttachment.StopFiringEffects
struct AUTWeaponAttachment_StopFiringEffects_Params
{
	bool                                               bIgnoreCurrentMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTWeaponAttachment.PlayFiringEffects
struct AUTWeaponAttachment_PlayFiringEffects_Params
{
};

// Function UnrealTournament.UTWeaponAttachment.PlayBulletWhip
struct AUTWeaponAttachment_PlayBulletWhip_Params
{
};

// Function UnrealTournament.UTWeaponAttachment.OverrideFiringEffects
struct AUTWeaponAttachment_OverrideFiringEffects_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTWeaponAttachment.NotifyTeamChanged
struct AUTWeaponAttachment_NotifyTeamChanged_Params
{
};

// Function UnrealTournament.UTWeaponAttachment.ModifyFireEffect
struct AUTWeaponAttachment_ModifyFireEffect_Params
{
	class UParticleSystemComponent*                    Effect;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UnrealTournament.UTWeaponAttachment.HolsterToOwner
struct AUTWeaponAttachment_HolsterToOwner_Params
{
};

// Function UnrealTournament.UTWeaponAttachment.FiringExtraUpdated
struct AUTWeaponAttachment_FiringExtraUpdated_Params
{
};

// Function UnrealTournament.UTWeaponAttachment.DetachFromOwner
struct AUTWeaponAttachment_DetachFromOwner_Params
{
};

// Function UnrealTournament.UTWeaponAttachment.CancelImpactEffect
struct AUTWeaponAttachment_CancelImpactEffect_Params
{
	struct FHitResult                                  ImpactHit;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTWeaponAttachment.AttachToOwner
struct AUTWeaponAttachment_AttachToOwner_Params
{
};

// Function UnrealTournament.UTSlowBurst.OnActorSpawned
struct AUTSlowBurst_OnActorSpawned_Params
{
	class AActor*                                      NewActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTTimedPowerup.TimeExpired
struct AUTTimedPowerup_TimeExpired_Params
{
};

// Function UnrealTournament.UTTimedPowerup.PlayFadingSound
struct AUTTimedPowerup_PlayFadingSound_Params
{
};

// Function UnrealTournament.UTTimedPowerup.ClientSetTimeRemaining
struct AUTTimedPowerup_ClientSetTimeRemaining_Params
{
	float                                              InTimeRemaining;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTProj_Rocket.OnRep_TargetActor
struct AUTProj_Rocket_OnRep_TargetActor_Params
{
};

// Function UnrealTournament.UTRocketSalvoBoost.FireSalvo
struct AUTRocketSalvoBoost_FireSalvo_Params
{
};

// Function UnrealTournament.UTDualWeapon.BecomeDual
struct AUTDualWeapon_BecomeDual_Params
{
};

// Function UnrealTournament.UTWeap_Enforcer.ModifySpread
struct AUTWeap_Enforcer_ModifySpread_Params
{
};

// Function UnrealTournament.UTWeap_BioRifle.OnStartCharging
struct AUTWeap_BioRifle_OnStartCharging_Params
{
};

// Function UnrealTournament.UTWeap_BioRifle.OnChargeShot
struct AUTWeap_BioRifle_OnChargeShot_Params
{
};

// Function UnrealTournament.UTWeap_FlakCannon.GetFireRotationForMultiShot
struct AUTWeap_FlakCannon_GetFireRotationForMultiShot_Params
{
	int                                                MultiShotIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     FireLocation;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    FireRotation;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTWeap_FlakCannon.GetFireLocationForMultiShot
struct AUTWeap_FlakCannon_GetFireLocationForMultiShot_Params
{
	int                                                MultiShotIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     FireLocation;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    FireRotation;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTProj_Grenade_Sticky.PlayIdleEffects
struct AUTProj_Grenade_Sticky_PlayIdleEffects_Params
{
};

// Function UnrealTournament.UTProj_Grenade_Sticky.PlayDamagedDetonationEffects
struct AUTProj_Grenade_Sticky_PlayDamagedDetonationEffects_Params
{
};

// Function UnrealTournament.UTProj_Grenade_Sticky.GetInstigatorTeamNum
struct AUTProj_Grenade_Sticky_GetInstigatorTeamNum_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTProj_Grenade_Sticky.ExplodeDueToTimeout
struct AUTProj_Grenade_Sticky_ExplodeDueToTimeout_Params
{
};

// Function UnrealTournament.UTProj_Grenade_Sticky.ArmGrenade
struct AUTProj_Grenade_Sticky_ArmGrenade_Params
{
};

// Function UnrealTournament.UTWeap_GrenadeLauncher.ShowDetonatorUI
struct AUTWeap_GrenadeLauncher_ShowDetonatorUI_Params
{
};

// Function UnrealTournament.UTWeap_GrenadeLauncher.PlayDetonationEffects
struct AUTWeap_GrenadeLauncher_PlayDetonationEffects_Params
{
};

// Function UnrealTournament.UTWeap_GrenadeLauncher.OnRep_HasStickyGrenades
struct AUTWeap_GrenadeLauncher_OnRep_HasStickyGrenades_Params
{
};

// Function UnrealTournament.UTWeap_GrenadeLauncher.HideDetonatorUI
struct AUTWeap_GrenadeLauncher_HideDetonatorUI_Params
{
};

// Function UnrealTournament.UTWeap_ImpactHammer.ClientAutoHit
struct AUTWeap_ImpactHammer_ClientAutoHit_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTWeap_ImpactHammer.AllowAutoHit
struct AUTWeap_ImpactHammer_AllowAutoHit_Params
{
	class AActor*                                      PotentialTarget;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTWeap_LinkGun.UpdateScreenTexture
struct AUTWeap_LinkGun_UpdateScreenTexture_Params
{
	class UCanvas*                                     C;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Width;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTWeap_LinkGun.ServerSetPulseTarget
struct AUTWeap_LinkGun_ServerSetPulseTarget_Params
{
	class AActor*                                      InTarget;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTWeap_LinkGun.CheckBotPulseFire
struct AUTWeap_LinkGun_CheckBotPulseFire_Params
{
};

// Function UnrealTournament.UTRemoteRedeemer.TryToDrive
struct AUTRemoteRedeemer_TryToDrive_Params
{
	class APawn*                                       NewDriver;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTRemoteRedeemer.ServerDriverLeave
struct AUTRemoteRedeemer_ServerDriverLeave_Params
{
};

// Function UnrealTournament.UTRemoteRedeemer.ServerBlowUp
struct AUTRemoteRedeemer_ServerBlowUp_Params
{
};

// Function UnrealTournament.UTRemoteRedeemer.RedeemerRestarted
struct AUTRemoteRedeemer_RedeemerRestarted_Params
{
	class AController*                                 NewController;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTRemoteRedeemer.OnStop
struct AUTRemoteRedeemer_OnStop_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function UnrealTournament.UTRemoteRedeemer.OnOverlapBegin
struct AUTRemoteRedeemer_OnOverlapBegin_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function UnrealTournament.UTRemoteRedeemer.GetTeamNum
struct AUTRemoteRedeemer_GetTeamNum_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTRemoteRedeemer.ForceReplication
struct AUTRemoteRedeemer_ForceReplication_Params
{
};

// Function UnrealTournament.UTRemoteRedeemer.ExplodeTimed
struct AUTRemoteRedeemer_ExplodeTimed_Params
{
};

// Function UnrealTournament.UTRemoteRedeemer.ExplodeStage3
struct AUTRemoteRedeemer_ExplodeStage3_Params
{
};

// Function UnrealTournament.UTRemoteRedeemer.ExplodeStage2
struct AUTRemoteRedeemer_ExplodeStage2_Params
{
};

// Function UnrealTournament.UTRemoteRedeemer.ExplodeStage1
struct AUTRemoteRedeemer_ExplodeStage1_Params
{
};

// Function UnrealTournament.UTRemoteRedeemer.DriverLeave
struct AUTRemoteRedeemer_DriverLeave_Params
{
	bool                                               bForceLeave;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTRemoteRedeemer.DriverEnter
struct AUTRemoteRedeemer_DriverEnter_Params
{
	class APawn*                                       NewDriver;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTRemoteRedeemer.BlowUp
struct AUTRemoteRedeemer_BlowUp_Params
{
	struct FVector                                     HitNormal;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTWeap_RocketLauncher.OnRep_PendingLockedTarget
struct AUTWeap_RocketLauncher_OnRep_PendingLockedTarget_Params
{
};

// Function UnrealTournament.UTWeap_RocketLauncher.OnRep_LockedTarget
struct AUTWeap_RocketLauncher_OnRep_LockedTarget_Params
{
};

// Function UnrealTournament.UTWeap_RocketLauncher.FireRocketProjectile
struct AUTWeap_RocketLauncher_FireRocketProjectile_Params
{
	class AUTProjectile*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTWeap_RocketLauncher.ClientAbortLoad
struct AUTWeap_RocketLauncher_ClientAbortLoad_Params
{
};

// Function UnrealTournament.UTWeap_RocketLauncher.ClearLoadedRockets
struct AUTWeap_RocketLauncher_ClearLoadedRockets_Params
{
};

// Function UnrealTournament.UTWeap_ShockRifle.UpdateScreenTexture
struct AUTWeap_ShockRifle_UpdateScreenTexture_Params
{
	class UCanvas*                                     C;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Width;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTWeap_ShockRifle.Play1PComboEffects
struct AUTWeap_ShockRifle_Play1PComboEffects_Params
{
};

// Function UnrealTournament.UTWeap_LightningRifle.OnRepCharging
struct AUTWeap_LightningRifle_OnRepCharging_Params
{
};

// Function UnrealTournament.UTWeaponRedirector.UpdateCollisionShape
struct AUTWeaponRedirector_UpdateCollisionShape_Params
{
};

// Function UnrealTournament.UTWeaponRedirector.InitFor
struct AUTWeaponRedirector_InitFor_Params
{
	class APawn*                                       InInstigator;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRepCollisionShape                          InCollision;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class UPrimitiveComponent*                         InBase;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FTransform                                  InDest;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function UnrealTournament.UTWeap_Translocator.OnRep_TransDisk
struct AUTWeap_Translocator_OnRep_TransDisk_Params
{
};

// Function UnrealTournament.UTJumpPad.TriggerBeginOverlap
struct AUTJumpPad_TriggerBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function UnrealTournament.UTJumpPad.Launch
struct AUTJumpPad_Launch_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTJumpPad.IsEnabled
struct AUTJumpPad_IsEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTJumpPad.CanLaunch
struct AUTJumpPad_CanLaunch_Params
{
	class AActor*                                      TestActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTJumpPad.CalculateJumpVelocity
struct AUTJumpPad_CalculateJumpVelocity_Params
{
	class AActor*                                      JumpActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTLoadGuard.SetLoadingText
struct UUTLoadGuard_SetLoadingText_Params
{
	struct FText                                       InLoadingText;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UnrealTournament.UTLoadGuard.SetIsLoading
struct UUTLoadGuard_SetIsLoading_Params
{
	bool                                               bInIsLoading;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction UnrealTournament.UTLoadGuard.OnAssetLoaded__DelegateSignature
struct UUTLoadGuard_OnAssetLoaded__DelegateSignature_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTLoadGuard.IsLoading
struct UUTLoadGuard_IsLoading_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTLoadGuard.BP_GuardAndLoadAsset
struct UUTLoadGuard_BP_GuardAndLoadAsset_Params
{
	TAssetPtr<class UObject>                           InLazyAsset;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FScriptDelegate                             OnAssetLoaded;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function UnrealTournament.UTLazyImage.SetBrushFromLazyTexture
struct UUTLazyImage_SetBrushFromLazyTexture_Params
{
	TAssetPtr<class UTexture2D>                        LazyTexture;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bMatchSize;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTLazyImage.SetBrushFromLazyMaterial
struct UUTLazyImage_SetBrushFromLazyMaterial_Params
{
	TAssetPtr<class UMaterialInterface>                LazyMaterial;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UnrealTournament.UTLazyImage.SetBrushFromLazyDisplayAsset
struct UUTLazyImage_SetBrushFromLazyDisplayAsset_Params
{
	TAssetPtr<class UObject>                           LazyObject;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bMatchTextureSize;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTLazyImage.SetBrushFromItemDefinition
struct UUTLazyImage_SetBrushFromItemDefinition_Params
{
	class UUtMcpDefinition*                            ItemDefinition;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bMatchTextureSize;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTLazyImage.IsLoading
struct UUTLazyImage_IsLoading_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTLazyImage.ForwardLoadingStateChanged
struct UUTLazyImage_ForwardLoadingStateChanged_Params
{
	bool                                               bIsLoading;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTMovementBaseInterface.RemoveBasedCharacter
struct UUTMovementBaseInterface_RemoveBasedCharacter_Params
{
	class AUTCharacter*                                BasedCharacter;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTMovementBaseInterface.AddBasedCharacter
struct UUTMovementBaseInterface_AddBasedCharacter_Params
{
	class AUTCharacter*                                BasedCharacter;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTLift.UpdateCurrentlyBasedCharacters
struct AUTLift_UpdateCurrentlyBasedCharacters_Params
{
	class AUTCharacter*                                BasedCharacter;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTLift.SetEncroachComponent
struct AUTLift_SetEncroachComponent_Params
{
	class UPrimitiveComponent*                         NewEncroachComponent;                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UnrealTournament.UTLift.OnOverlapBegin
struct AUTLift_OnOverlapBegin_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function UnrealTournament.UTLift.OnEncroachActor
struct AUTLift_OnEncroachActor_Params
{
	class AActor*                                      EncroachedActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTLift.MoveLiftTo
struct AUTLift_MoveLiftTo_Params
{
	struct FVector                                     NewLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    NewRotation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTLift.HasBasedCharacters
struct AUTLift_HasBasedCharacters_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTLift.GetStops
struct AUTLift_GetStops_Params
{
	TArray<struct FVector>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function UnrealTournament.UTLiftMeshComponent.SetIndirectLightingCacheQuality
struct UUTLiftMeshComponent_SetIndirectLightingCacheQuality_Params
{
	TEnumAsByte<EIndirectLightingCacheQuality>         Quality;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTListItem.ToggleExpansion
struct UUTListItem_ToggleExpansion_Params
{
};

// Function UnrealTournament.UTListItem.SetSelected
struct UUTListItem_SetSelected_Params
{
	bool                                               bSelected;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTListItem.SetIndexInList
struct UUTListItem_SetIndexInList_Params
{
	int                                                InIndexInList;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTListItem.RegisterOnClicked
struct UUTListItem_RegisterOnClicked_Params
{
	struct FScriptDelegate                             Callback;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function UnrealTournament.UTListItem.Private_OnExpanderArrowShiftClicked
struct UUTListItem_Private_OnExpanderArrowShiftClicked_Params
{
};

// Function UnrealTournament.UTListItem.IsItemExpanded
struct UUTListItem_IsItemExpanded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTListItem.GetSelectionMode
struct UUTListItem_GetSelectionMode_Params
{
	TEnumAsByte<ESelectionMode>                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTListItem.GetIndentLevel
struct UUTListItem_GetIndentLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTListItem.DoesItemHaveChildren
struct UUTListItem_DoesItemHaveChildren_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTObjectListItem.SetData
struct UUTObjectListItem_SetData_Params
{
	class UObject*                                     InData;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTObjectListItem.Reset
struct UUTObjectListItem_Reset_Params
{
};

// Function UnrealTournament.UTObjectListItem.GetData
struct UUTObjectListItem_GetData_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTListView.SetSelectedItem
struct UUTListView_SetSelectedItem_Params
{
	class UObject*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWaitIfPendingRefresh;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTListView.SetSelectedIndex
struct UUTListView_SetSelectedIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTListView.SetItemSelection
struct UUTListView_SetItemSelection_Params
{
	class UObject*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSelected;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTListView.SetItemHeight
struct UUTListView_SetItemHeight_Params
{
	float                                              NewHeight;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTListView.SetDesiredItemPadding
struct UUTListView_SetDesiredItemPadding_Params
{
	struct FMargin                                     DesiredPadding;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UnrealTournament.UTListView.SetDataProvider
struct UUTListView_SetDataProvider_Params
{
	TArray<class UObject*>                             InDataProvider;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function UnrealTournament.UTListView.ScrollIntoView
struct UUTListView_ScrollIntoView_Params
{
	class UObject*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTListView.IsRefreshPending
struct UUTListView_IsRefreshPending_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTListView.IsItemVisible
struct UUTListView_IsItemVisible_Params
{
	class UObject*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTListView.GetSelectedItems
struct UUTListView_GetSelectedItems_Params
{
	TArray<class UObject*>                             Items;                                                    // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTListView.GetSelectedItem
struct UUTListView_GetSelectedItem_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTListView.GetNumItemsSelected
struct UUTListView_GetNumItemsSelected_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTListView.GetItemAt
struct UUTListView_GetItemAt_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTListView.GetIndexForItem
struct UUTListView_GetIndexForItem_Params
{
	class UObject*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTListView.DynamicHandleItemClicked
struct UUTListView_DynamicHandleItemClicked_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTListView.ClearSelection
struct UUTListView_ClearSelection_Params
{
};

// Function UnrealTournament.UTListView.Clear
struct UUTListView_Clear_Params
{
};

// Function UnrealTournament.UTListView.AddItem
struct UUTListView_AddItem_Params
{
	class UObject*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTTileView.SetItemWidth
struct UUTTileView_SetItemWidth_Params
{
	float                                              NewWidth;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTLobbyMatchInfo.ServerInvitePlayer
struct AUTLobbyMatchInfo_ServerInvitePlayer_Params
{
	class AUTLobbyPlayerState*                         Who;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInvite;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTLobbyMatchInfo.OnRep_Update
struct AUTLobbyMatchInfo_OnRep_Update_Params
{
};

// Function UnrealTournament.UTLobbyMatchInfo.OnRep_RedirectsChanged
struct AUTLobbyMatchInfo_OnRep_RedirectsChanged_Params
{
};

// Function UnrealTournament.UTLobbyMatchInfo.OnRep_MatchUpdate
struct AUTLobbyMatchInfo_OnRep_MatchUpdate_Params
{
};

// Function UnrealTournament.UTLobbyMatchInfo.OnRep_InitialMap
struct AUTLobbyMatchInfo_OnRep_InitialMap_Params
{
};

// Function UnrealTournament.UTLobbyMatchInfo.OnRep_CurrentRuleset
struct AUTLobbyMatchInfo_OnRep_CurrentRuleset_Params
{
};

// Function UnrealTournament.UTProfileSettings.GetWeaponSkinClassname
struct UUTProfileSettings_GetWeaponSkinClassname_Params
{
	class AUTWeapon*                                   Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function UnrealTournament.UTProfileSettings.GetWeaponGroup
struct UUTProfileSettings_GetWeaponGroup_Params
{
	class AUTWeapon*                                   WeaponClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                WeaponGroup;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                GroupPriority;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTProfileSettings.GetWeaponCustomizationForWeapon
struct UUTProfileSettings_GetWeaponCustomizationForWeapon_Params
{
	class AUTWeapon*                                   Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FWeaponCustomizationInfo                    outWeaponCustomizationInfo;                               // (Parm, OutParm)
};

// Function UnrealTournament.UTProfileSettings.GetWeaponCustomization
struct UUTProfileSettings_GetWeaponCustomization_Params
{
	struct FName                                       WeaponCustomizationTag;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FWeaponCustomizationInfo                    outWeaponCustomizationInfo;                               // (Parm, OutParm)
};

// Function UnrealTournament.UTProfileSettings.GetPlayerName
struct UUTProfileSettings_GetPlayerName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function UnrealTournament.UTProfileSettings.ApplyInputSettings
struct UUTProfileSettings_ApplyInputSettings_Params
{
	class UUTLocalPlayer*                              ProfilePlayer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTLocalPlayer.UpdateCheck
struct UUTLocalPlayer_UpdateCheck_Params
{
};

// Function UnrealTournament.UTLocalPlayer.ShowRankedReconnectDialog
struct UUTLocalPlayer_ShowRankedReconnectDialog_Params
{
	struct FString                                     UniqueId;                                                 // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTLocalPlayer.SetPartyType
struct UUTLocalPlayer_SetPartyType_Params
{
	EPartyType                                         InPartyType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLeaderFriendsOnly;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLeaderInvitesOnly;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTLocalPlayer.SendFriendRequest
struct UUTLocalPlayer_SendFriendRequest_Params
{
	class AUTPlayerState*                              DesiredPlayerState;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTLocalPlayer.SaveProgression
struct UUTLocalPlayer_SaveProgression_Params
{
};

// Function UnrealTournament.UTLocalPlayer.RestartTutorial
struct UUTLocalPlayer_RestartTutorial_Params
{
};

// Function UnrealTournament.UTLocalPlayer.PrevTutorial
struct UUTLocalPlayer_PrevTutorial_Params
{
};

// Function UnrealTournament.UTLocalPlayer.OpenUMGWidget
struct UUTLocalPlayer_OpenUMGWidget_Params
{
	struct FString                                     UMGClass;                                                 // (Parm, ZeroConstructor)
	class UUTUMGWidget*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTLocalPlayer.NextTutorial
struct UUTLocalPlayer_NextTutorial_Params
{
};

// Function UnrealTournament.UTLocalPlayer.LaunchTutorial
struct UUTLocalPlayer_LaunchTutorial_Params
{
	struct FName                                       TutorialName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTLocalPlayer.LaunchPendingQuickmatch
struct UUTLocalPlayer_LaunchPendingQuickmatch_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTLocalPlayer.IsTutorialMaskCompleted
struct UUTLocalPlayer_IsTutorialMaskCompleted_Params
{
	int                                                TutorialMask;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTLocalPlayer.IsTutorialCompleted
struct UUTLocalPlayer_IsTutorialCompleted_Params
{
	struct FName                                       TutorialName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTLocalPlayer.IsSystemMenuOpen
struct UUTLocalPlayer_IsSystemMenuOpen_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTLocalPlayer.IsKillcamReplayActive
struct UUTLocalPlayer_IsKillcamReplayActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTLocalPlayer.GetTutorialSectionText
struct UUTLocalPlayer_GetTutorialSectionText_Params
{
	TEnumAsByte<ETutorialSections>                     Section;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UnrealTournament.UTLocalPlayer.GetTutorialMask
struct UUTLocalPlayer_GetTutorialMask_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTLocalPlayer.GetStarsFromXP
struct UUTLocalPlayer_GetStarsFromXP_Params
{
	int                                                XPValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                StarLevel;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTLocalPlayer.GetProfileSettings
struct UUTLocalPlayer_GetProfileSettings_Params
{
	class UUTProfileSettings*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTLocalPlayer.GetPrevTutorialName
struct UUTLocalPlayer_GetPrevTutorialName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UnrealTournament.UTLocalPlayer.GetNextTutorialName
struct UUTLocalPlayer_GetNextTutorialName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UnrealTournament.UTLocalPlayer.GetBestTutorialTime
struct UUTLocalPlayer_GetBestTutorialTime_Params
{
	struct FName                                       TutorialName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UnrealTournament.UTLocalPlayer.FindUMGWidget
struct UUTLocalPlayer_FindUMGWidget_Params
{
	struct FName                                       SearchTag;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UUTUMGWidget*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTLocalPlayer.CloseUMGWidgetByTag
struct UUTLocalPlayer_CloseUMGWidgetByTag_Params
{
	struct FName                                       Tag;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTLocalPlayer.CloseUMGWidget
struct UUTLocalPlayer_CloseUMGWidget_Params
{
	class UUTUMGWidget*                                WidgetToClose;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTLocalPlayer.CloseSavingWidget
struct UUTLocalPlayer_CloseSavingWidget_Params
{
};

// Function UnrealTournament.UTLocalPlayer.CheckForNewUpdate
struct UUTLocalPlayer_CheckForNewUpdate_Params
{
};

// Function UnrealTournament.UTLocalPlayer.ChangeStatsViewerTarget
struct UUTLocalPlayer_ChangeStatsViewerTarget_Params
{
	struct FString                                     InStatsID;                                                // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTLocalPlayer.bIsQuickmatchDialogOpen
struct UUTLocalPlayer_bIsQuickmatchDialogOpen_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTLocalPlayer.AreMenusOpen
struct UUTLocalPlayer_AreMenusOpen_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTPartyBeaconClient.ServerEmptyServerReservationRequest
struct AUTPartyBeaconClient_ServerEmptyServerReservationRequest_Params
{
	struct FString                                     InSessionId;                                              // (Parm, ZeroConstructor)
	struct FEmptyServerReservation                     ReservationData;                                          // (ConstParm, Parm)
	struct FPartyReservation                           Reservation;                                              // (Parm)
};

// Function UnrealTournament.UTPartyBeaconClient.ClientAllowedToProceedFromReservationTimeout
struct AUTPartyBeaconClient_ClientAllowedToProceedFromReservationTimeout_Params
{
};

// Function UnrealTournament.UTPartyBeaconClient.ClientAllowedToProceedFromReservation
struct AUTPartyBeaconClient_ClientAllowedToProceedFromReservation_Params
{
};

// Function UnrealTournament.UTMutator.TriggerBoost
struct AUTMutator_TriggerBoost_Params
{
	class AUTPlayerState*                              Who;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTMutator.ScoreObject
struct AUTMutator_ScoreObject_Params
{
	class AUTCarriedObject*                            GameObject;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AUTCharacter*                                HolderPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AUTPlayerState*                              Holder;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTMutator.ScoreKill
struct AUTMutator_ScoreKill_Params
{
	class AController*                                 Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTMutator.ScoreDamage
struct AUTMutator_ScoreDamage_Params
{
	int                                                DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AUTPlayerState*                              Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AUTPlayerState*                              Attacker;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTMutator.PreventDeath
struct AUTMutator_PreventDeath_Params
{
	class APawn*                                       KilledPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTMutator.PostPlayerInit
struct AUTMutator_PostPlayerInit_Params
{
	class AController*                                 C;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTMutator.ParseOption
struct AUTMutator_ParseOption_Params
{
	struct FString                                     Options;                                                  // (Parm, ZeroConstructor)
	struct FString                                     InKey;                                                    // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function UnrealTournament.UTMutator.OverridePickupQuery
struct AUTMutator_OverridePickupQuery_Params
{
	class APawn*                                       Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ItemClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Pickup;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowPickup;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTMutator.NotifyMatchStateChange
struct AUTMutator_NotifyMatchStateChange_Params
{
	struct FName                                       NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTMutator.NotifyLogout
struct AUTMutator_NotifyLogout_Params
{
	class AController*                                 C;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTMutator.Mutate
struct AUTMutator_Mutate_Params
{
	struct FString                                     MutateString;                                             // (Parm, ZeroConstructor)
	class APlayerController*                           Sender;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTMutator.ModifyPlayer
struct AUTMutator_ModifyPlayer_Params
{
	class APawn*                                       Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsNewSpawn;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTMutator.ModifyLogin
struct AUTMutator_ModifyLogin_Params
{
	struct FString                                     Portal;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     Options;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function UnrealTournament.UTMutator.ModifyInventory
struct AUTMutator_ModifyInventory_Params
{
	class AUTInventory*                                Inv;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AUTCharacter*                                NewOwner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTMutator.ModifyDamage
struct AUTMutator_ModifyDamage_Params
{
	int                                                Damage;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Momentum;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class APawn*                                       Injured;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTMutator.Init
struct AUTMutator_Init_Params
{
	struct FString                                     Options;                                                  // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTMutator.HasOption
struct AUTMutator_HasOption_Params
{
	struct FString                                     Options;                                                  // (Parm, ZeroConstructor)
	struct FString                                     InKey;                                                    // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTMutator.GetIntOption
struct AUTMutator_GetIntOption_Params
{
	struct FString                                     Options;                                                  // (Parm, ZeroConstructor)
	struct FString                                     ParseString;                                              // (Parm, ZeroConstructor)
	int                                                CurrentValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTMutator.GetGameURLOptions
struct AUTMutator_GetGameURLOptions_Params
{
	TArray<struct FString>                             OptionsList;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function UnrealTournament.UTMutator.CheckRelevance
struct AUTMutator_CheckRelevance_Params
{
	class AActor*                                      Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTMutator.AlwaysKeep
struct AUTMutator_AlwaysKeep_Params
{
	class AActor*                                      Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPreventModify;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTMutator.AllowTextMessage
struct AUTMutator_AllowTextMessage_Params
{
	struct FString                                     Msg;                                                      // (Parm, OutParm, ZeroConstructor)
	bool                                               bIsTeamMessage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AUTBasePlayerController*                     Sender;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTMutator.AddDefaultInventory
struct AUTMutator_AddDefaultInventory_Params
{
	class UClass*                                      InventoryClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTPainVolume.AddOverlayMaterials
struct AUTPainVolume_AddOverlayMaterials_Params
{
	class AUTGameState*                                GS;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTWorldSettings.LevelActorDestroyed
struct AUTWorldSettings_LevelActorDestroyed_Params
{
	class AActor*                                      TheActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTWorldSettings.GetWorldSettings
struct AUTWorldSettings_GetWorldSettings_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AUTWorldSettings*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTWorldSettings.AddTimedMaterialParameter
struct AUTWorldSettings_AddTimedMaterialParameter_Params
{
	class UMaterialInstanceDynamic*                    InMI;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       InParamName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UCurveBase*                                  InCurve;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInClearOnComplete;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTWorldSettings.AddTimedLightParameter
struct AUTWorldSettings_AddTimedLightParameter_Params
{
	class ULightComponent*                             InLight;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<ETimedLightParameter>                  InParam;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UCurveBase*                                  InCurve;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTWeaponLocker.WeaponListUpdated
struct AUTWeaponLocker_WeaponListUpdated_Params
{
};

// Function UnrealTournament.UTWeaponLocker.SetWeaponList
struct AUTWeaponLocker_SetWeaponList_Params
{
	TArray<struct FWeaponLockerItem>                   InList;                                                   // (Parm, ZeroConstructor)
};

// Function UnrealTournament.UTPickupToken.Revoke
struct AUTPickupToken_Revoke_Params
{
};

// Function UnrealTournament.UTPickupToken.PickedUp
struct AUTPickupToken_PickedUp_Params
{
};

// Function UnrealTournament.UTPickupToken.HasBeenPickedUpBefore
struct AUTPickupToken_HasBeenPickedUpBefore_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTPowerupSelectorUserWidget.SetPlayerPowerup
struct UUTPowerupSelectorUserWidget_SetPlayerPowerup_Params
{
};

// Function UnrealTournament.UTPowerupSelectorUserWidget.GetBuyMenuKeyName
struct UUTPowerupSelectorUserWidget_GetBuyMenuKeyName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function UnrealTournament.UTProj_BioGrenade.StartFuseTimed
struct AUTProj_BioGrenade_StartFuseTimed_Params
{
};

// Function UnrealTournament.UTProj_BioGrenade.StartFuse
struct AUTProj_BioGrenade_StartFuse_Params
{
};

// Function UnrealTournament.UTProj_BioGrenade.ProximityOverlapBegin
struct AUTProj_BioGrenade_ProximityOverlapBegin_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function UnrealTournament.UTProj_BioGrenade.PlayFuseBeep
struct AUTProj_BioGrenade_PlayFuseBeep_Params
{
};

// Function UnrealTournament.UTProj_BioGrenade.FuseExpired
struct AUTProj_BioGrenade_FuseExpired_Params
{
};

// Function UnrealTournament.UTProj_BioShot.SetGlobStrength
struct AUTProj_BioShot_SetGlobStrength_Params
{
	float                                              NewStrength;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTProj_BioShot.OnSetGlobStrength
struct AUTProj_BioShot_OnSetGlobStrength_Params
{
};

// Function UnrealTournament.UTProj_BioShot.OnRep_GlobStrength
struct AUTProj_BioShot_OnRep_GlobStrength_Params
{
};

// Function UnrealTournament.UTProj_BioShot.OnRep_BioLanded
struct AUTProj_BioShot_OnRep_BioLanded_Params
{
};

// Function UnrealTournament.UTProj_BioShot.OnLanded
struct AUTProj_BioShot_OnLanded_Params
{
};

// Function UnrealTournament.UTProj_BioShot.BioStabilityTimer
struct AUTProj_BioShot_BioStabilityTimer_Params
{
};

// Function UnrealTournament.UTProj_BioLauncherShot.SpawnWebEffects
struct AUTProj_BioLauncherShot_SpawnWebEffects_Params
{
};

// Function UnrealTournament.UTProj_BioLauncherShot.PlayWebHitFlash
struct AUTProj_BioLauncherShot_PlayWebHitFlash_Params
{
};

// Function UnrealTournament.UTProj_BioLauncherShot.OnWebOverlapBegin
struct AUTProj_BioLauncherShot_OnWebOverlapBegin_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function UnrealTournament.UTProj_RocketGrenade.OnRep_Seed
struct AUTProj_RocketGrenade_OnRep_Seed_Params
{
};

// Function UnrealTournament.UTProj_ShockBall.OnRep_ComboExplosion
struct AUTProj_ShockBall_OnRep_ComboExplosion_Params
{
};

// Function UnrealTournament.UTProj_ShockBall.OnComboExplode
struct AUTProj_ShockBall_OnComboExplode_Params
{
};

// Function UnrealTournament.UTProj_TransDisk.OnRep_TransState
struct AUTProj_TransDisk_OnRep_TransState_Params
{
};

// Function UnrealTournament.UTProj_TransDisk.OnLanded
struct AUTProj_TransDisk_OnLanded_Params
{
};

// Function UnrealTournament.UTProj_TransDisk.OnDisrupted
struct AUTProj_TransDisk_OnDisrupted_Params
{
};

// Function UnrealTournament.UTProj_TransDisk.OnBlockingHit
struct AUTProj_TransDisk_OnBlockingHit_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function UnrealTournament.UTProj_TransDisk.ModifyTakeDamage
struct AUTProj_TransDisk_ModifyTakeDamage_Params
{
	float                                              DamageAmount;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class AController*                                 EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTRconAdminInfo.ServerNoLongerNeeded
struct AUTRconAdminInfo_ServerNoLongerNeeded_Params
{
};

// Function UnrealTournament.UTTeamPathBlocker.IsAllowedThrough
struct AUTTeamPathBlocker_IsAllowedThrough_Params
{
	unsigned char                                      TeamNum;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTTeamPathBlocker.GetBlockingComponent
struct AUTTeamPathBlocker_GetBlockingComponent_Params
{
	class USceneComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UnrealTournament.UTRepulsorBubble.ShouldInteractWithActor
struct AUTRepulsorBubble_ShouldInteractWithActor_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTRepulsorBubble.ProcessHitProjectile
struct AUTRepulsorBubble_ProcessHitProjectile_Params
{
	class AUTProjectile*                               OtherProj;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function UnrealTournament.UTRepulsorBubble.ProcessHitPlayer
struct AUTRepulsorBubble_ProcessHitPlayer_Params
{
	class AUTCharacter*                                OtherPlayer;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function UnrealTournament.UTRepulsorBubble.ProcessHit
struct AUTRepulsorBubble_ProcessHit_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function UnrealTournament.UTRepulsorBubble.OnViewTargetChange
struct AUTRepulsorBubble_OnViewTargetChange_Params
{
	class AUTPlayerController*                         NewViewTarget;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTRepulsorBubble.OnRep_Health
struct AUTRepulsorBubble_OnRep_Health_Params
{
};

// Function UnrealTournament.UTRepulsorBubble.OnProjectileHit
struct AUTRepulsorBubble_OnProjectileHit_Params
{
};

// Function UnrealTournament.UTRepulsorBubble.OnOverlapBegin
struct AUTRepulsorBubble_OnOverlapBegin_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function UnrealTournament.UTRepulsorBubble.OnHitScanBlocked
struct AUTRepulsorBubble_OnHitScanBlocked_Params
{
};

// Function UnrealTournament.UTRepulsorBubble.OnCharacterBounce
struct AUTRepulsorBubble_OnCharacterBounce_Params
{
};

// Function UnrealTournament.UTRepulsorBubble.BeginPlay
struct AUTRepulsorBubble_BeginPlay_Params
{
};

// Function UnrealTournament.UTTooltipBase.Show
struct UUTTooltipBase_Show_Params
{
};

// Function UnrealTournament.UTTooltipBase.OnShow
struct UUTTooltipBase_OnShow_Params
{
};

// Function UnrealTournament.UTTooltipBase.OnHide
struct UUTTooltipBase_OnHide_Params
{
};

// Function UnrealTournament.UTTooltipBase.Hide
struct UUTTooltipBase_Hide_Params
{
};

// Function UnrealTournament.UTRichText.SetText
struct UUTRichText_SetText_Params
{
	struct FText                                       InText;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UnrealTournament.UTRichText.SetSize
struct UUTRichText_SetSize_Params
{
	TEnumAsByte<EUTWidgetStyleSize>                    Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTRichText.SetInlineIconDisplayMode
struct UUTRichText_SetInlineIconDisplayMode_Params
{
	ERichTextInlineIconDisplayMode                     DisplayMode;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTRichText.SetColorType
struct UUTRichText_SetColorType_Params
{
	TEnumAsByte<EUTTextColor>                          Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTRichText.Refresh
struct UUTRichText_Refresh_Params
{
};

// Function UnrealTournament.UTRichText.GetStyleSize
struct UUTRichText_GetStyleSize_Params
{
	TEnumAsByte<EUTWidgetStyleSize>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTRichText.GetInlineIconColorType
struct UUTRichText_GetInlineIconColorType_Params
{
	TEnumAsByte<EUTTextColor>                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTRichText.GetColorType
struct UUTRichText_GetColorType_Params
{
	TEnumAsByte<EUTTextColor>                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTSupplyChest.GiveHealth
struct AUTSupplyChest_GiveHealth_Params
{
	class AUTCharacter*                                Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTSupplyChest.GiveAmmo
struct AUTSupplyChest_GiveAmmo_Params
{
	class AUTCharacter*                                Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTTeamDeco.ScriptGetTeamNum
struct AUTTeamDeco_ScriptGetTeamNum_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTTeleporter.PostTeleport
struct AUTTeleporter_PostTeleport_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTTeleporter.OnOverlapBegin
struct AUTTeleporter_OnOverlapBegin_Params
{
	class AActor*                                      OverlappingActor;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTTeleporter.CanTeleport
struct AUTTeleporter_CanTeleport_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTUMGHudWidget_LocalMessage.InitializeMessage
struct UUTUMGHudWidget_LocalMessage_InitializeMessage_Params
{
	class UClass*                                      inMessageClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                inSwitch;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerState*                                inRelatedPlayerState_2;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerState*                                inRelatedPlayerState_3;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     inOptionalObject;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTUMGWidget_Toast.IsTopmostToast
struct UUTUMGWidget_Toast_IsTopmostToast_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTActivatableWidget.OnHandleBackAction
struct UUTActivatableWidget_OnHandleBackAction_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTActivatableWidget.OnDeactivated
struct UUTActivatableWidget_OnDeactivated_Params
{
};

// Function UnrealTournament.UTActivatableWidget.OnActivated
struct UUTActivatableWidget_OnActivated_Params
{
};

// Function UnrealTournament.UTActivatableWidget.DeactivateWidget
struct UUTActivatableWidget_DeactivateWidget_Params
{
};

// Function UnrealTournament.UTActivatableWidget.ActivateWidget
struct UUTActivatableWidget_ActivateWidget_Params
{
};

// Function UnrealTournament.UTChestOpeningScreen.SetScreenState
struct UUTChestOpeningScreen_SetScreenState_Params
{
	EUTSpinState                                       NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTChestOpeningScreen.SetItemRarities
struct UUTChestOpeningScreen_SetItemRarities_Params
{
	EUTItemRarity                                      ItemRarity;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTChestOpeningScreen.OnNextItemShown
struct UUTChestOpeningScreen_OnNextItemShown_Params
{
	EUTItemRarity                                      ItemRarity;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	EUTSpinState                                       SpinState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsFinal;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTChestOpeningScreen.NativeReset
struct UUTChestOpeningScreen_NativeReset_Params
{
};

// Function UnrealTournament.UTChestOpeningScreen.FireSpinner
struct UUTChestOpeningScreen_FireSpinner_Params
{
	class UUtMcpCardPackItem*                          PackToOpen;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMcpItemIdAndQuantity>               RewardArray;                                              // (ConstParm, Parm, ZeroConstructor)
};

// Function UnrealTournament.UTChestOpeningScreen.FinalSpinnerStop
struct UUTChestOpeningScreen_FinalSpinnerStop_Params
{
	EUTItemRarity                                      ItemRarity;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTChestOpeningScreen.BP_FullReset
struct UUTChestOpeningScreen_BP_FullReset_Params
{
};

// Function UnrealTournament.UTChestOpeningScreen.BeginSpinnerSlowdown
struct UUTChestOpeningScreen_BeginSpinnerSlowdown_Params
{
};

// Function UnrealTournament.UTChestOpeningScreen.BeginOpen
struct UUTChestOpeningScreen_BeginOpen_Params
{
};

// Function UnrealTournament.UTDefaultButton.UpdateText
struct UUTDefaultButton_UpdateText_Params
{
	struct FText                                       InText;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UnrealTournament.UTDefaultButton.UpdateSpecificImageSize
struct UUTDefaultButton_UpdateSpecificImageSize_Params
{
	TEnumAsByte<EUTWidgetStyleSize>                    Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InSize;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTDefaultButton.UpdateIconFromTexture
struct UUTDefaultButton_UpdateIconFromTexture_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTDefaultButton.UpdateIcon
struct UUTDefaultButton_UpdateIcon_Params
{
	struct FSlateBrush                                 Brush;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bRetainBrushImageSize;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTDefaultButton.SetNormalContentColor
struct UUTDefaultButton_SetNormalContentColor_Params
{
	TEnumAsByte<EUTTextColor>                          InNormalTextColor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTDefaultButton.SetHoveredContentColor
struct UUTDefaultButton_SetHoveredContentColor_Params
{
	TEnumAsByte<EUTTextColor>                          InHoveredTextColor;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTDefaultButton.RefreshLayout
struct UUTDefaultButton_RefreshLayout_Params
{
};

// Function UnrealTournament.UTGlowingRarityText.SetRarityBP
struct UUTGlowingRarityText_SetRarityBP_Params
{
	EUTItemRarity                                      ItemRarity;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHideGlowingText;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTBasicTooltipWidget.UpdateTooltipText
struct UUTBasicTooltipWidget_UpdateTooltipText_Params
{
	struct FText                                       NewTooltipText;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UnrealTournament.UTBasicTooltipWidget.UpdateTitleText
struct UUTBasicTooltipWidget_UpdateTitleText_Params
{
	struct FText                                       NewTitleText;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UnrealTournament.UTWaterVolume.GetCurrentFor
struct AUTWaterVolume_GetCurrentFor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealTournament.UTWeapAttachment_BioRifle.SetChargingEffect
struct AUTWeapAttachment_BioRifle_SetChargingEffect_Params
{
	bool                                               bNowActive;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTAfterImageEffect.StartEffect
struct AUTAfterImageEffect_StartEffect_Params
{
};

// Function UnrealTournament.UTAfterImageEffect.SetMeshProperties
struct AUTAfterImageEffect_SetMeshProperties_Params
{
	class USkeletalMeshComponent*                      DestComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UnrealTournament.UTAfterImageEffect.OnRep_CharMesh
struct AUTAfterImageEffect_OnRep_CharMesh_Params
{
};

// Function UnrealTournament.UTWeaponReplacementUserWidget.GetUniqueDisplayName
struct UUTWeaponReplacementUserWidget_GetUniqueDisplayName_Params
{
	class AUTWeapon*                                   Weapon;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PathName;                                                 // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function UnrealTournament.UTWeaponReplacementUserWidget.DisplayNameToPathName
struct UUTWeaponReplacementUserWidget_DisplayNameToPathName_Params
{
	struct FString                                     DisplayName;                                              // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function UnrealTournament.UTWeaponReplacementUserWidget.BuildWeaponList
struct UUTWeaponReplacementUserWidget_BuildWeaponList_Params
{
};

// Function UnrealTournament.UTWeaponStateFiring_LoopingFire.TransitionBeginToLoopExecute
struct UUTWeaponStateFiring_LoopingFire_TransitionBeginToLoopExecute_Params
{
	class UAnimMontage*                                AnimMontage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWasAnimInterupted;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealTournament.UTWeaponStateFiring_LoopingFire.TransitionBeginToLoopBind
struct UUTWeaponStateFiring_LoopingFire_TransitionBeginToLoopBind_Params
{
};

// Function UnrealTournament.UTWeaponStateFiringSpinUp.CooldownFinished
struct UUTWeaponStateFiringSpinUp_CooldownFinished_Params
{
};

// Function UnrealTournament.UTWeaponStateZooming.ToggleZoomInSound
struct UUTWeaponStateZooming_ToggleZoomInSound_Params
{
	bool                                               bNowOn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

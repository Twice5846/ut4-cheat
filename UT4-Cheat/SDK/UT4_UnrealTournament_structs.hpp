#pragma once

// Unreal Tournament 4 (Pre Alpha) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum UnrealTournament.EUTTextColor
enum class EUTTextColor : uint8_t
{
	EUTTextColor__Light            = 0,
	EUTTextColor__Dark             = 1,
	EUTTextColor__Emphasis         = 2,
	EUTTextColor__Black            = 3,
	EUTTextColor__Custom           = 4,
	EUTTextColor__MAX              = 5,
	EUTTextColor__EUTTextColor_MAX = 6
};


// Enum UnrealTournament.EUTWidgetStyleSize
enum class EUTWidgetStyleSize : uint8_t
{
	EUTWidgetStyleSize__Small      = 0,
	EUTWidgetStyleSize__Medium     = 1,
	EUTWidgetStyleSize__Large      = 2,
	EUTWidgetStyleSize__MAX        = 3,
	EUTWidgetStyleSize__EUTWidgetStyleSize_MAX = 4
};


// Enum UnrealTournament.EMatchmakingCompleteResult
enum class EMatchmakingCompleteResult : uint8_t
{
	EMatchmakingCompleteResult__NotStarted = 0,
	EMatchmakingCompleteResult__Cancelled = 1,
	EMatchmakingCompleteResult__NoResults = 2,
	EMatchmakingCompleteResult__Failure = 3,
	EMatchmakingCompleteResult__CreateFailure = 4,
	EMatchmakingCompleteResult__Success = 5,
	EMatchmakingCompleteResult__EMatchmakingCompleteResult_MAX = 6
};


// Enum UnrealTournament.EMatchmakingState
enum class EMatchmakingState : uint8_t
{
	EMatchmakingState__NotMatchmaking = 0,
	EMatchmakingState__CancelingMatchmaking = 1,
	EMatchmakingState__ReleasingLock = 2,
	EMatchmakingState__AcquiringLock = 3,
	EMatchmakingState__LockAcquistionFailure = 4,
	EMatchmakingState__FindingEmptyServer = 5,
	EMatchmakingState__FindingExistingSession = 6,
	EMatchmakingState__TestingEmptyServers = 7,
	EMatchmakingState__TestingExistingSessions = 8,
	EMatchmakingState__JoiningExistingSession = 9,
	EMatchmakingState__NoMatchesAvailable = 10,
	EMatchmakingState__CleaningUpExisting = 11,
	EMatchmakingState__HandlingFailure = 12,
	EMatchmakingState__JoinSuccess = 13,
	EMatchmakingState__EMatchmakingState_MAX = 14
};


// Enum UnrealTournament.EStatMod
enum class EStatMod : uint8_t
{
	EStatMod__Delta                = 0,
	EStatMod__Set                  = 1,
	EStatMod__Maximum              = 2,
	EStatMod__EStatMod_MAX         = 3
};


// Enum UnrealTournament.EBotMonitoringStatus
enum class EBotMonitoringStatus : uint8_t
{
	BMS_Monitoring                 = 0,
	BMS_PrepareActivation          = 1,
	BMS_Activate                   = 2,
	BMS_Abort                      = 3,
	BMS_MAX                        = 4
};


// Enum UnrealTournament.EAIEnemyUpdateType
enum class EAIEnemyUpdateType : uint8_t
{
	EUT_Seen                       = 0,
	EUT_HeardExact                 = 1,
	EUT_HeardApprox                = 2,
	EUT_TookDamage                 = 3,
	EUT_DealtDamage                = 4,
	EUT_HealthUpdate               = 5,
	EUT_MAX                        = 6
};


// Enum UnrealTournament.EComFilter
enum class EComFilter : uint8_t
{
	EComFilter__AllComs            = 0,
	EComFilter__TeamComs           = 1,
	EComFilter__FriendComs         = 2,
	EComFilter__NoComs             = 3,
	EComFilter__MAX                = 4,
	EComFilter__EComFilter_MAX     = 5
};


// Enum UnrealTournament.ECreateInstanceTypes
enum class ECreateInstanceTypes : uint8_t
{
	ECreateInstanceTypes__Lobby    = 0,
	ECreateInstanceTypes__Standalone = 1,
	ECreateInstanceTypes__LAN      = 2,
	ECreateInstanceTypes__MAX      = 3,
	ECreateInstanceTypes__ECreateInstanceTypes_MAX = 4
};


// Enum UnrealTournament.ETutorialSections
enum class ETutorialSections : uint8_t
{
	ETutorialSections__SkillMoves  = 0,
	ETutorialSections__Gameplay    = 1,
	ETutorialSections__Hardcore    = 2,
	ETutorialSections__MAX         = 3,
	ETutorialSections__ETutorialSections_MAX = 4
};


// Enum UnrealTournament.ELoginPhase
enum class ELoginPhase : uint8_t
{
	ELoginPhase__NotLoggedIn       = 0,
	ELoginPhase__Offline           = 1,
	ELoginPhase__InDialog          = 2,
	ELoginPhase__Auth              = 3,
	ELoginPhase__GettingProfile    = 4,
	ELoginPhase__GettingProgression = 5,
	ELoginPhase__GettingMMR        = 6,
	ELoginPhase__GettingTitleUpdate = 7,
	ELoginPhase__LoggedIn          = 8,
	ELoginPhase__MAX               = 9,
	ELoginPhase__ELoginPhase_MAX   = 10
};


// Enum UnrealTournament.EControlCategory
enum class EControlCategory : uint8_t
{
	EControlCategory__Movement     = 0,
	EControlCategory__Combat       = 1,
	EControlCategory__Weapon       = 2,
	EControlCategory__Taunts       = 3,
	EControlCategory__UI           = 4,
	EControlCategory__Misc         = 5,
	EControlCategory__MAX          = 6,
	EControlCategory__EControlCategory_MAX = 7
};


// Enum UnrealTournament.EWeaponHand
enum class EWeaponHand : uint8_t
{
	EWeaponHand__HAND_Right        = 0,
	EWeaponHand__HAND_Left         = 1,
	EWeaponHand__HAND_Center       = 2,
	EWeaponHand__HAND_Hidden       = 3,
	EWeaponHand__HAND_MAX          = 4
};


// Enum UnrealTournament.EUIWindowState
enum class EUIWindowState : uint8_t
{
	EUIWindowState__Initializing   = 0,
	EUIWindowState__Opening        = 1,
	EUIWindowState__Active         = 2,
	EUIWindowState__Closing        = 3,
	EUIWindowState__Closed         = 4,
	EUIWindowState__MAX            = 5,
	EUIWindowState__EUIWindowState_MAX = 6
};


// Enum UnrealTournament.EChallengeFilterType
enum class EChallengeFilterType : uint8_t
{
	EChallengeFilterType__Active   = 0,
	EChallengeFilterType__Completed = 1,
	EChallengeFilterType__Expired  = 2,
	EChallengeFilterType__All      = 3,
	EChallengeFilterType__DailyUnlocked = 4,
	EChallengeFilterType__DailyLocked = 5,
	EChallengeFilterType__MAX      = 6,
	EChallengeFilterType__EChallengeFilterType_MAX = 7
};


// Enum UnrealTournament.EInstanceJoinResult
enum class EInstanceJoinResult : uint8_t
{
	EInstanceJoinResult__MatchNoLongerExists = 0,
	EInstanceJoinResult__MatchLocked = 1,
	EInstanceJoinResult__MatchRankFail = 2,
	EInstanceJoinResult__JoinViaLobby = 3,
	EInstanceJoinResult__JoinDirectly = 4,
	EInstanceJoinResult__MAX       = 5,
	EInstanceJoinResult__EInstanceJoinResult_MAX = 6
};


// Enum UnrealTournament.EUnrealRoles
enum class EUnrealRoles : uint8_t
{
	EUnrealRoles__Gamer            = 0,
	EUnrealRoles__Developer        = 1,
	EUnrealRoles__Concepter        = 2,
	EUnrealRoles__Contributor      = 3,
	EUnrealRoles__Marketplace      = 4,
	EUnrealRoles__Prototyper       = 5,
	EUnrealRoles__Ambassador       = 6,
	EUnrealRoles__MAX              = 7,
	EUnrealRoles__EUnrealRoles_MAX = 8
};


// Enum UnrealTournament.EGameDataType
enum class EGameDataType : uint8_t
{
	EGameDataType__GameMode        = 0,
	EGameDataType__Map             = 1,
	EGameDataType__Mutator         = 2,
	EGameDataType__MAX             = 3,
	EGameDataType__EGameDataType_MAX = 4
};


// Enum UnrealTournament.ERedirectStatus
enum class ERedirectStatus : uint8_t
{
	ERedirectStatus__Pending       = 0,
	ERedirectStatus__InProgress    = 1,
	ERedirectStatus__Completed     = 2,
	ERedirectStatus__Failed        = 3,
	ERedirectStatus__Cancelled     = 4,
	ERedirectStatus__MAX           = 5,
	ERedirectStatus__ERedirectStatus_MAX = 6
};


// Enum UnrealTournament.ETextVertPos
enum class ETextVertPos : uint8_t
{
	ETextVertPos__Top              = 0,
	ETextVertPos__Center           = 1,
	ETextVertPos__Bottom           = 2,
	ETextVertPos__MAX              = 3,
	ETextVertPos__ETextVertPos_MAX = 4
};


// Enum UnrealTournament.ETextHorzPos
enum class ETextHorzPos : uint8_t
{
	ETextHorzPos__Left             = 0,
	ETextHorzPos__Center           = 1,
	ETextHorzPos__Right            = 2,
	ETextHorzPos__MAX              = 3,
	ETextHorzPos__ETextHorzPos_MAX = 4
};


// Enum UnrealTournament.EGameStage
enum class EGameStage : uint8_t
{
	EGameStage__Initializing       = 0,
	EGameStage__PreGame            = 1,
	EGameStage__GameInProgress     = 2,
	EGameStage__GameOver           = 3,
	EGameStage__MAX                = 4,
	EGameStage__EGameStage_MAX     = 5
};


// Enum UnrealTournament.EAnnouncerType
enum class EAnnouncerType : uint8_t
{
	AT_Reward                      = 0,
	AT_Status                      = 1,
	AT_All                         = 2,
	AT_MAX                         = 3
};


// Enum UnrealTournament.EUTSoundClass
enum class EUTSoundClass : uint8_t
{
	EUTSoundClass__Master          = 0,
	EUTSoundClass__Music           = 1,
	EUTSoundClass__SFX             = 2,
	EUTSoundClass__Voice           = 3,
	EUTSoundClass__VOIP            = 4,
	EUTSoundClass__Music_Stingers  = 5,
	EUTSoundClass__GameMusic       = 6,
	EUTSoundClass__MAX             = 7,
	EUTSoundClass__EUTSoundClass_MAX = 8
};


// Enum UnrealTournament.EDMSkinType
enum class EDMSkinType : uint8_t
{
	EDMSkin_Red                    = 0,
	EDMSkin_Blue                   = 1,
	EDMSkin_Base                   = 2,
	EDMSkin_None                   = 3,
	EDMSkin_MAX                    = 4
};


// Enum UnrealTournament.EMovementEvent
enum class EMovementEvent : uint8_t
{
	EME_Jump                       = 0,
	EME_Dodge                      = 1,
	EME_WallDodge                  = 2,
	EME_Slide                      = 3,
	EME_MAX                        = 4
};


// Enum UnrealTournament.EAllowedSpecialMoveAnims
enum class EAllowedSpecialMoveAnims : uint8_t
{
	EASM_Any                       = 0,
	EASM_UpperBodyOnly             = 1,
	EASM_None                      = 2,
	EASM_MAX                       = 3
};


// Enum UnrealTournament.EInputMode
enum class EInputMode : uint8_t
{
	EInputMode__EIM_None           = 0,
	EInputMode__EIM_GameOnly       = 1,
	EInputMode__EIM_GameAndUI      = 2,
	EInputMode__EIM_UIOnly         = 3,
	EInputMode__EIM_MAX            = 4
};


// Enum UnrealTournament.ESoundAmplificationType
enum class ESoundAmplificationType : uint8_t
{
	SAT_None                       = 0,
	SAT_Footstep                   = 1,
	SAT_WeaponFire                 = 2,
	SAT_WeaponFoley                = 3,
	SAT_PainSound                  = 4,
	SAT_MAX                        = 5
};


// Enum UnrealTournament.ESoundReplicationType
enum class ESoundReplicationType : uint8_t
{
	SRT_All                        = 0,
	SRT_AllButOwner                = 1,
	SRT_IfSourceNotReplicated      = 2,
	SRT_None                       = 3,
	SRT_MAX                        = 4
};


// Enum UnrealTournament.EZoomState
enum class EZoomState : uint8_t
{
	EZoomState__EZS_NotZoomed      = 0,
	EZoomState__EZS_ZoomingIn      = 1,
	EZoomState__EZS_ZoomingOut     = 2,
	EZoomState__EZS_Zoomed         = 3,
	EZoomState__EZS_MAX            = 4
};


// Enum UnrealTournament.LineUpSpawnTypes
enum class ELineUpSpawnTypes : uint8_t
{
	LineUpSpawnTypes__Invalid      = 0,
	LineUpSpawnTypes__FFA          = 1,
	LineUpSpawnTypes__Team1        = 2,
	LineUpSpawnTypes__Team2        = 3,
	LineUpSpawnTypes__WinningTeam  = 4,
	LineUpSpawnTypes__LosingTeam   = 5,
	LineUpSpawnTypes__None         = 6,
	LineUpSpawnTypes__LineUpSpawnTypes_MAX = 7
};


// Enum UnrealTournament.LineUpTypes
enum class ELineUpTypes : uint8_t
{
	LineUpTypes__Invalid           = 0,
	LineUpTypes__Intro             = 1,
	LineUpTypes__Intermission      = 2,
	LineUpTypes__PostMatch         = 3,
	LineUpTypes__None              = 4,
	LineUpTypes__LineUpTypes_MAX   = 5
};


// Enum UnrealTournament.EUTLevelTypes
enum class EUTLevelTypes : uint8_t
{
	EUTLevelTypes__Account         = 0,
	EUTLevelTypes__Weapon          = 1,
	EUTLevelTypes__WeaponSkin      = 2,
	EUTLevelTypes__MAX             = 3,
	EUTLevelTypes__EUTLevelTypes_MAX = 4
};


// Enum UnrealTournament.EUTCurrencyType
enum class EUTCurrencyType : uint8_t
{
	EUTCurrencyType__TimeCurrency  = 0,
	EUTCurrencyType__MtxCurrency   = 1,
	EUTCurrencyType__RealMoney     = 2,
	EUTCurrencyType__MAX           = 3,
	EUTCurrencyType__EUTCurrencyType_MAX = 4
};


// Enum UnrealTournament.EUTInputType
enum class EUTInputType : uint8_t
{
	EUTInputType__Mouse_Keyboard   = 0,
	EUTInputType__DualShock4       = 1,
	EUTInputType__MAX              = 2,
	EUTInputType__EUTInputType_MAX = 3
};


// Enum UnrealTournament.EBotSpeechOption
enum class EBotSpeechOption : uint8_t
{
	BSO_None                       = 0,
	BSO_StatusTextOnly             = 1,
	BSO_All                        = 2,
	BSO_MAX                        = 3
};


// Enum UnrealTournament.EItemAlignment
enum class EItemAlignment : uint8_t
{
	EItemAlignment__EvenlyDistributed = 0,
	EItemAlignment__LeftAligned    = 1,
	EItemAlignment__RightAligned   = 2,
	EItemAlignment__CenterAligned  = 3,
	EItemAlignment__Fill           = 4,
	EItemAlignment__EItemAlignment_MAX = 5
};


// Enum UnrealTournament.EProfileResetType
enum class EProfileResetType : uint8_t
{
	EProfileResetType__All         = 0,
	EProfileResetType__System      = 1,
	EProfileResetType__Character   = 2,
	EProfileResetType__Challenges  = 3,
	EProfileResetType__Weapons     = 4,
	EProfileResetType__Social      = 5,
	EProfileResetType__HUD         = 6,
	EProfileResetType__Game        = 7,
	EProfileResetType__Input       = 8,
	EProfileResetType__Binds       = 9,
	EProfileResetType__MAX         = 10,
	EProfileResetType__EProfileResetType_MAX = 11
};


// Enum UnrealTournament.EUTSessionHelperJoinState
enum class EUTSessionHelperJoinState : uint8_t
{
	EUTSessionHelperJoinState__NotJoining = 0,
	EUTSessionHelperJoinState__RequestingReservation = 1,
	EUTSessionHelperJoinState__FailedReservation = 2,
	EUTSessionHelperJoinState__WaitingOnGame = 3,
	EUTSessionHelperJoinState__AttemptingJoin = 4,
	EUTSessionHelperJoinState__JoiningSession = 5,
	EUTSessionHelperJoinState__FailedJoin = 6,
	EUTSessionHelperJoinState__EUTSessionHelperJoinState_MAX = 7
};


// Enum UnrealTournament.EUTSessionHelperJoinResult
enum class EUTSessionHelperJoinResult : uint8_t
{
	EUTSessionHelperJoinResult__NoResult = 0,
	EUTSessionHelperJoinResult__ReservationSuccess = 1,
	EUTSessionHelperJoinResult__ReservationFailure = 2,
	EUTSessionHelperJoinResult__JoinSessionSuccess = 3,
	EUTSessionHelperJoinResult__JoinSessionFailure = 4,
	EUTSessionHelperJoinResult__EUTSessionHelperJoinResult_MAX = 5
};


// Enum UnrealTournament.EMatchmakingFlags
enum class EMatchmakingFlags : uint8_t
{
	EMatchmakingFlags__None        = 0,
	EMatchmakingFlags__CreateNewOnly = 1,
	EMatchmakingFlags__NoReservation = 2,
	EMatchmakingFlags__Private     = 3,
	EMatchmakingFlags__UseWorldDataOwner = 4,
	EMatchmakingFlags__EMatchmakingFlags_MAX = 5
};


// Enum UnrealTournament.EMatchmakingStartLocation
enum class EMatchmakingStartLocation : uint8_t
{
	EMatchmakingStartLocation__Lobby = 0,
	EMatchmakingStartLocation__Game = 1,
	EMatchmakingStartLocation__CreateNew = 2,
	EMatchmakingStartLocation__FindSingle = 3,
	EMatchmakingStartLocation__EMatchmakingStartLocation_MAX = 4
};


// Enum UnrealTournament.EUTMatchmakingType
enum class EUTMatchmakingType : uint8_t
{
	EUTMatchmakingType__Gathering  = 0,
	EUTMatchmakingType__Session    = 1,
	EUTMatchmakingType__EUTMatchmakingType_MAX = 2
};


// Enum UnrealTournament.EUTPartyState
enum class EUTPartyState : uint8_t
{
	EUTPartyState__Menus           = 0,
	EUTPartyState__Matchmaking     = 1,
	EUTPartyState__PostMatchmaking = 2,
	EUTPartyState__TravelToServer  = 3,
	EUTPartyState__CustomMatch     = 4,
	EUTPartyState__QuickMatching   = 5,
	EUTPartyState__EUTPartyState_MAX = 6
};


// Enum UnrealTournament.EUTPartyMemberLocation
enum class EUTPartyMemberLocation : uint8_t
{
	EUTPartyMemberLocation__PreLobby = 0,
	EUTPartyMemberLocation__ConnectingToLobby = 1,
	EUTPartyMemberLocation__Lobby  = 2,
	EUTPartyMemberLocation__JoiningGame = 3,
	EUTPartyMemberLocation__InGame = 4,
	EUTPartyMemberLocation__EUTPartyMemberLocation_MAX = 5
};


// Enum UnrealTournament.ETimedLightParameter
enum class ETimedLightParameter : uint8_t
{
	TLP_Intensity                  = 0,
	TLP_Color                      = 1,
	TLP_MAX                        = 2
};


// Enum UnrealTournament.EHitType
enum class EHitType : uint8_t
{
	HIT_None                       = 0,
	HIT_Wall                       = 1,
	HIT_Ceiling                    = 2,
	HIT_Floor                      = 3,
	HIT_MAX                        = 4
};


// Enum UnrealTournament.ETLState
enum class ETLState : uint8_t
{
	TLS_None                       = 0,
	TLS_InAir                      = 1,
	TLS_OnGround                   = 2,
	TLS_Disrupted                  = 3,
	TLS_MAX                        = 4
};


// Enum UnrealTournament.RepulsorLastHitType
enum class ERepulsorLastHitType : uint8_t
{
	RepulsorLastHitType__None      = 0,
	RepulsorLastHitType__Projectile = 1,
	RepulsorLastHitType__Hitscan   = 2,
	RepulsorLastHitType__Character = 3,
	RepulsorLastHitType__RepulsorLastHitType_MAX = 4
};


// Enum UnrealTournament.ERichTextInlineIconDisplayMode
enum class ERichTextInlineIconDisplayMode : uint8_t
{
	ERichTextInlineIconDisplayMode__IconOnly = 0,
	ERichTextInlineIconDisplayMode__TextOnly = 1,
	ERichTextInlineIconDisplayMode__IconAndText = 2,
	ERichTextInlineIconDisplayMode__MAX = 3,
	ERichTextInlineIconDisplayMode__ERichTextInlineIconDisplayMode_MAX = 4
};


// Enum UnrealTournament.EUTSpinState
enum class EUTSpinState : uint8_t
{
	EUTSpinState__Inactive         = 0,
	EUTSpinState__Opening          = 1,
	EUTSpinState__Spinning         = 2,
	EUTSpinState__SlowingDown      = 3,
	EUTSpinState__EUTSpinState_MAX = 4
};


// Enum UnrealTournament.EUTCustomMovementTypes
enum class EUTCustomMovementTypes : uint8_t
{
	CUSTOMMOVE_None                = 0,
	CUSTOMMOVE_LineUp              = 1,
	CUSTOMMOVE_MAX                 = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct UnrealTournament.CapsuleSize
// 0x0008
struct FCapsuleSize
{
	int                                                Radius;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UnrealTournament.UTPathLink
// 0x0058
struct FUTPathLink
{
	TWeakObjectPtr<class UUTPathNode>                  Start;                                                    // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	uint64_t                                           StartEdgePoly;                                            // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UUTPathNode>                  End;                                                      // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	uint64_t                                           EndPoly;                                                  // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<uint64_t>                                   AdditionalEndPolys;                                       // 0x0020(0x0010) (ZeroConstructor)
	TWeakObjectPtr<class UUTReachSpec>                 Spec;                                                     // 0x0030(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CollisionRadius;                                          // 0x0038(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CollisionHeight;                                          // 0x003C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	uint16_t                                           ReachFlags;                                               // 0x0040(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0042(0x0006) MISSED OFFSET
	TArray<int>                                        Distances;                                                // 0x0048(0x0010) (ZeroConstructor)
};

// ScriptStruct UnrealTournament.BotPersonality
// 0x0028
struct FBotPersonality
{
	float                                              Aggressiveness;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Tactics;                                                  // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Jumpiness;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MovementAbility;                                          // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ReactionTime;                                             // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Accuracy;                                                 // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Alertness;                                                // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MapAwareness;                                             // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       FavoriteWeapon;                                           // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UnrealTournament.RouteCacheItem
// 0x0028
struct FRouteCacheItem
{
	TWeakObjectPtr<class UUTPathNode>                  Node;                                                     // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       Actor;                                                    // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData)
	bool                                               bDirectTarget;                                            // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x001D(0x000B) MISSED OFFSET
};

// ScriptStruct UnrealTournament.BotEnemyInfo
// 0x0050
struct FBotEnemyInfo
{
	class APawn*                                       Pawn;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class AUTCharacter*                                UTChar;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              EffectiveHealthPct;                                       // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasExactHealth;                                          // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	struct FVector                                     LastKnownLoc;                                             // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     LastSeenLoc;                                              // 0x0024(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     LastSeeingLoc;                                            // 0x0030(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              LastSeenTime;                                             // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LastFullUpdateTime;                                       // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LastHitByTime;                                            // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LastUpdateTime;                                           // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bLostEnemy;                                               // 0x004C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
};

// ScriptStruct UnrealTournament.BotEnemyRating
// 0x0018
struct FBotEnemyRating
{
	struct FString                                     PlayerName;                                               // 0x0000(0x0010) (ZeroConstructor)
	float                                              Rating;                                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct UnrealTournament.UTAnalyticsEventAttr
// 0x0020
struct FUTAnalyticsEventAttr
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Value;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct UnrealTournament.CustomSoundAmplification
// 0x0040
struct FCustomSoundAmplification
{
	float                                              OwnVolumeMultiplier;                                      // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OwnPitchMultiplier;                                       // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundAttenuation*                           InstigatorAttenuation;                                    // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InstigatorVolumeMultiplier;                               // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InstigatorPitchMultiplier;                                // 0x0014(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundAttenuation*                           TargetAttenuation;                                        // 0x0018(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TargetVolumeMultiplier;                                   // 0x0020(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TargetPitchMultiplier;                                    // 0x0024(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundAttenuation*                           TeammateAttenuation;                                      // 0x0028(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TeammateVolumeMultiplier;                                 // 0x0030(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TeammatePitchMultiplier;                                  // 0x0034(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundAttenuation*                           OccludedAttenuation;                                      // 0x0038(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UnrealTournament.XPBreakdown
// 0x0014
struct FXPBreakdown
{
	float                                              ScoreXP;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              KillAwardXP;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              OffenseXP;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DefenseXP;                                                // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ChallengeXP;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UnrealTournament.AnnouncerSound
// 0x0010
struct FAnnouncerSound
{
	struct FName                                       SoundName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound;                                                    // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct UnrealTournament.AnnouncementInfo
// 0x0030
struct FAnnouncementInfo
{
	class UClass*                                      MessageClass;                                             // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Switch;                                                   // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class APlayerState*                                RelatedPlayerState_2;                                     // 0x0010(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class APlayerState*                                RelatedPlayerState_3;                                     // 0x0018(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UObject*                                     OptionalObject;                                           // 0x0020(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              QueueTime;                                                // 0x0028(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct UnrealTournament.BloodDecalInfo
// 0x0018
struct FBloodDecalInfo
{
	class UMaterialInterface*                          Material;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   BaseScale;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ScaleMultRange;                                           // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UnrealTournament.ColorSwap
// 0x0020
struct FColorSwap
{
	struct FLinearColor                                Color1;                                                   // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Color2;                                                   // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct UnrealTournament.CharacterSpeech
// 0x0020
struct FCharacterSpeech
{
	struct FText                                       SpeechText;                                               // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	class USoundBase*                                  SpeechSound;                                              // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct UnrealTournament.GameVolumeLines
// 0x0048
struct FGameVolumeLines
{
	struct FName                                       VoiceLinesSet;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FCharacterSpeech>                    FlagHereNormal;                                           // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCharacterSpeech>                    FlagHereUrgent;                                           // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCharacterSpeech>                    SecureSpeech;                                             // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCharacterSpeech>                    UndefendedSpeech;                                         // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct UnrealTournament.GibSlotInfo
// 0x0010
struct FGibSlotInfo
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      GibType;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UnrealTournament.ProfileItemEntry
// 0x0010
struct FProfileItemEntry
{
	class UUTProfileItem*                              Item;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct UnrealTournament.CosmeticEntry
// 0x0018
struct FCosmeticEntry
{
	struct FStringClassReference                       Item;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
	int                                                VariantId;                                                // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct UnrealTournament.WeaponSpree
// 0x0010
struct FWeaponSpree
{
	struct FName                                       SpreeSoundName;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                Kills;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct UnrealTournament.CoolFactorHistoricalEvent
// 0x0008
struct FCoolFactorHistoricalEvent
{
	float                                              CoolFactorAmount;                                         // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeOccurred;                                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UnrealTournament.EmoteRepInfo
// 0x0008
struct FEmoteRepInfo
{
	unsigned char                                      EmoteCount;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                EmoteIndex;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UnrealTournament.PackageRedirectReference
// 0x0040
struct FPackageRedirectReference
{
	struct FString                                     PackageName;                                              // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     PackageURLProtocol;                                       // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     PackageURL;                                               // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     PackageChecksum;                                          // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct UnrealTournament.EpicMapData
// 0x0018
struct FEpicMapData
{
	struct FString                                     MapPackageName;                                           // 0x0000(0x0010) (ZeroConstructor)
	bool                                               bIsEpicMap;                                               // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsMeshedMap;                                             // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
};

// ScriptStruct UnrealTournament.MatchPlayerListStruct
// 0x0038
struct FMatchPlayerListStruct
{
	struct FString                                     PlayerName;                                               // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     PlayerId;                                                 // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     PlayerScore;                                              // 0x0020(0x0010) (ZeroConstructor)
	uint32_t                                           TeamNum;                                                  // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct UnrealTournament.MatchUpdate
// 0x0038
struct FMatchUpdate
{
	float                                              TimeLimit;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                GoalScore;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              GameTime;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumPlayers;                                               // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumSpectators;                                            // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<int>                                        TeamScores;                                               // 0x0018(0x0010) (ZeroConstructor)
	struct FName                                       MatchState;                                               // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bMatchHasBegun;                                           // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bMatchHasEnded;                                           // 0x0031(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0032(0x0002) MISSED OFFSET
	int                                                RankCheck;                                                // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UnrealTournament.ServerInstanceData
// 0x00C8
struct FServerInstanceData
{
	struct FGuid                                       InstanceId;                                               // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FString                                     RulesTitle;                                               // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     RulesTag;                                                 // 0x0020(0x0010) (ZeroConstructor)
	struct FString                                     GameModeClass;                                            // 0x0030(0x0010) (ZeroConstructor)
	struct FString                                     MapName;                                                  // 0x0040(0x0010) (ZeroConstructor)
	int                                                MaxPlayers;                                               // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           Flags;                                                    // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RankCheck;                                                // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bTeamGame;                                                // 0x005C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bJoinableAsPlayer;                                        // 0x005D(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bJoinableAsSpectator;                                     // 0x005E(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x005F(0x0001) MISSED OFFSET
	struct FString                                     MutatorList;                                              // 0x0060(0x0010) (ZeroConstructor)
	struct FMatchUpdate                                MatchData;                                                // 0x0070(0x0038)
	TArray<struct FMatchPlayerListStruct>              Players;                                                  // 0x00A8(0x0010) (ZeroConstructor, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FString                                     CustomGameName;                                           // 0x00B8(0x0010) (ZeroConstructor)
};

// ScriptStruct UnrealTournament.ServerBeaconInfo
// 0x0050
struct FServerBeaconInfo
{
	struct FString                                     ServerRules;                                              // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     ServerPlayers;                                            // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     MOTD;                                                     // 0x0020(0x0010) (ZeroConstructor)
	struct FString                                     CurrentMap;                                               // 0x0030(0x0010) (ZeroConstructor)
	struct FString                                     CurrentGameMode;                                          // 0x0040(0x0010) (ZeroConstructor)
};

// ScriptStruct UnrealTournament.RemotePlayerInfo
// 0x0048
struct FRemotePlayerInfo
{
	struct FUniqueNetIdRepl                            PlayerId;                                                 // 0x0000(0x0018)
	bool                                               bIsSpectator;                                             // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	struct FString                                     PlayerName;                                               // 0x0020(0x0010) (ZeroConstructor)
	int                                                PlayerScore;                                              // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RankCheck;                                                // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                XPLevel;                                                  // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      TeamNum;                                                  // 0x003C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	struct FName                                       Avatar;                                                   // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UnrealTournament.AssistTracker
// 0x0010
struct FAssistTracker
{
	class AUTPlayerState*                              Holder;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              TotalHeldTime;                                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct UnrealTournament.FlagTrailPos
// 0x0034
struct FFlagTrailPos
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     MidPoints[0x3];                                           // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsInNoRallyZone;                                         // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bEnteringNoRallyZone;                                     // 0x0031(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0032(0x0002) MISSED OFFSET
};

// ScriptStruct UnrealTournament.RepUTMovement
// 0x0028
struct FRepUTMovement
{
	struct FVector_NetQuantize                         LinearVelocity;                                           // 0x0000(0x000C)
	struct FVector_NetQuantize                         Location;                                                 // 0x000C(0x000C)
	unsigned char                                      AccelDir;                                                 // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	struct FRotator                                    Rotation;                                                 // 0x001C(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UnrealTournament.SavedPosition
// 0x0030
struct FSavedPosition
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData)
	bool                                               bTeleported;                                              // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bShotSpawned;                                             // 0x0025(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xA];                                       // 0x0026(0x000A) MISSED OFFSET
};

// ScriptStruct UnrealTournament.StoredAmmo
// 0x0010
struct FStoredAmmo
{
	class UClass*                                      Type;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Amount;                                                   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct UnrealTournament.FlashLocRep
// 0x0010
struct FFlashLocRep
{
	struct FVector_NetQuantize                         Position;                                                 // 0x0000(0x000C) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      Count;                                                    // 0x000C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct UnrealTournament.TakeHitInfo
// 0x0038
struct FTakeHitInfo
{
	int                                                Damage;                                                   // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize                         RelHitLocation;                                           // 0x0004(0x000C) (BlueprintVisible)
	struct FVector_NetQuantize                         Momentum;                                                 // 0x0010(0x000C) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UClass*                                      DamageType;                                               // 0x0020(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ShotDirPitch;                                             // 0x0028(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ShotDirYaw;                                               // 0x0029(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Count;                                                    // 0x002A(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x002B(0x0005) MISSED OFFSET
	class UClass*                                      HitArmor;                                                 // 0x0030(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UnrealTournament.PhysicalSoundResponse
// 0x0018
struct FPhysicalSoundResponse
{
	TEnumAsByte<EPhysicalSurface>                      SurfaceType;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class USoundBase*                                  Sound;                                                    // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundOwner;                                               // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct UnrealTournament.MovementEventInfo
// 0x0010
struct FMovementEventInfo
{
	TEnumAsByte<EMovementEvent>                        EventType;                                                // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      EventCount;                                               // 0x0001(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	struct FVector_NetQuantize                         EventLocation;                                            // 0x0004(0x000C) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct UnrealTournament.OverlayEffect
// 0x0018
struct FOverlayEffect
{
	class UMaterialInterface*                          Material;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             Particles;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParticleAttachPoint;                                      // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UnrealTournament.SafePlayerName
// 0x0018
struct FSafePlayerName
{
	class AUTPlayerState*                              PlayerState;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     PlayerName;                                               // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct UnrealTournament.CTFAssist
// 0x0020
struct FCTFAssist
{
	struct FSafePlayerName                             AssistName;                                               // 0x0000(0x0018)
	bool                                               bCarryAssist;                                             // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bDefendAssist;                                            // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bReturnAssist;                                            // 0x001A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x001B(0x0005) MISSED OFFSET
};

// ScriptStruct UnrealTournament.CTFScoringPlay
// 0x0050
struct FCTFScoringPlay
{
	class AUTTeamInfo*                                 Team;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FSafePlayerName                             ScoredBy;                                                 // 0x0008(0x0018)
	int                                                ScoredByCaps;                                             // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RedBonus;                                                 // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BlueBonus;                                                // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TArray<struct FCTFAssist>                          Assists;                                                  // 0x0030(0x0010) (ZeroConstructor)
	int                                                RemainingTime;                                            // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Period;                                                   // 0x0044(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bDefenseWon;                                              // 0x0045(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bAnnihilation;                                            // 0x0046(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0047(0x0001) MISSED OFFSET
	int                                                TeamScores[0x2];                                          // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UnrealTournament.PickupReplicatedState
// 0x0008
struct FPickupReplicatedState
{
	unsigned char                                      bActive : 1;                                              // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bRepTakenEffects : 1;                                     // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	unsigned char                                      ChangeCounter;                                            // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct UnrealTournament.PickupClaim
// 0x0018
struct FPickupClaim
{
	class APawn*                                       ClaimedBy;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      Pickup;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bHardClaim;                                               // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct UnrealTournament.AlternateRoute
// 0x0010
struct FAlternateRoute
{
	TArray<struct FRouteCacheItem>                     RouteCache;                                               // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct UnrealTournament.TimedPlayerPing
// 0x0010
struct FTimedPlayerPing
{
	class AUTCharacter*                                Char;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      VisibleTeamNum;                                           // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              TimeRemaining;                                            // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UnrealTournament.AllowedData
// 0x0018
struct FAllowedData
{
	TEnumAsByte<EGameDataType>                         DataType;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     PackageName;                                              // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct UnrealTournament.UTGameRuleset
// 0x00F8
struct FUTGameRuleset
{
	struct FString                                     UniqueTag;                                                // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FName>                               Categories;                                               // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     Title;                                                    // 0x0020(0x0010) (ZeroConstructor)
	struct FString                                     ToolTip;                                                  // 0x0030(0x0010) (ZeroConstructor)
	struct FString                                     Description;                                              // 0x0040(0x0010) (ZeroConstructor)
	TArray<struct FString>                             MapPrefixes;                                              // 0x0050(0x0010) (ZeroConstructor)
	int                                                MaxMapsInList;                                            // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	struct FString                                     EpicMaps;                                                 // 0x0068(0x0010) (ZeroConstructor)
	struct FString                                     DefaultMap;                                               // 0x0078(0x0010) (ZeroConstructor)
	TArray<struct FString>                             CustomMapList;                                            // 0x0088(0x0010) (ZeroConstructor, Config)
	int                                                MaxPlayers;                                               // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxTeamCount;                                             // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxTeamSize;                                              // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxPartySize;                                             // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     DisplayTexture;                                           // 0x00A8(0x0010) (ZeroConstructor)
	struct FString                                     GameMode;                                                 // 0x00B8(0x0010) (ZeroConstructor)
	struct FString                                     GameOptions;                                              // 0x00C8(0x0010) (ZeroConstructor)
	TArray<struct FString>                             RequiredPackages;                                         // 0x00D8(0x0010) (ZeroConstructor)
	bool                                               bTeamGame;                                                // 0x00E8(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bCompetitiveMatch;                                        // 0x00E9(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x00EA(0x0002) MISSED OFFSET
	uint32_t                                           OptionFlags;                                              // 0x00EC(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bHideFromUI;                                              // 0x00F0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00F1(0x0003) MISSED OFFSET
	int                                                EpicForceUIVisibility;                                    // 0x00F4(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UnrealTournament.HUDRenderObject
// 0x0038
struct FHUDRenderObject
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	bool                                               bHidden;                                                  // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              RenderPriority;                                           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Position;                                                 // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Size;                                                     // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                RenderColor;                                              // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RenderOpacity;                                            // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RenderScale;                                              // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UnrealTournament.TextureUVs
// 0x0010
struct FTextureUVs
{
	float                                              U;                                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              V;                                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UL;                                                       // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VL;                                                       // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UnrealTournament.HUDRenderObject_Texture
// 0x0048 (0x0080 - 0x0038)
struct FHUDRenderObject_Texture : public FHUDRenderObject
{
	class UTexture*                                    Atlas;                                                    // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FTextureUVs                                 UVs;                                                      // 0x0040(0x0010) (Edit, BlueprintVisible)
	bool                                               bUseTeamColors;                                           // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	TArray<struct FLinearColor>                        TeamColorOverrides;                                       // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bIsBorderElement;                                         // 0x0068(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSlateElement;                                          // 0x0069(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x006A(0x0002) MISSED OFFSET
	struct FVector2D                                   RenderOffset;                                             // 0x006C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Rotation;                                                 // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   RotPivot;                                                 // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UnrealTournament.HUDRenderObject_Text
// 0x00B8 (0x00F0 - 0x0038)
struct FHUDRenderObject_Text : public FHUDRenderObject
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0038(0x0048) MISSED OFFSET
	struct FText                                       Text;                                                     // 0x0080(0x0018) (Edit, BlueprintVisible)
	class UFont*                                       Font;                                                     // 0x0098(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TextScale;                                                // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawShadow;                                              // 0x00A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00A5(0x0003) MISSED OFFSET
	struct FVector2D                                   ShadowDirection;                                          // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ShadowColor;                                              // 0x00B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawOutline;                                             // 0x00C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00C1(0x0003) MISSED OFFSET
	struct FLinearColor                                OutlineColor;                                             // 0x00C4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextHorzPos>                          HorzPosition;                                             // 0x00D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextVertPos>                          VertPosition;                                             // 0x00D5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x00D6(0x0002) MISSED OFFSET
	struct FLinearColor                                BackgroundColor;                                          // 0x00D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET
};

// ScriptStruct UnrealTournament.RepUTProjMovement
// 0x0024
struct FRepUTProjMovement
{
	struct FVector_NetQuantize                         LinearVelocity;                                           // 0x0000(0x000C)
	struct FVector_NetQuantize                         Location;                                                 // 0x000C(0x000C)
	struct FRotator                                    Rotation;                                                 // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UnrealTournament.MapVignetteInfo
// 0x0028
struct FMapVignetteInfo
{
	struct FString                                     MovieFilename;                                            // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
	struct FText                                       Description;                                              // 0x0010(0x0018) (Edit, DisableEditOnTemplate)
};

// ScriptStruct UnrealTournament.DatabaseRow
// 0x0010
struct FDatabaseRow
{
	TArray<struct FString>                             Text;                                                     // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct UnrealTournament.HUDandUMGParticleSystemTracker
// 0x0028
struct FHUDandUMGParticleSystemTracker
{
	class UParticleSystemComponent*                    ParticleSystemComponent;                                  // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     LocationModifier;                                         // 0x0008(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    DirectionModifier;                                        // 0x0014(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ScreenLocation;                                           // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UnrealTournament.WeaponCustomizationInfo
// 0x0038
struct FWeaponCustomizationInfo
{
	struct FName                                       WeaponCustomizationTag;                                   // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                WeaponGroup;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WeaponAutoSwitchPriority;                                 // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       DefaultCrosshairTag;                                      // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       CrosshairTag;                                             // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CrosshairScaleOverride;                                   // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                CrosshairColorOverride;                                   // 0x0024(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct UnrealTournament.InstantHitDamageInfo
// 0x0020
struct FInstantHitDamageInfo
{
	int                                                Damage;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UClass*                                      DamageType;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Momentum;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TraceRange;                                               // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TraceHalfSize;                                            // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ConeDotAngle;                                             // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UnrealTournament.DelayedProjectileInfo
// 0x0020
struct FDelayedProjectileInfo
{
	class UClass*                                      ProjectileClass;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpawnLocation;                                            // 0x0008(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    SpawnRotation;                                            // 0x0014(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UnrealTournament.DelayedHitScanInfo
// 0x0028
struct FDelayedHitScanInfo
{
	struct FVector                                     ImpactLocation;                                           // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      FireMode;                                                 // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FVector                                     SpawnLocation;                                            // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    SpawnRotation;                                            // 0x001C(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UnrealTournament.PendingFireEvent
// 0x0005
struct FPendingFireEvent
{
	bool                                               bIsStartFire;                                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      FireModeNum;                                              // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      FireEventIndex;                                           // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      ZOffset;                                                  // 0x0003(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bClientFired;                                             // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UnrealTournament.ZoomInfo
// 0x000C
struct FZoomInfo
{
	float                                              StartFOV;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EndFOV;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UnrealTournament.WeaponPickupCustomer
// 0x0010
struct FWeaponPickupCustomer
{
	class APawn*                                       P;                                                        // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NextPickupTime;                                           // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct UnrealTournament.LineUpSpawn
// 0x0040
struct FLineUpSpawn
{
	ELineUpSpawnTypes                                  SpawnType;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0001(0x000F) MISSED OFFSET
	struct FTransform                                  Location;                                                 // 0x0010(0x0030) (Edit, IsPlainOldData)
};

// ScriptStruct UnrealTournament.PathTestEntry
// 0x0050
struct FPathTestEntry
{
	struct FRouteCacheItem                             Src;                                                      // 0x0000(0x0028)
	struct FRouteCacheItem                             Dest;                                                     // 0x0028(0x0028)
};

// ScriptStruct UnrealTournament.TeamRoster
// 0x0028
struct FTeamRoster
{
	struct FText                                       TeamName;                                                 // 0x0000(0x0018)
	TArray<struct FName>                               Roster;                                                   // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct UnrealTournament.UTChallengeInfo
// 0x0080
struct FUTChallengeInfo
{
	struct FName                                       Tag;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Title;                                                    // 0x0008(0x0010) (ZeroConstructor)
	struct FString                                     Map;                                                      // 0x0018(0x0010) (ZeroConstructor)
	struct FString                                     GameURL;                                                  // 0x0028(0x0010) (ZeroConstructor)
	struct FString                                     Description;                                              // 0x0038(0x0010) (ZeroConstructor)
	int                                                PlayerTeamSize;                                           // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EnemyTeamSize;                                            // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       EnemyTeamName[0x3];                                       // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       SlateUIImageName;                                         // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       RewardTag;                                                // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bDailyChallenge;                                          // 0x0078(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bExpiredChallenge;                                        // 0x0079(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bHighlighted;                                             // 0x007A(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               ShadowOpacity;                                            // 0x007B(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
};

// ScriptStruct UnrealTournament.BanInfo
// 0x0020
struct FBanInfo
{
	struct FString                                     UserName;                                                 // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     UniqueId;                                                 // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct UnrealTournament.UTRewardTypeInfo
// 0x0060
struct FUTRewardTypeInfo
{
	class UTexture2D*                                  DisplayIcons[0x3];                                        // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FText                                       DisplayName;                                              // 0x0018(0x0018) (Edit)
	struct FText                                       ShortDescription;                                         // 0x0030(0x0018) (Edit)
	struct FText                                       FullDescription;                                          // 0x0048(0x0018) (Edit)
};

// ScriptStruct UnrealTournament.UTRewardSourceInfo
// 0x0040
struct FUTRewardSourceInfo
{
	struct FName                                       SourceType;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // 0x0008(0x0018) (Edit)
	struct FText                                       Description;                                              // 0x0020(0x0018) (Edit)
	bool                                               bShowInChest;                                             // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct UnrealTournament.UTItemRewardInfo
// 0x0008 (0x0068 - 0x0060)
struct FUTItemRewardInfo : public FUTRewardTypeInfo
{
	class UClass*                                      McpItemType;                                              // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UnrealTournament.UTLootTierRewardInfo
// 0x0030 (0x0090 - 0x0060)
struct FUTLootTierRewardInfo : public FUTRewardTypeInfo
{
	struct FString                                     LootTierGroupName;                                        // 0x0060(0x0010) (Edit, ZeroConstructor)
	struct FText                                       LootTypeName;                                             // 0x0070(0x0018) (Edit)
	bool                                               bIsRandomRoll;                                            // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0089(0x0007) MISSED OFFSET
};

// ScriptStruct UnrealTournament.UTCoinLootCrateRewards
// 0x0040
struct FUTCoinLootCrateRewards
{
	struct FString                                     RealNameForReward;                                        // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FString                                     ReplacementName;                                          // 0x0010(0x0010) (Edit, ZeroConstructor)
	class UUtMcpDefinition*                            ReplacementReward;                                        // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	EUTItemRarity                                      CoinAmountRarity;                                         // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	class UTexture2D*                                  RewardIcon;                                               // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinRangeInclusive;                                        // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxRangeInclusive;                                        // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UnrealTournament.UTKeywordIcon
// 0x0020
struct FUTKeywordIcon
{
	class UTexture2D*                                  Icon;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct UnrealTournament.InputActionGamepadEquivalency
// 0x0010
struct FInputActionGamepadEquivalency
{
	struct FName                                       ActionName;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       GamepadActionNameEquivalent;                              // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UnrealTournament.GamepadButtonArt
// 0x01C8
struct FGamepadButtonArt
{
	struct FKey                                        Key;                                                      // 0x0000(0x0018) (Edit, EditConst)
	struct FSlateBrush                                 PS4Icon;                                                  // 0x0018(0x0090) (Edit)
	struct FSlateBrush                                 XBoxIcon;                                                 // 0x00A8(0x0090) (Edit)
	struct FSlateBrush                                 NVShieldIcon;                                             // 0x0138(0x0090) (Edit)
};

// ScriptStruct UnrealTournament.MouseButtonArt
// 0x00A8
struct FMouseButtonArt
{
	struct FKey                                        Key;                                                      // 0x0000(0x0018) (Edit, EditConst)
	struct FSlateBrush                                 ButtonIcon;                                               // 0x0018(0x0090) (Edit)
};

// ScriptStruct UnrealTournament.ActionBindingToReadableName
// 0x0020
struct FActionBindingToReadableName
{
	struct FName                                       ActionName;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReadableName;                                             // 0x0008(0x0018) (Edit)
};

// ScriptStruct UnrealTournament.AxisBindingsRedirectStruct
// 0x0018
struct FAxisBindingsRedirectStruct
{
	struct FName                                       MetaAxisName;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       AxisName;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AxisScale;                                                // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct UnrealTournament.AxisKeyRedirect
// 0x0038
struct FAxisKeyRedirect
{
	struct FKey                                        AxisKey;                                                  // 0x0000(0x0018) (Edit)
	float                                              AxisScale;                                                // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FKey                                        DisplayKey;                                               // 0x0020(0x0018) (Edit)
};

// ScriptStruct UnrealTournament.GhostMaster
// 0x0040
struct FGhostMaster
{
	class AUTCarriedObject*                            MyCarriedObject;                                          // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bSuppressTrails;                                          // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bShowTimer;                                               // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      TeamNum;                                                  // 0x000A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x000B(0x0001) MISSED OFFSET
	struct FVector_NetQuantize                         FlagLocation;                                             // 0x000C(0x000C)
	struct FVector_NetQuantize                         MidPoints[0x3];                                           // 0x0018(0x000C)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct UnrealTournament.UTObjectLibraryEntry
// 0x0020
struct FUTObjectLibraryEntry
{
	class UObjectLibrary*                              Library;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	EUtItemType                                        ItemType;                                                 // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	TArray<struct FString>                             LoadedPaths;                                              // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct UnrealTournament.ScoreboardContextMenuItem
// 0x0020
struct FScoreboardContextMenuItem
{
	struct FText                                       MenuText;                                                 // 0x0000(0x0018) (Edit, BlueprintVisible)
	int                                                ID;                                                       // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct UnrealTournament.EnemyDamageNumber
// 0x0028
struct FEnemyDamageNumber
{
	class APawn*                                       DamagedPawn;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              DamageTime;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      DamageAmount;                                             // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FVector                                     WorldPosition;                                            // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bArmorDamage;                                             // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bOverhealth;                                              // 0x0021(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0022(0x0006) MISSED OFFSET
};

// ScriptStruct UnrealTournament.DamageHudIndicator
// 0x0010
struct FDamageHudIndicator
{
	float                                              RotationAngle;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DamageAmount;                                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FadeTime;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bFriendlyFire;                                            // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bCausedByWorld;                                           // 0x000D(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
};

// ScriptStruct UnrealTournament.QStatLayoutInfo
// 0x0048
struct FQStatLayoutInfo
{
	struct FName                                       Tag;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHorizontalBorder;                                        // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FVector2D                                   HealthOffset;                                             // 0x000C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ArmorOffset;                                              // 0x0014(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   AmmoOffset;                                               // 0x001C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   FlagOffset;                                               // 0x0024(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   PowerupOffset;                                            // 0x002C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   BootsOffset;                                              // 0x0034(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   BoostProvidedPowerupOffset;                               // 0x003C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFollowRotation;                                          // 0x0044(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
};

// ScriptStruct UnrealTournament.WeaponGroupInfo
// 0x0028
struct FWeaponGroupInfo
{
	TArray<class UClass*>                              WeaponClasses;                                            // 0x0000(0x0010) (ZeroConstructor)
	TArray<class AUTWeapon*>                           Weapons;                                                  // 0x0010(0x0010) (ZeroConstructor)
	int                                                Group;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct UnrealTournament.LocalizedMessageData
// 0x0118
struct FLocalizedMessageData
{
	class UClass*                                      MessageClass;                                             // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MessageIndex;                                             // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FText                                       Text;                                                     // 0x0010(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       EmphasisText;                                             // 0x0028(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       PrefixText;                                               // 0x0040(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       PostfixText;                                              // 0x0058(0x0018) (BlueprintVisible, BlueprintReadOnly)
	float                                              LifeLeft;                                                 // 0x0070(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LifeSpan;                                                 // 0x0074(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ScaleInTime;                                              // 0x0078(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ScaleInSize;                                              // 0x007C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class APlayerState*                                RelatedPlayerState_2;                                     // 0x0080(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class APlayerState*                                RelatedPlayerState_3;                                     // 0x0088(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UObject*                                     OptionalObject;                                           // 0x0090(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                DrawColor;                                                // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                EmphasisColor;                                            // 0x00A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFont*                                       DisplayFont;                                              // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TextWidth;                                                // 0x00C0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TextHeight;                                               // 0x00C4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHasBeenRendered;                                         // 0x00C8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00C9(0x0003) MISSED OFFSET
	int                                                MessageCount;                                             // 0x00CC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RequestedSlot;                                            // 0x00D0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ShadowDirection;                                          // 0x00D4(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UUTUMGHudWidget>              UMGWidget;                                                // 0x00DC(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET
	struct FAnnouncementInfo                           AnnouncementInfo;                                         // 0x00E8(0x0030)
};

// ScriptStruct UnrealTournament.AnnouncementSlot
// 0x0018
struct FAnnouncementSlot
{
	struct FName                                       MessageArea;                                              // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHasBeenRendered;                                         // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              SlotYPosition;                                            // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CurrentMessageIndex;                                      // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct UnrealTournament.LineUpSlot
// 0x0050
struct FLineUpSlot
{
	struct FTransform                                  SpotLocation;                                             // 0x0000(0x0030) (IsPlainOldData)
	class AController*                                 ControllerInSpot;                                         // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	class AUTCharacter*                                CharacterInSpot;                                          // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                TeamNumOfSlot;                                            // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0044(0x000C) MISSED OFFSET
};

// ScriptStruct UnrealTournament.ImpactEffectNamedParameters
// 0x0010
struct FImpactEffectNamedParameters
{
	TArray<struct FParticleSysParam>                   ParticleParams;                                           // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct UnrealTournament.RocketFireMode
// 0x0038
struct FRocketFireMode
{
	struct FText                                       DisplayString;                                            // 0x0000(0x0018) (Edit, BlueprintVisible)
	class UClass*                                      ProjClass;                                                // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  FPFireSound;                                              // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  FireSound;                                                // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanBeSeekingRocket;                                      // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCauseMuzzleFlash;                                        // 0x0031(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0032(0x0002) MISSED OFFSET
	float                                              Spread;                                                   // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UnrealTournament.RepCollisionShape
// 0x0010
struct FRepCollisionShape
{
	unsigned char                                      ShapeType;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector_NetQuantize10                       Dimensions;                                               // 0x0004(0x000C)
};

// ScriptStruct UnrealTournament.CustomKeyBinding
// 0x0030
struct FCustomKeyBinding
{
	struct FName                                       KeyName;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputEvent>                           EventType;                                                // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     Command;                                                  // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     FriendlyName;                                             // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct UnrealTournament.UTChallengeResult
// 0x0018
struct FUTChallengeResult
{
	struct FName                                       Tag;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                Stars;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FDateTime                                   LastUpdate;                                               // 0x0010(0x0008) (ZeroConstructor)
};

// ScriptStruct UnrealTournament.UTDailyChallengeUnlock
// 0x0010
struct FUTDailyChallengeUnlock
{
	struct FName                                       Tag;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FDateTime                                   UnlockTime;                                               // 0x0008(0x0008) (ZeroConstructor)
};

// ScriptStruct UnrealTournament.KeyConfigurationInfo
// 0x00B8
struct FKeyConfigurationInfo
{
	struct FName                                       GameActionTag;                                            // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EControlCategory>                      Category;                                                 // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FText                                       MenuText;                                                 // 0x0010(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FKey                                        PrimaryKey;                                               // 0x0028(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FKey                                        SecondaryKey;                                             // 0x0040(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FKey                                        GamepadKey;                                               // 0x0058(0x0018) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bShowInUI : 1;                                            // 0x0070(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bOptional : 1;                                            // 0x0070(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
	TArray<struct FInputActionKeyMapping>              ActionMappings;                                           // 0x0078(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FInputAxisKeyMapping>                AxisMappings;                                             // 0x0088(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FCustomKeyBinding>                   CustomBindings;                                           // 0x0098(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FCustomKeyBinding>                   SpectatorBindings;                                        // 0x00A8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct UnrealTournament.TutorialData
// 0x0050
struct FTutorialData
{
	struct FName                                       Tag;                                                      // 0x0000(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	uint16_t                                           Mask;                                                     // 0x0008(0x0002) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	struct FString                                     Map;                                                      // 0x0010(0x0010) (ZeroConstructor, Config)
	struct FString                                     LaunchArgs;                                               // 0x0020(0x0010) (ZeroConstructor, Config)
	struct FString                                     LoadingMovie;                                             // 0x0030(0x0010) (ZeroConstructor, Config)
	struct FString                                     LoadingText;                                              // 0x0040(0x0010) (ZeroConstructor, Config)
};

// ScriptStruct UnrealTournament.UTGameModeCountStorage
// 0x0018
struct FUTGameModeCountStorage
{
	struct FString                                     GameModeClass;                                            // 0x0000(0x0010) (ZeroConstructor)
	int                                                PlayCount;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct UnrealTournament.EmptyServerReservation
// 0x000C
struct FEmptyServerReservation
{
	int                                                PlaylistId;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TeamElo;                                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bRanked;                                                  // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bMakePrivate;                                             // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
};

// ScriptStruct UnrealTournament.UTSearchPassParams
// 0x0028
struct FUTSearchPassParams
{
	int                                                ControllerId;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       SessionName;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     BestDatacenterId;                                         // 0x0010(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct UnrealTournament.UTSearchPassState
// 0x0030
struct FUTSearchPassState
{
	int                                                BestSessionIdx;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     WUIDLockSemaphore;                                        // 0x0008(0x0010) (ZeroConstructor)
	bool                                               bWasCanceled;                                             // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bWasFailure;                                              // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMatchmakingState>                     MatchmakingState;                                         // 0x001A(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPartyReservationResult>               LastBeaconResponse;                                       // 0x001B(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x001C(0x0014) MISSED OFFSET
};

// ScriptStruct UnrealTournament.MatchmakingParams
// 0x0060
struct FMatchmakingParams
{
	int                                                ControllerId;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PartySize;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     DatacenterId;                                             // 0x0008(0x0010) (ZeroConstructor)
	int                                                PlaylistId;                                               // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bRanked;                                                  // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bSkipEloChecks;                                           // 0x001D(0x0001) (ZeroConstructor, IsPlainOldData)
	EMatchmakingFlags                                  Flags;                                                    // 0x001E(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x001F(0x0001) MISSED OFFSET
	struct FString                                     SessionId;                                                // 0x0020(0x0010) (ZeroConstructor)
	EMatchmakingStartLocation                          StartWith;                                                // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              ChanceToHostOverride;                                     // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TeamElo;                                                  // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EloRange;                                                 // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EloRangeRetries;                                          // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MinimumEloRangeBeforeHosting;                             // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EloSearchStep;                                            // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	struct FString                                     SessionIdToSkip;                                          // 0x0050(0x0010) (ZeroConstructor)
};

// ScriptStruct UnrealTournament.UTCachedMatchmakingSearchParams
// 0x0070
struct FUTCachedMatchmakingSearchParams
{
	EUTMatchmakingType                                 MatchmakingType;                                          // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FMatchmakingParams                          MatchmakingParams;                                        // 0x0008(0x0060)
	bool                                               bValid;                                                   // 0x0068(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
};

// ScriptStruct UnrealTournament.UTInviteSessionParams
// 0x0038
struct FUTInviteSessionParams
{
	TEnumAsByte<EMatchmakingState>                     State;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FText                                       FailureReason;                                            // 0x0008(0x0018)
	TEnumAsByte<EPartyReservationResult>               LastBeaconResponse;                                       // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x17];                                      // 0x0021(0x0017) MISSED OFFSET
};

// ScriptStruct UnrealTournament.ReplacementInfo
// 0x0020
struct FReplacementInfo
{
	struct FString                                     OldClassPath;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     NewClassPath;                                             // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct UnrealTournament.UTPartyRepState
// 0x0038 (0x0048 - 0x0010)
struct FUTPartyRepState : public FPartyState
{
	EUTPartyState                                      PartyProgression;                                         // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	EMatchmakingCompleteResult                         MatchmakingResult;                                        // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
	struct FString                                     SessionId;                                                // 0x0018(0x0010) (ZeroConstructor)
	struct FString                                     MatchmakingRegion;                                        // 0x0028(0x0010) (ZeroConstructor)
	int                                                MatchmakingPlayersNeeded;                                 // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bRanked;                                                  // 0x003C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	int                                                PlaylistId;                                               // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct UnrealTournament.UTPartyMemberRepState
// 0x0008 (0x0010 - 0x0008)
struct FUTPartyMemberRepState : public FPartyMemberRepState
{
	EUTPartyMemberLocation                             Location;                                                 // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct UnrealTournament.TimedImpactEffect
// 0x0018
struct FTimedImpactEffect
{
	class USceneComponent*                             EffectComp;                                               // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              CreationTime;                                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LifetimeScaling;                                          // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FadeMultipllier;                                          // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct UnrealTournament.TimedMaterialParameter
// 0x0020
struct FTimedMaterialParameter
{
	TWeakObjectPtr<class UMaterialInstanceDynamic>     MI;                                                       // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       ParamName;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UCurveBase*                                  ParamCurve;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              ElapsedTime;                                              // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bClearOnComplete;                                         // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct UnrealTournament.TimedLightParameter
// 0x0020
struct FTimedLightParameter
{
	TWeakObjectPtr<class ULightComponent>              Light;                                                    // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<ETimedLightParameter>                  Param;                                                    // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	class UCurveBase*                                  ParamCurve;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              ElapsedTime;                                              // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct UnrealTournament.WeaponLockerItem
// 0x0008
struct FWeaponLockerItem
{
	class UClass*                                      WeaponType;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UnrealTournament.RconPlayerData
// 0x0050
struct FRconPlayerData
{
	struct FString                                     PlayerName;                                               // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     PlayerId;                                                 // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     PlayerIP;                                                 // 0x0020(0x0010) (ZeroConstructor)
	int                                                ReportedRank;                                             // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bInInstance;                                              // 0x0034(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	struct FString                                     InstanceGuid;                                             // 0x0038(0x0010) (ZeroConstructor)
	bool                                               bSpectator;                                               // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
};

// ScriptStruct UnrealTournament.ChestResultEntryRow
// 0x0020
struct FChestResultEntryRow
{
	class UUtMcpDefinition*                            RewardItem;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct UnrealTournament.WidgetDataEntry
// 0x0010
struct FWidgetDataEntry
{
	struct FName                                       WidgetName;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      Widget;                                                   // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct UnrealTournament.Stat
// 0x001C
struct FStat
{
	int                                                StatData;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              WriteMultiplier;                                          // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FXPBreakdown                                XPPerPoint;                                               // 0x0008(0x0014) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UnrealTournament.MatchStats
// 0x0040
struct FMatchStats
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct UnrealTournament.MatchStatsPlayer
// 0x0038
struct FMatchStatsPlayer
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct UnrealTournament.ComponentBasedPosition
// 0x0038
struct FComponentBasedPosition
{
	TWeakObjectPtr<class USceneComponent>              Base;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Position;                                                 // 0x0008(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x24];                                      // 0x0014(0x0024) MISSED OFFSET
};

// ScriptStruct UnrealTournament.Line
// 0x0018
struct FLine
{
	struct FVector                                     A;                                                        // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     B;                                                        // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UnrealTournament.PlaylistItem
// 0x0050
struct FPlaylistItem
{
	int                                                PlaylistId;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bRanked;                                                  // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bSkipEloChecks;                                           // 0x0005(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	struct FString                                     TeamEloRating;                                            // 0x0008(0x0010) (ZeroConstructor)
	bool                                               bAllowBots;                                               // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	int                                                BotDifficulty;                                            // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     SlateBadgeName;                                           // 0x0020(0x0010) (ZeroConstructor)
	float                                              SortWeight;                                               // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FString                                     RulesetTag;                                               // 0x0038(0x0010) (ZeroConstructor)
	bool                                               bHideInUI;                                                // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
};

// ScriptStruct UnrealTournament.UTGameRulesetStorage
// 0x0010
struct FUTGameRulesetStorage
{
	TArray<struct FUTGameRuleset>                      Rules;                                                    // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct UnrealTournament.MCPAnnouncement
// 0x0038
struct FMCPAnnouncement
{
	struct FString                                     Title;                                                    // 0x0000(0x0010) (ZeroConstructor)
	struct FDateTime                                   StartDate;                                                // 0x0010(0x0008) (ZeroConstructor)
	struct FDateTime                                   EndDate;                                                  // 0x0018(0x0008) (ZeroConstructor)
	struct FString                                     AnnouncementURL;                                          // 0x0020(0x0010) (ZeroConstructor)
	float                                              MinHeight;                                                // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasAudio;                                                // 0x0034(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
};

// ScriptStruct UnrealTournament.MCPAnnouncementBlob
// 0x0010
struct FMCPAnnouncementBlob
{
	TArray<struct FMCPAnnouncement>                    Announcements;                                            // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct UnrealTournament.KeyConfigurationImportExportObject
// 0x0050
struct FKeyConfigurationImportExportObject
{
	struct FName                                       GameActionTag;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FKey                                        PrimaryKey;                                               // 0x0008(0x0018)
	struct FKey                                        SecondaryKey;                                             // 0x0020(0x0018)
	struct FKey                                        GamepadKey;                                               // 0x0038(0x0018)
};

// ScriptStruct UnrealTournament.KeyConfigurationImportExport
// 0x0010
struct FKeyConfigurationImportExport
{
	TArray<struct FKeyConfigurationImportExportObject> GameActions;                                              // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct UnrealTournament.ComMenuCommandList
// 0x00A0
struct FComMenuCommandList
{
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0000(0x00A0) MISSED OFFSET
};

// ScriptStruct UnrealTournament.ComMenuCommand
// 0x0020
struct FComMenuCommand
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct UnrealTournament.UTOnlineSettings
// 0x0028
struct FUTOnlineSettings
{
	TArray<int>                                        ActiveRankedPlaylists;                                    // 0x0000(0x0010) (ZeroConstructor)
	int                                                RankedEloRange;                                           // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RankedMinEloRangeBeforeHosting;                           // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RankedMinEloSearchStep;                                   // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                QMEloRange;                                               // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                QMMinEloRangeBeforeHosting;                               // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                QMMinEloSearchStep;                                       // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UnrealTournament.StoredUTChallengeInfo
// 0x0088
struct FStoredUTChallengeInfo
{
	struct FName                                       ChallengeName;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FUTChallengeInfo                            Challenge;                                                // 0x0008(0x0080)
};

// ScriptStruct UnrealTournament.MCPPulledData
// 0x0040
struct FMCPPulledData
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	int                                                ChallengeRevisionNumber;                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               RewardTags;                                               // 0x0008(0x0010) (ZeroConstructor)
	TArray<struct FStoredUTChallengeInfo>              Challenges;                                               // 0x0018(0x0010) (ZeroConstructor)
	int                                                FragCenterCounter;                                        // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CurrentVersionNumber;                                     // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     BuildNotesURL;                                            // 0x0030(0x0010) (ZeroConstructor)
};

// ScriptStruct UnrealTournament.UTRewardInfo
// 0x0020
struct FUTRewardInfo
{
	struct FLinearColor                                StarColor;                                                // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FName                                       StarEmptyStyleTag;                                        // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       StarCompletedStyleTag;                                    // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UnrealTournament.FlagInfo
// 0x0018
struct FFlagInfo
{
	struct FString                                     Title;                                                    // 0x0000(0x0010) (ZeroConstructor)
	int                                                ID;                                                       // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct UnrealTournament.ConfigMapInfo
// 0x0050
struct FConfigMapInfo
{
	struct FString                                     MapName;                                                  // 0x0000(0x0010) (ZeroConstructor, Config)
	struct FPackageRedirectReference                   Redirect;                                                 // 0x0010(0x0040) (Config)
};

// ScriptStruct UnrealTournament.UTRadialDamageEvent
// 0x0018 (0x0058 - 0x0040)
struct FUTRadialDamageEvent : public FRadialDamageEvent
{
	float                                              BaseMomentumMag;                                          // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bScaleMomentum;                                           // 0x0044(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	struct FVector_NetQuantizeNormal                   ShotDirection;                                            // 0x0048(0x000C)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct UnrealTournament.UTPointDamageEvent
// 0x0010 (0x00B8 - 0x00A8)
struct FUTPointDamageEvent : public FPointDamageEvent
{
	struct FVector                                     Momentum;                                                 // 0x00A8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
};

// ScriptStruct UnrealTournament.SelectedBot
// 0x0018
struct FSelectedBot
{
	struct FStringAssetReference                       BotAsset;                                                 // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      Team;                                                     // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct UnrealTournament.GameInstanceData
// 0x0010
struct FGameInstanceData
{
	class AUTLobbyMatchInfo*                           MatchInfo;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                InstancePort;                                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct UnrealTournament.PlaylistItemStorage
// 0x0010
struct FPlaylistItemStorage
{
	TArray<struct FPlaylistItem>                       NewItems;                                                 // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct UnrealTournament.QueuedCoolMoment
// 0x0020
struct FQueuedCoolMoment
{
	struct FUniqueNetIdRepl                            NetId;                                                    // 0x0000(0x0018)
	float                                              TimeToRewind;                                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct UnrealTournament.UTLootReward
// 0x0080
struct FUTLootReward
{
	class UUtMcpDefinition*                            ItemDefinition;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	int                                                Quantity;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FName                                       SourceName;                                               // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	int                                                Level;                                                    // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FString                                     LootGroupName;                                            // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate)
	bool                                               bIsMtxReward;                                             // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               bIsTimeCurrencyReward;                                    // 0x0031(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               bIsNegative;                                              // 0x0032(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4D];                                      // 0x0033(0x004D) MISSED OFFSET
};

// ScriptStruct UnrealTournament.UtLootNotification
// 0x0048
struct FUtLootNotification
{
	struct FString                                     LootSource;                                               // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     LootSourceInstance;                                       // 0x0010(0x0010) (ZeroConstructor)
	struct FMcpLootResult                              LootGranted;                                              // 0x0020(0x0020)
	int                                                Level;                                                    // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct UnrealTournament.UTPlayerInput_ActionMapping
// 0x0048
struct FUTPlayerInput_ActionMapping
{
	struct FName                                       Action;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FKey                                        Key;                                                      // 0x0008(0x0018) (Edit)
	struct FKey                                        ChordKey;                                                 // 0x0020(0x0018) (Edit)
	bool                                               bRequiresModifier;                                        // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              HoldTime;                                                 // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSkipAdvanced;                                            // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
};

// ScriptStruct UnrealTournament.UpdatedPlaylistEntry
// 0x0030
struct FUpdatedPlaylistEntry
{
	int                                                ID;                                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     ExtraCommandline;                                         // 0x0008(0x0010) (ZeroConstructor)
	TArray<struct FString>                             MapNames;                                                 // 0x0018(0x0010) (ZeroConstructor)
	bool                                               bSkipEloChecks;                                           // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct UnrealTournament.UpdatedPlaylists
// 0x0010
struct FUpdatedPlaylists
{
	TArray<struct FUpdatedPlaylistEntry>               PlaylistOverrides;                                        // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct UnrealTournament.LoginRewardData
// 0x0038 (0x0040 - 0x0008)
struct FLoginRewardData : public FTableRowBase
{
	int                                                Quantity;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TAssetPtr<class UUtMcpDefinition>                  SpecificItem;                                             // 0x0010(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FString                                     LootTierGroup;                                            // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct UnrealTournament.UTLoginRewardInfo
// 0x0048
struct FUTLoginRewardInfo
{
	int                                                Level;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FLoginRewardData                            LoginRewardRowData;                                       // 0x0008(0x0040)
};

// ScriptStruct UnrealTournament.UTLevelUpData
// 0x0088 (0x0090 - 0x0008)
struct FUTLevelUpData : public FTableRowBase
{
	int                                                Index;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     HeroName;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                XP;                                                       // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Quantity;                                                 // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class UUtMcpDefinition>                  SpecificItem;                                             // 0x0028(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FString                                     LootTierGroup;                                            // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                MasterQuantity;                                           // 0x0058(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	TAssetPtr<class UUtMcpDefinition>                  MasterSpecificItem;                                       // 0x0060(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FString                                     MasterLootTierGroup;                                      // 0x0080(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct UnrealTournament.UTLevelUpRewardInfo
// 0x0098
struct FUTLevelUpRewardInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FUTLevelUpData                              LevelUpRowData;                                           // 0x0008(0x0090) (Transient)
};

// ScriptStruct UnrealTournament.RewardSourceLoc
// 0x0018 (0x0020 - 0x0008)
struct FRewardSourceLoc : public FTableRowBase
{
	struct FText                                       Description;                                              // 0x0008(0x0018) (Edit)
};

// ScriptStruct UnrealTournament.RewardToSource
// 0x0020 (0x0028 - 0x0008)
struct FRewardToSource : public FTableRowBase
{
	struct FString                                     PersistentName;                                           // 0x0008(0x0010) (Edit, ZeroConstructor)
	struct FDataTableRowHandle                         RewardLocHandle;                                          // 0x0018(0x0010) (Edit)
};

// ScriptStruct UnrealTournament.UTBadgeRewardInfo
// 0x0008 (0x0068 - 0x0060)
struct FUTBadgeRewardInfo : public FUTRewardTypeInfo
{
	int                                                MinLevel;                                                 // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
};

// ScriptStruct UnrealTournament.UTLootCrateRewardDisplay
// 0x0018
struct FUTLootCrateRewardDisplay
{
	struct FString                                     ReplacementString;                                        // 0x0000(0x0010) (Edit, ZeroConstructor)
	class UUtMcpDefinition*                            ReplacementReward;                                        // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UnrealTournament.PendingRedirect
// 0x0038
struct FPendingRedirect
{
	struct FString                                     FileURL;                                                  // 0x0000(0x0010) (ZeroConstructor)
	TEnumAsByte<ERedirectStatus>                       Status;                                                   // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0011(0x0017) MISSED OFFSET
	struct FString                                     RequiredMD5;                                              // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct UnrealTournament.StatsFontInfo
// 0x0038
struct FStatsFontInfo
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct UnrealTournament.SelectionObject
// 0x0020
struct FSelectionObject
{
	TWeakObjectPtr<class AUTPlayerState>               ScoreOwner;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FVector4                                    ScoreBounds;                                              // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UnrealTournament.RadialSegment
// 0x0010
struct FRadialSegment
{
	TArray<struct FVector2D>                           Angles;                                                   // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct UnrealTournament.ClickElement
// 0x0030
struct FClickElement
{
	struct FString                                     Command;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FVector4                                    Bounds;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AUTPlayerState*                              SelectedPlayer;                                           // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct UnrealTournament.WeaponBarCell
// 0x0028
struct FWeaponBarCell
{
	struct FVector2D                                   DrawPosition;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   DrawSize;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class AUTWeapon*                                   Weapon;                                                   // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      WeaponClass;                                              // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                WeaponGroup;                                              // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct UnrealTournament.ComData
// 0x0020
struct FComData
{
	struct FText                                       ToolTip;                                                  // 0x0000(0x0018)
	uint32_t                                           Switch;                                                   // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct UnrealTournament.RankedLeagueProgress
// 0x001C
struct FRankedLeagueProgress
{
	int                                                LeaguePlacementMatches;                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LeaguePoints;                                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LeagueTier;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LeagueDivision;                                           // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LeaguePromotionMatchesAttempted;                          // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LeaguePromotionMatchesWon;                                // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bLeaguePromotionSeries;                                   // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
};

// ScriptStruct UnrealTournament.MMREntry
// 0x0008
struct FMMREntry
{
	int                                                MMR;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MatchesPlayed;                                            // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UnrealTournament.LevelUpRewardNotifyPayload
// 0x0018
struct FLevelUpRewardNotifyPayload
{
	int                                                Level;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     RewardID;                                                 // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct UnrealTournament.XPProgressNotifyPayload
// 0x0018
struct FXPProgressNotifyPayload
{
	int64_t                                            PrevXP;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            XP;                                                       // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                PrevLevel;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UnrealTournament.UTFriend
// 0x0028
struct FUTFriend
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     DisplayName;                                              // 0x0010(0x0010) (ZeroConstructor)
	bool                                               bActualFriend;                                            // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsOnline;                                                // 0x0021(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsPlayingThisGame;                                       // 0x0022(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0023(0x0005) MISSED OFFSET
};

// ScriptStruct UnrealTournament.MMAttemptState
// 0x000C
struct FMMAttemptState
{
	int                                                BestSessionIdx;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumSearchResults;                                         // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMatchmakingState>                     State;                                                    // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPartyReservationResult>               LastBeaconResponse;                                       // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
};

// ScriptStruct UnrealTournament.AccountLeague
// 0x001C
struct FAccountLeague
{
	int                                                Tier;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Division;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Points;                                                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IsInPromotionSeries;                                      // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	int                                                PromotionMatchesAttempted;                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PromotionMatchesWon;                                      // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlacementMatchesAttempted;                                // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UnrealTournament.BulkAccountMmr
// 0x0030
struct FBulkAccountMmr
{
	TArray<struct FString>                             RatingTypes;                                              // 0x0000(0x0010) (ZeroConstructor)
	TArray<int>                                        Ratings;                                                  // 0x0010(0x0010) (ZeroConstructor)
	TArray<int>                                        NumGamesPlayed;                                           // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct UnrealTournament.AccountMmr
// 0x0008
struct FAccountMmr
{
	int                                                Rating;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumGamesPlayed;                                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UnrealTournament.BulkAccountMmrQuery
// 0x0010
struct FBulkAccountMmrQuery
{
	TArray<struct FString>                             RatingTypes;                                              // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct UnrealTournament.HighestMmr
// 0x0004
struct FHighestMmr
{
	int                                                MMR;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UnrealTournament.TeamElo
// 0x0004
struct FTeamElo
{
	int                                                Rating;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UnrealTournament.RankedMatchInfo
// 0x0018
struct FRankedMatchInfo
{
	struct FString                                     SessionId;                                                // 0x0000(0x0010) (ZeroConstructor)
	float                                              RedScore;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MatchLengthSeconds;                                       // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UnrealTournament.RankedTeamMemberInfo
// 0x0018
struct FRankedTeamMemberInfo
{
	struct FString                                     AccountId;                                                // 0x0000(0x0010) (ZeroConstructor)
	int                                                Score;                                                    // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IsBot;                                                    // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct UnrealTournament.RankedTeamInfo
// 0x0018
struct FRankedTeamInfo
{
	TArray<struct FRankedTeamMemberInfo>               Members;                                                  // 0x0000(0x0010) (ZeroConstructor)
	int                                                SocialPartySize;                                          // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct UnrealTournament.RankedMatchResult
// 0x0058
struct FRankedMatchResult
{
	struct FString                                     RatingType;                                               // 0x0000(0x0010) (ZeroConstructor)
	struct FRankedMatchInfo                            MatchInfo;                                                // 0x0010(0x0018)
	struct FRankedTeamInfo                             RedTeam;                                                  // 0x0028(0x0018)
	struct FRankedTeamInfo                             BlueTeam;                                                 // 0x0040(0x0018)
};

// ScriptStruct UnrealTournament.WaitTimeInfo
// 0x0020
struct FWaitTimeInfo
{
	struct FString                                     RatingType;                                               // 0x0000(0x0010) (ZeroConstructor)
	double                                             AverageWaitTimeSecs;                                      // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                NumSamples;                                               // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct UnrealTournament.EstimatedWaitTimeInfo
// 0x0010
struct FEstimatedWaitTimeInfo
{
	TArray<struct FWaitTimeInfo>                       WaitTimes;                                                // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct UnrealTournament.PartyReservationTotalSize
// 0x000C
struct FPartyReservationTotalSize
{
	int                                                ReservationIndex;                                         // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PartySize;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Skill;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UnrealTournament.TeamBalanceInfo
// 0x000C
struct FTeamBalanceInfo
{
	int                                                TeamIndex;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TotalPlayers;                                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TotalSkill;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UnrealTournament.PlayerGameData
// 0x0020
struct FPlayerGameData
{
	struct FUniqueNetIdRepl                            UniqueId;                                                 // 0x0000(0x0018) (Transient)
	int                                                Skill;                                                    // 0x0018(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct UnrealTournament.DefaultTextureDataEntry
// 0x0010
struct FDefaultTextureDataEntry
{
	struct FName                                       DefaultTextureName;                                       // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  DefaultTexture;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

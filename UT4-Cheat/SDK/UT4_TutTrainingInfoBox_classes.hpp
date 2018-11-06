#pragma once

// Unreal Tournament 4 (Pre Alpha) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TutTrainingInfoBox.TutTrainingInfoBox_C
// 0x02F9 (0x0529 - 0x0230)
class UTutTrainingInfoBox_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                     Button_58;                                                // 0x0238(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      Image_59;                                                 // 0x0240(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      Image_72;                                                 // 0x0248(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      Image_348;                                                // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FSlateBrush                                 LevelImage;                                               // 0x0258(0x0090) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       SectionName;                                              // 0x02E8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       DescriptionText;                                          // 0x0300(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FName                                       LevelName;                                                // 0x0318(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       ToolTip_TokenCounter;                                     // 0x0320(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       ToolTip_HasPlayedTut;                                     // 0x0338(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FString                                     LevelArguments;                                           // 0x0350(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FText                                       TokenCounterDisplay;                                      // 0x0360(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FName>                               TokenGUIDArray;                                           // 0x0378(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                CoinsPickedUp;                                            // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x038C(0x0004) MISSED OFFSET
	struct FText                                       BestTime;                                                 // 0x0390(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                                 Brush_HasPlayedTut;                                       // 0x03A8(0x0090) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                                 Brush_HasNotPlayedTut;                                    // 0x0438(0x0090) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              BestTimeRaw;                                              // 0x04C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04CC(0x0004) MISSED OFFSET
	struct FText                                       ToolTip_HasNotPlayedTut;                                  // 0x04D0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       ToolTip_BestRun;                                          // 0x04E8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FName                                       TimingSectionID;                                          // 0x0500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShowBestRun;                                             // 0x0508(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bReachedEnd;                                              // 0x0509(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x050A(0x0002) MISSED OFFSET
	int                                                TutorialMask;                                             // 0x050C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     LoadingMovie;                                             // 0x0510(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       TutorialTag;                                              // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShowBestTime;                                             // 0x0528(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TutTrainingInfoBox.TutTrainingInfoBox_C");
		return ptr;
	}


	ESlateVisibility GetVisibility_1();
	bool HasBeenPlayed();
	class UUTLocalPlayer* GetUTLocalPlayer();
	void Initialize(const struct FText& inSectionName, const struct FText& inDescription, const struct FName& inLevelName, const struct FSlateBrush& inLevelScreenshot, const struct FName& inTutorialTag);
	struct FText GetToolTip_PlayedTut();
	struct FSlateBrush GetBrush_PlayedTut();
	struct FText GetText_BestTimeNumberDisplay();
	void GatherTokenDisplayInfo();
	struct FText GetText_TokenNumberDisplay();
	struct FText GetToolTipText_BestRun();
	struct FText GetToolTipText_TokenCounter();
	struct FText GetText_DescriptionText();
	struct FText GetText_SectionName();
	struct FSlateBrush GetBrush_LevelImage();
	void BndEvt__Button_57_K2Node_ComponentBoundEvent_82_OnButtonPressedEvent__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_TutTrainingInfoBox(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// WidgetBlueprintGeneratedClass Mutator_WeaponReplacementUI_Replacement.Mutator_WeaponReplacementUI_Replacement_C
// 0x0021 (0x0261 - 0x0240)
class UMutator_WeaponReplacementUI_Replacement_C : public UUTWeaponReplacementUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UComboBoxString*                             ComboBoxString_ReplaceWith_2;                             // 0x0248(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UComboBoxString*                             ComboBoxString_ToReplace_2;                               // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UMutator_WeaponReplacementUI_Base_C*         ParentUserWidget;                                         // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIgnoreSelectionChange;                                   // 0x0260(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Mutator_WeaponReplacementUI_Replacement.Mutator_WeaponReplacementUI_Replacement_C");
		return ptr;
	}


	void GetSelectedOptions(struct FString* ToReplace, struct FString* ReplaceWith);
	void SetParentUserWidget(class UMutator_WeaponReplacementUI_C* ParentUserWidget);
	void Set_Selected_Options(const struct FString& SelectedToReplace, const struct FString& SelectedReplaceWith);
	void Construct();
	void BndEvt__ComboBoxString_ReplaceWith_1_K2Node_ComponentBoundEvent_52_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);
	void BndEvt__ComboBoxString_ToReplace_1_K2Node_ComponentBoundEvent_172_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);
	void ExecuteUbergraph_Mutator_WeaponReplacementUI_Replacement(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

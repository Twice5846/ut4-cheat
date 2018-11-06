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

// Function Mutator_WeaponReplacementUI_Replacement.Mutator_WeaponReplacementUI_Replacement_C.GetSelectedOptions
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ToReplace                      (Parm, OutParm, ZeroConstructor)
// struct FString                 ReplaceWith                    (Parm, OutParm, ZeroConstructor)

void UMutator_WeaponReplacementUI_Replacement_C::GetSelectedOptions(struct FString* ToReplace, struct FString* ReplaceWith)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mutator_WeaponReplacementUI_Replacement.Mutator_WeaponReplacementUI_Replacement_C.GetSelectedOptions");

	UMutator_WeaponReplacementUI_Replacement_C_GetSelectedOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ToReplace != nullptr)
		*ToReplace = params.ToReplace;
	if (ReplaceWith != nullptr)
		*ReplaceWith = params.ReplaceWith;
}


// Function Mutator_WeaponReplacementUI_Replacement.Mutator_WeaponReplacementUI_Replacement_C.SetParentUserWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMutator_WeaponReplacementUI_C* ParentUserWidget               (Parm, ZeroConstructor, IsPlainOldData)

void UMutator_WeaponReplacementUI_Replacement_C::SetParentUserWidget(class UMutator_WeaponReplacementUI_C* ParentUserWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mutator_WeaponReplacementUI_Replacement.Mutator_WeaponReplacementUI_Replacement_C.SetParentUserWidget");

	UMutator_WeaponReplacementUI_Replacement_C_SetParentUserWidget_Params params;
	params.ParentUserWidget = ParentUserWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mutator_WeaponReplacementUI_Replacement.Mutator_WeaponReplacementUI_Replacement_C.Set Selected Options
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 SelectedToReplace              (Parm, ZeroConstructor)
// struct FString                 SelectedReplaceWith            (Parm, ZeroConstructor)

void UMutator_WeaponReplacementUI_Replacement_C::Set_Selected_Options(const struct FString& SelectedToReplace, const struct FString& SelectedReplaceWith)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mutator_WeaponReplacementUI_Replacement.Mutator_WeaponReplacementUI_Replacement_C.Set Selected Options");

	UMutator_WeaponReplacementUI_Replacement_C_Set_Selected_Options_Params params;
	params.SelectedToReplace = SelectedToReplace;
	params.SelectedReplaceWith = SelectedReplaceWith;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mutator_WeaponReplacementUI_Replacement.Mutator_WeaponReplacementUI_Replacement_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMutator_WeaponReplacementUI_Replacement_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mutator_WeaponReplacementUI_Replacement.Mutator_WeaponReplacementUI_Replacement_C.Construct");

	UMutator_WeaponReplacementUI_Replacement_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mutator_WeaponReplacementUI_Replacement.Mutator_WeaponReplacementUI_Replacement_C.BndEvt__ComboBoxString_ReplaceWith_1_K2Node_ComponentBoundEvent_52_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (Parm, ZeroConstructor, IsPlainOldData)

void UMutator_WeaponReplacementUI_Replacement_C::BndEvt__ComboBoxString_ReplaceWith_1_K2Node_ComponentBoundEvent_52_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mutator_WeaponReplacementUI_Replacement.Mutator_WeaponReplacementUI_Replacement_C.BndEvt__ComboBoxString_ReplaceWith_1_K2Node_ComponentBoundEvent_52_OnSelectionChangedEvent__DelegateSignature");

	UMutator_WeaponReplacementUI_Replacement_C_BndEvt__ComboBoxString_ReplaceWith_1_K2Node_ComponentBoundEvent_52_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mutator_WeaponReplacementUI_Replacement.Mutator_WeaponReplacementUI_Replacement_C.BndEvt__ComboBoxString_ToReplace_1_K2Node_ComponentBoundEvent_172_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (Parm, ZeroConstructor, IsPlainOldData)

void UMutator_WeaponReplacementUI_Replacement_C::BndEvt__ComboBoxString_ToReplace_1_K2Node_ComponentBoundEvent_172_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mutator_WeaponReplacementUI_Replacement.Mutator_WeaponReplacementUI_Replacement_C.BndEvt__ComboBoxString_ToReplace_1_K2Node_ComponentBoundEvent_172_OnSelectionChangedEvent__DelegateSignature");

	UMutator_WeaponReplacementUI_Replacement_C_BndEvt__ComboBoxString_ToReplace_1_K2Node_ComponentBoundEvent_172_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mutator_WeaponReplacementUI_Replacement.Mutator_WeaponReplacementUI_Replacement_C.ExecuteUbergraph_Mutator_WeaponReplacementUI_Replacement
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UMutator_WeaponReplacementUI_Replacement_C::ExecuteUbergraph_Mutator_WeaponReplacementUI_Replacement(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mutator_WeaponReplacementUI_Replacement.Mutator_WeaponReplacementUI_Replacement_C.ExecuteUbergraph_Mutator_WeaponReplacementUI_Replacement");

	UMutator_WeaponReplacementUI_Replacement_C_ExecuteUbergraph_Mutator_WeaponReplacementUI_Replacement_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

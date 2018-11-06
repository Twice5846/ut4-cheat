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

// Function ArenaMutatorMenu.ArenaMutatorMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UArenaMutatorMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArenaMutatorMenu.ArenaMutatorMenu_C.Construct");

	UArenaMutatorMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArenaMutatorMenu.ArenaMutatorMenu_C.BndEvt__Button_8_K2Node_ComponentBoundEvent_34_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UArenaMutatorMenu_C::BndEvt__Button_8_K2Node_ComponentBoundEvent_34_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArenaMutatorMenu.ArenaMutatorMenu_C.BndEvt__Button_8_K2Node_ComponentBoundEvent_34_OnButtonClickedEvent__DelegateSignature");

	UArenaMutatorMenu_C_BndEvt__Button_8_K2Node_ComponentBoundEvent_34_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArenaMutatorMenu.ArenaMutatorMenu_C.BndEvt__TranslocatorCheck_K2Node_ComponentBoundEvent_106_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (Parm, ZeroConstructor, IsPlainOldData)

void UArenaMutatorMenu_C::BndEvt__TranslocatorCheck_K2Node_ComponentBoundEvent_106_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArenaMutatorMenu.ArenaMutatorMenu_C.BndEvt__TranslocatorCheck_K2Node_ComponentBoundEvent_106_OnCheckBoxComponentStateChanged__DelegateSignature");

	UArenaMutatorMenu_C_BndEvt__TranslocatorCheck_K2Node_ComponentBoundEvent_106_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArenaMutatorMenu.ArenaMutatorMenu_C.BndEvt__WeaponCombo_K2Node_ComponentBoundEvent_105_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (Parm, ZeroConstructor, IsPlainOldData)

void UArenaMutatorMenu_C::BndEvt__WeaponCombo_K2Node_ComponentBoundEvent_105_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArenaMutatorMenu.ArenaMutatorMenu_C.BndEvt__WeaponCombo_K2Node_ComponentBoundEvent_105_OnSelectionChangedEvent__DelegateSignature");

	UArenaMutatorMenu_C_BndEvt__WeaponCombo_K2Node_ComponentBoundEvent_105_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArenaMutatorMenu.ArenaMutatorMenu_C.ExecuteUbergraph_ArenaMutatorMenu
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UArenaMutatorMenu_C::ExecuteUbergraph_ArenaMutatorMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArenaMutatorMenu.ArenaMutatorMenu_C.ExecuteUbergraph_ArenaMutatorMenu");

	UArenaMutatorMenu_C_ExecuteUbergraph_ArenaMutatorMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

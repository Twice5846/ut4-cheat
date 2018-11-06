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

// Function Mutator_WeaponReplacementUI.Mutator_WeaponReplacementUI_C.Add Replacement Row
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMutator_WeaponReplacementUI_Replacement_C* WidgetReference                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMutator_WeaponReplacementUI_C::Add_Replacement_Row(class UMutator_WeaponReplacementUI_Replacement_C** WidgetReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mutator_WeaponReplacementUI.Mutator_WeaponReplacementUI_C.Add Replacement Row");

	UMutator_WeaponReplacementUI_C_Add_Replacement_Row_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WidgetReference != nullptr)
		*WidgetReference = params.WidgetReference;
}


// Function Mutator_WeaponReplacementUI.Mutator_WeaponReplacementUI_C.OnGenerateWidget_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Item                           (Parm, ZeroConstructor)
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* UMutator_WeaponReplacementUI_C::OnGenerateWidget_1(const struct FString& Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mutator_WeaponReplacementUI.Mutator_WeaponReplacementUI_C.OnGenerateWidget_1");

	UMutator_WeaponReplacementUI_C_OnGenerateWidget_1_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Mutator_WeaponReplacementUI.Mutator_WeaponReplacementUI_C.BndEvt__Button_66_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMutator_WeaponReplacementUI_C::BndEvt__Button_66_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mutator_WeaponReplacementUI.Mutator_WeaponReplacementUI_C.BndEvt__Button_66_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature");

	UMutator_WeaponReplacementUI_C_BndEvt__Button_66_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mutator_WeaponReplacementUI.Mutator_WeaponReplacementUI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMutator_WeaponReplacementUI_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mutator_WeaponReplacementUI.Mutator_WeaponReplacementUI_C.Construct");

	UMutator_WeaponReplacementUI_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mutator_WeaponReplacementUI.Mutator_WeaponReplacementUI_C.ExecuteUbergraph_Mutator_WeaponReplacementUI
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UMutator_WeaponReplacementUI_C::ExecuteUbergraph_Mutator_WeaponReplacementUI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mutator_WeaponReplacementUI.Mutator_WeaponReplacementUI_C.ExecuteUbergraph_Mutator_WeaponReplacementUI");

	UMutator_WeaponReplacementUI_C_ExecuteUbergraph_Mutator_WeaponReplacementUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

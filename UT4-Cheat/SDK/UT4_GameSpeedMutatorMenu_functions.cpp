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

// Function GameSpeedMutatorMenu.GameSpeedMutatorMenu_C.GetValue_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGameSpeedMutatorMenu_C::GetValue_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameSpeedMutatorMenu.GameSpeedMutatorMenu_C.GetValue_1");

	UGameSpeedMutatorMenu_C_GetValue_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameSpeedMutatorMenu.GameSpeedMutatorMenu_C.GetText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UGameSpeedMutatorMenu_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameSpeedMutatorMenu.GameSpeedMutatorMenu_C.GetText_1");

	UGameSpeedMutatorMenu_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameSpeedMutatorMenu.GameSpeedMutatorMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGameSpeedMutatorMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameSpeedMutatorMenu.GameSpeedMutatorMenu_C.Construct");

	UGameSpeedMutatorMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameSpeedMutatorMenu.GameSpeedMutatorMenu_C.BndEvt__Button_66_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UGameSpeedMutatorMenu_C::BndEvt__Button_66_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameSpeedMutatorMenu.GameSpeedMutatorMenu_C.BndEvt__Button_66_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	UGameSpeedMutatorMenu_C_BndEvt__Button_66_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameSpeedMutatorMenu.GameSpeedMutatorMenu_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_98_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UGameSpeedMutatorMenu_C::BndEvt__Slider_0_K2Node_ComponentBoundEvent_98_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameSpeedMutatorMenu.GameSpeedMutatorMenu_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_98_OnFloatValueChangedEvent__DelegateSignature");

	UGameSpeedMutatorMenu_C_BndEvt__Slider_0_K2Node_ComponentBoundEvent_98_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameSpeedMutatorMenu.GameSpeedMutatorMenu_C.ExecuteUbergraph_GameSpeedMutatorMenu
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UGameSpeedMutatorMenu_C::ExecuteUbergraph_GameSpeedMutatorMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameSpeedMutatorMenu.GameSpeedMutatorMenu_C.ExecuteUbergraph_GameSpeedMutatorMenu");

	UGameSpeedMutatorMenu_C_ExecuteUbergraph_GameSpeedMutatorMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

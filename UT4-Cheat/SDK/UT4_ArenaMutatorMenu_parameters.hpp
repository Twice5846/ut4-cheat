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

// Function ArenaMutatorMenu.ArenaMutatorMenu_C.Construct
struct UArenaMutatorMenu_C_Construct_Params
{
};

// Function ArenaMutatorMenu.ArenaMutatorMenu_C.BndEvt__Button_8_K2Node_ComponentBoundEvent_34_OnButtonClickedEvent__DelegateSignature
struct UArenaMutatorMenu_C_BndEvt__Button_8_K2Node_ComponentBoundEvent_34_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ArenaMutatorMenu.ArenaMutatorMenu_C.BndEvt__TranslocatorCheck_K2Node_ComponentBoundEvent_106_OnCheckBoxComponentStateChanged__DelegateSignature
struct UArenaMutatorMenu_C_BndEvt__TranslocatorCheck_K2Node_ComponentBoundEvent_106_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArenaMutatorMenu.ArenaMutatorMenu_C.BndEvt__WeaponCombo_K2Node_ComponentBoundEvent_105_OnSelectionChangedEvent__DelegateSignature
struct UArenaMutatorMenu_C_BndEvt__WeaponCombo_K2Node_ComponentBoundEvent_105_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArenaMutatorMenu.ArenaMutatorMenu_C.ExecuteUbergraph_ArenaMutatorMenu
struct UArenaMutatorMenu_C_ExecuteUbergraph_ArenaMutatorMenu_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

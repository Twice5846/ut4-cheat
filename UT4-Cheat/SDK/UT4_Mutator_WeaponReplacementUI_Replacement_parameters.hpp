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

// Function Mutator_WeaponReplacementUI_Replacement.Mutator_WeaponReplacementUI_Replacement_C.GetSelectedOptions
struct UMutator_WeaponReplacementUI_Replacement_C_GetSelectedOptions_Params
{
	struct FString                                     ToReplace;                                                // (Parm, OutParm, ZeroConstructor)
	struct FString                                     ReplaceWith;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Mutator_WeaponReplacementUI_Replacement.Mutator_WeaponReplacementUI_Replacement_C.SetParentUserWidget
struct UMutator_WeaponReplacementUI_Replacement_C_SetParentUserWidget_Params
{
	class UMutator_WeaponReplacementUI_C*              ParentUserWidget;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mutator_WeaponReplacementUI_Replacement.Mutator_WeaponReplacementUI_Replacement_C.Set Selected Options
struct UMutator_WeaponReplacementUI_Replacement_C_Set_Selected_Options_Params
{
	struct FString                                     SelectedToReplace;                                        // (Parm, ZeroConstructor)
	struct FString                                     SelectedReplaceWith;                                      // (Parm, ZeroConstructor)
};

// Function Mutator_WeaponReplacementUI_Replacement.Mutator_WeaponReplacementUI_Replacement_C.Construct
struct UMutator_WeaponReplacementUI_Replacement_C_Construct_Params
{
};

// Function Mutator_WeaponReplacementUI_Replacement.Mutator_WeaponReplacementUI_Replacement_C.BndEvt__ComboBoxString_ReplaceWith_1_K2Node_ComponentBoundEvent_52_OnSelectionChangedEvent__DelegateSignature
struct UMutator_WeaponReplacementUI_Replacement_C_BndEvt__ComboBoxString_ReplaceWith_1_K2Node_ComponentBoundEvent_52_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mutator_WeaponReplacementUI_Replacement.Mutator_WeaponReplacementUI_Replacement_C.BndEvt__ComboBoxString_ToReplace_1_K2Node_ComponentBoundEvent_172_OnSelectionChangedEvent__DelegateSignature
struct UMutator_WeaponReplacementUI_Replacement_C_BndEvt__ComboBoxString_ToReplace_1_K2Node_ComponentBoundEvent_172_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mutator_WeaponReplacementUI_Replacement.Mutator_WeaponReplacementUI_Replacement_C.ExecuteUbergraph_Mutator_WeaponReplacementUI_Replacement
struct UMutator_WeaponReplacementUI_Replacement_C_ExecuteUbergraph_Mutator_WeaponReplacementUI_Replacement_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

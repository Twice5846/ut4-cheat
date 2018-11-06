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

// Function Mutator_WeaponReplacementUI_Base.Mutator_WeaponReplacementUI_Base_C.Add Replacement Row
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMutator_WeaponReplacementUI_Replacement_C* WidgetReference                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMutator_WeaponReplacementUI_Base_C::Add_Replacement_Row(class UMutator_WeaponReplacementUI_Replacement_C** WidgetReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mutator_WeaponReplacementUI_Base.Mutator_WeaponReplacementUI_Base_C.Add Replacement Row");

	UMutator_WeaponReplacementUI_Base_C_Add_Replacement_Row_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WidgetReference != nullptr)
		*WidgetReference = params.WidgetReference;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

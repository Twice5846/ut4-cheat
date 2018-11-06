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

// BlueprintGeneratedClass Mutator_WeaponReplacementUI_Base.Mutator_WeaponReplacementUI_Base_C
// 0x0000 (0x0240 - 0x0240)
class UMutator_WeaponReplacementUI_Base_C : public UUTWeaponReplacementUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mutator_WeaponReplacementUI_Base.Mutator_WeaponReplacementUI_Base_C");
		return ptr;
	}


	void Add_Replacement_Row(class UMutator_WeaponReplacementUI_Replacement_C** WidgetReference);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

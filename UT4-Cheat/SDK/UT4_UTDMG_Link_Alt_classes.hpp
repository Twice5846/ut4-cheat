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

// BlueprintGeneratedClass UTDMG_Link_Alt.UTDMG_Link_Alt_C
// 0x0000 (0x0168 - 0x0168)
class UUTDMG_Link_Alt_C : public UUTDamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass UTDMG_Link_Alt.UTDMG_Link_Alt_C");
		return ptr;
	}


	void PlayDeathEffects(class AUTCharacter** DyingPawn);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

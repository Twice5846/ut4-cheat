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

// BlueprintGeneratedClass BP_UTDmg_SniperHeadshot.BP_UTDmg_SniperHeadshot_C
// 0x0000 (0x0168 - 0x0168)
class UBP_UTDmg_SniperHeadshot_C : public UUTDmg_SniperHeadshot
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_UTDmg_SniperHeadshot.BP_UTDmg_SniperHeadshot_C");
		return ptr;
	}


	class UAnimMontage* GetDeathAnim(class AUTCharacter** DyingPawn);
	bool OverrideDeathSound(class AUTCharacter** Victim);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

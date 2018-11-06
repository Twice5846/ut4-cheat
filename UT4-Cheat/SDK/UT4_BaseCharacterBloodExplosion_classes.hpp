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

// BlueprintGeneratedClass BaseCharacterBloodExplosion.BaseCharacterBloodExplosion_C
// 0x0008 (0x03C0 - 0x03B8)
class ABaseCharacterBloodExplosion_C : public AUTImpactEffect
{
public:
	class UParticleSystemComponent*                    ParticleSystem1;                                          // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BaseCharacterBloodExplosion.BaseCharacterBloodExplosion_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

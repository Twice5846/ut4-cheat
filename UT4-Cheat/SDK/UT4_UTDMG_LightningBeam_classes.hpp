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

// BlueprintGeneratedClass UTDMG_LightningBeam.UTDMG_LightningBeam_C
// 0x0000 (0x0188 - 0x0188)
class UUTDMG_LightningBeam_C : public UUTDmgType_AttachParticles
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass UTDMG_LightningBeam.UTDMG_LightningBeam_C");
		return ptr;
	}


	void PlayDeathEffects(class AUTCharacter** DyingPawn);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

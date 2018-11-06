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

// BlueprintGeneratedClass BP_LightningRifle_Proj.BP_LightningRifle_Proj_C
// 0x0018 (0x0550 - 0x0538)
class ABP_LightningRifle_Proj_C : public AUTProj_Lightning
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0538(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             Audio;                                                    // 0x0540(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Flight;                                                   // 0x0548(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_LightningRifle_Proj.BP_LightningRifle_Proj_C");
		return ptr;
	}


	void UserConstructionScript();
	void DamageImpactedActor(class AActor** OtherActor, class UPrimitiveComponent** OtherComp, struct FVector* HitLocation, struct FVector* HitNormal);
	void ExecuteUbergraph_BP_LightningRifle_Proj(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

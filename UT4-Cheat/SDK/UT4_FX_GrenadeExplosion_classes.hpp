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

// BlueprintGeneratedClass FX_GrenadeExplosion.FX_GrenadeExplosion_C
// 0x0020 (0x03D8 - 0x03B8)
class AFX_GrenadeExplosion_C : public AUTImpactEffect
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                             Arrow;                                                    // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDecalComponent*                             Decal1;                                                   // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    RocketExplosion;                                          // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FX_GrenadeExplosion.FX_GrenadeExplosion_C");
		return ptr;
	}


	void ComponentCreated(class USceneComponent** NewComp, class UPrimitiveComponent** HitComp, class AActor** SpawnedBy, class AController** InstigatedBy, struct FImpactEffectNamedParameters* EffectParams);
	void UserConstructionScript();
	void ExecuteUbergraph_FX_GrenadeExplosion(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

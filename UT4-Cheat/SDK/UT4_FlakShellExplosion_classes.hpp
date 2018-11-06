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

// BlueprintGeneratedClass FlakShellExplosion.FlakShellExplosion_C
// 0x0010 (0x03C8 - 0x03B8)
class AFlakShellExplosion_C : public AUTImpactEffect
{
public:
	class UDecalComponent*                             Decal1;                                                   // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    FlakShell_explosion;                                      // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FlakShellExplosion.FlakShellExplosion_C");
		return ptr;
	}


	void ComponentCreated(class USceneComponent** NewComp, class UPrimitiveComponent** HitComp, class AActor** SpawnedBy, class AController** InstigatedBy, struct FImpactEffectNamedParameters* EffectParams);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

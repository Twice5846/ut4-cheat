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

// BlueprintGeneratedClass GrenadeExplode_Sticky.GrenadeExplode_Sticky_C
// 0x0010 (0x03C8 - 0x03B8)
class AGrenadeExplode_Sticky_C : public AUTImpactEffect
{
public:
	class UParticleSystemComponent*                    PS_Grenade_Explode;                                       // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GrenadeExplode_Sticky.GrenadeExplode_Sticky_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

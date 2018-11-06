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

// BlueprintGeneratedClass ImpactHammerShieldProj.ImpactHammerShieldProj_C
// 0x0020 (0x0590 - 0x0570)
class AImpactHammerShieldProj_C : public AUTProj_WeaponScreen
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0570(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Mesh;                                                     // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPointLightComponent*                        Light;                                                    // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StartingLightIntensity;                                   // 0x0588(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SimulatedRemainingLifespan;                               // 0x058C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ImpactHammerShieldProj.ImpactHammerShieldProj_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_ImpactHammerShieldProj(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

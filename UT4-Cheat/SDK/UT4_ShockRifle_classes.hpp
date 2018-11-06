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

// BlueprintGeneratedClass ShockRifle.ShockRifle_C
// 0x0050 (0x0CC0 - 0x0C70)
class AShockRifle_C : public AUTWeap_ShockRifle
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0C70(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    MF;                                                       // 0x0C78(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_0_EnergySweep_06C5EE6B45AD8A932646D7BF7DEE9C67;  // 0x0C80(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_0_EnergySweepSmall_06C5EE6B45AD8A932646D7BF7DEE9C67;// 0x0C84(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_0_TimeAdd_06C5EE6B45AD8A932646D7BF7DEE9C67;      // 0x0C88(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_0_WPO_Lerp_06C5EE6B45AD8A932646D7BF7DEE9C67;     // 0x0C8C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_06C5EE6B45AD8A932646D7BF7DEE9C67;   // 0x0C90(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0C91(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0C98(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Weapon_MAT;                                               // 0x0CA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    AmmoGlow_Mat;                                             // 0x0CA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LowAmmoWarning;                                           // 0x0CB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0CB4(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    AmmoCount_MAT;                                            // 0x0CB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ShockRifle.ShockRifle_C");
		return ptr;
	}


	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void OnStartedFiring();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_ShockRifle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

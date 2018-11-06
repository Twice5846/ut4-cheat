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

// BlueprintGeneratedClass BP_LightningRifle.BP_LightningRifle_C
// 0x0020 (0x0C90 - 0x0C70)
class ABP_LightningRifle_C : public AUTWeap_LightningRifle
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0C70(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    PFX_LR_1P_Tip_Right;                                      // 0x0C78(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    PFX_LR_1P_Tip_Left;                                       // 0x0C80(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    MF;                                                       // 0x0C88(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_LightningRifle.BP_LightningRifle_C");
		return ptr;
	}


	bool CanAttack(class AActor** Target, struct FVector* TargetLoc, bool* bDirectOnly, bool* bPreferCurrentMode, unsigned char* BestFireMode, struct FVector* OptimalTargetLoc);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void TipArc();
	void OnBringUp();
	void ExecuteUbergraph_BP_LightningRifle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

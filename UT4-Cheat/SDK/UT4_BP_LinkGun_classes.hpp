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

// BlueprintGeneratedClass BP_LinkGun.BP_LinkGun_C
// 0x0030 (0x0D40 - 0x0D10)
class ABP_LinkGun_C : public AUTWeap_LinkGun
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0D10(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    BeamPulse;                                                // 0x0D18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    AltFlash;                                                 // 0x0D20(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Beam;                                                     // 0x0D28(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               FiringAlt;                                                // 0x0D30(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0D31(0x0007) MISSED OFFSET
	class ABP_LinkAlt_1P_C*                            BeamEffect;                                               // 0x0D38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_LinkGun.BP_LinkGun_C");
		return ptr;
	}


	float GetAISelectRating();
	bool CanAttack(class AActor** Target, struct FVector* TargetLoc, bool* bDirectOnly, bool* bPreferCurrentMode, unsigned char* BestFireMode, struct FVector* OptimalTargetLoc);
	void UserConstructionScript();
	void PlayImpactEffects(struct FVector* TargetLoc, unsigned char* FireMode, struct FVector* SpawnLocation, struct FRotator* SpawnRotation);
	void DetachFromOwner();
	void StopFiringEffects();
	void ReceiveTick(float* DeltaSeconds);
	void FiringInfoUpdated(unsigned char* InFireMode, unsigned char* FlashCount, struct FVector* InFlashLocation);
	void ExecuteUbergraph_BP_LinkGun(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

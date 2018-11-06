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

// BlueprintGeneratedClass BP_GrenadeLauncher.BP_GrenadeLauncher_C
// 0x0018 (0x0C38 - 0x0C20)
class ABP_GrenadeLauncher_C : public AUTWeap_GrenadeLauncher
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0C20(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    MF;                                                       // 0x0C28(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UGrenadeDetonateIndicator_C*                 DetonatorUI;                                              // 0x0C30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GrenadeLauncher.BP_GrenadeLauncher_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void PlayDetonationEffects();
	void ShowDetonatorUI();
	void HideDetonatorUI();
	void OnContinuedFiring();
	void AddDetonatorUIToHUD();
	void ExecuteUbergraph_BP_GrenadeLauncher(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

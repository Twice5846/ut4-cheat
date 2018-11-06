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

// BlueprintGeneratedClass BP_LightningRifle_Attach.BP_LightningRifle_Attach_C
// 0x0028 (0x04E8 - 0x04C0)
class ABP_LightningRifle_Attach_C : public AUTWeapAttachment_LightningRifle
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    PFX_Powered_Flare;                                        // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    PoweredGlow;                                              // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    MF;                                                       // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ChargedGlow;                                              // 0x04E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_LightningRifle_Attach.BP_LightningRifle_Attach_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void CheckGlow();
	void ExecuteUbergraph_BP_LightningRifle_Attach(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

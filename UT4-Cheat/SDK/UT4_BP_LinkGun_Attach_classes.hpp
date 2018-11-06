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

// BlueprintGeneratedClass BP_LinkGun_Attach.BP_LinkGun_Attach_C
// 0x0030 (0x04F8 - 0x04C8)
class ABP_LinkGun_Attach_C : public AUTWeapAttachment_LinkGun
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    BeamPulse;                                                // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    PrimaryMuzzle;                                            // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    AltBeam;                                                  // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ABP_LinkAlt_3P_C*                            BeamEffect;                                               // 0x04E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_LinkAlt_3P_C*                            TempBeamEffect;                                           // 0x04F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_LinkGun_Attach.BP_LinkGun_Attach_C");
		return ptr;
	}


	bool OverrideFiringEffects();
	void UserConstructionScript();
	void StopFiringEffects(bool* bIgnoreCurrentMode);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ExecuteUbergraph_BP_LinkGun_Attach(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

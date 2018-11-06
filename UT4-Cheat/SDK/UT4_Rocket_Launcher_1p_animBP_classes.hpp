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

// AnimBlueprintGeneratedClass Rocket_Launcher_1p_animBP.Rocket_Launcher_1p_animBP_C
// 0x0594 (0x08EC - 0x0358)
class URocket_Launcher_1p_animBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0358(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_3632B2014407C2F2909A4583B05749F8;      // 0x0360(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_95E2AAB24E81CA3DBC9B70A8BC06B5A6;      // 0x03A8(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4BE0F01940ADB35B04DACF9E544C536D;// 0x0408(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D942C72B4F14A251BE461A8AFDF229DF;// 0x0478(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_83EBF45343F9B2A9DE49AA95813166EE;// 0x04C0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C57325834BB7060666C9F89B9EB72D84;// 0x0530(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_8BD95D264DD60C6EE48D83AE6A222600;// 0x0578(0x00D8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6AC62643458130EFCD6C3B981E43BBA5;// 0x0650(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_49005287401A42D58ECF5DB471E5F640;// 0x0700(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_7A6099D74088685ACFFC02AE5C4434C6;// 0x0748(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_E6F6FAE24200D9435F35F6997D6C52E4;// 0x0790(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_B7C7AD7A4173E3FC249685A6F0305E35;// 0x0840(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_071ADFD849533A3A0BC955A153672425;// 0x0888(0x0048)
	int                                                Ammo;                                                     // 0x08D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     rocket_1_scale;                                           // 0x08D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     rocket_scale;                                             // 0x08E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Rocket_Launcher_1p_animBP.Rocket_Launcher_1p_animBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Rocket_Launcher_1p_animBP_AnimGraphNode_ModifyBone_6AC62643458130EFCD6C3B981E43BBA5();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Rocket_Launcher_1p_animBP_AnimGraphNode_ModifyBone_E6F6FAE24200D9435F35F6997D6C52E4();
	void ExecuteUbergraph_Rocket_Launcher_1p_animBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

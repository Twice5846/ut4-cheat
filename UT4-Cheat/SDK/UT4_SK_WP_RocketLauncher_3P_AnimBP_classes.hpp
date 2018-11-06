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

// AnimBlueprintGeneratedClass SK_WP_RocketLauncher_3P_AnimBP.SK_WP_RocketLauncher_3P_AnimBP_C
// 0x037C (0x06D4 - 0x0358)
class USK_WP_RocketLauncher_3P_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0358(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_1D63C1C648400E79CE810DBC19446CEE;      // 0x0360(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_6190C254486907A5A1A8E19604FD7B5B;      // 0x03A8(0x0060)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_51513E854E5C320303C9FC9BDEDC1BC0;// 0x0408(0x00D0)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_88E3BA054DEA4A12EE619E875C8CEE22;// 0x04D8(0x0038)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6BB5CEA44E1E103047ED32BF35991D19;// 0x0510(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6623EEED44D339B3B483A89A48E351F0;// 0x0580(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7AE804454078751C554E15954D604CBA;// 0x05F0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2090E0AF480B59EA7CF63D96567D84F9;// 0x0660(0x0070)
	int                                                FlashExtra;                                               // 0x06D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SK_WP_RocketLauncher_3P_AnimBP.SK_WP_RocketLauncher_3P_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_WP_RocketLauncher_3P_AnimBP_AnimGraphNode_BlendListByInt_51513E854E5C320303C9FC9BDEDC1BC0();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_SK_WP_RocketLauncher_3P_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// AnimBlueprintGeneratedClass Lightning_Gun_1p_animBP.Lightning_Gun_1p_animBP_C
// 0x0240 (0x0598 - 0x0358)
class ULightning_Gun_1p_animBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0358(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_826907AF49952258E4BC7A95A8B754F5;      // 0x0360(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_8BFE04B24818023F003210961873A5D2;      // 0x03A8(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E838A67A45AE73BE2CEFA6ABFE9AEB2A;// 0x0408(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FF35B4AA42A48B8E7BA2218C345B444F;// 0x0478(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_384F961A4377BB46DD21788A95BB0C73;// 0x04C0(0x00D8)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Lightning_Gun_1p_animBP.Lightning_Gun_1p_animBP_C");
		return ptr;
	}


	void ExecuteUbergraph_Lightning_Gun_1p_animBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

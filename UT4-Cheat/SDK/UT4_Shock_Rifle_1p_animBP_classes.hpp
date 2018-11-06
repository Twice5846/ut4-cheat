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

// AnimBlueprintGeneratedClass Shock_Rifle_1p_animBP.Shock_Rifle_1p_animBP_C
// 0x0240 (0x0598 - 0x0358)
class UShock_Rifle_1p_animBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0358(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_B10DF8A2401F8E51CCF4B9AAC1A0DC20;      // 0x0360(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_26EB18F2417AC449DDA9658C4F9F4B80;      // 0x03A8(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_215D238449F75728B80A3BA84283CFC9;// 0x0408(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_BCC13BAB442C00091F81119482341E20;// 0x0478(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_231762B948A3A5E551E1749D138A5209;// 0x04C0(0x00D8)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Shock_Rifle_1p_animBP.Shock_Rifle_1p_animBP_C");
		return ptr;
	}


	void ExecuteUbergraph_Shock_Rifle_1p_animBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

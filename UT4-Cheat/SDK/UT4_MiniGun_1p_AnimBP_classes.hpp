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

// AnimBlueprintGeneratedClass MiniGun_1p_AnimBP.MiniGun_1p_AnimBP_C
// 0x0240 (0x0598 - 0x0358)
class UMiniGun_1p_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0358(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_59DFA4C34788D690C72590A33DD14EC2;      // 0x0360(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_9F9BEE074DEA84C02779FE960530E248;      // 0x03A8(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8C46AB624983C32AEB2F0F94D2761059;// 0x0408(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_EE2FFCA144F47FADA2FFE79A7ACC2DC9;// 0x0478(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_57BB9DE94CC4384B1494A99665E9FC45;// 0x04C0(0x00D8)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass MiniGun_1p_AnimBP.MiniGun_1p_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_MiniGun_1p_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

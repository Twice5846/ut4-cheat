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

// AnimBlueprintGeneratedClass Shock_AnimBP_1p.Shock_AnimBP_1p_C
// 0x0120 (0x0478 - 0x0358)
class UShock_AnimBP_1p_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0358(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_7EFA301848C6E24441D7CC8ABA0118E5;      // 0x0360(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_925DDE1743990CACDB7C0FAB57FE7E0B;      // 0x03A8(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0A7B6619449B868E000D348E12D138A9;// 0x0408(0x0070)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Shock_AnimBP_1p.Shock_AnimBP_1p_C");
		return ptr;
	}


	void ExecuteUbergraph_Shock_AnimBP_1p(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

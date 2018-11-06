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

// AnimBlueprintGeneratedClass Impact_Hammer_1p_AnimBP.Impact_Hammer_1p_AnimBP_C
// 0x0120 (0x0478 - 0x0358)
class UImpact_Hammer_1p_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0358(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_BD8A6855431EE28A154AC9A1A974EB1B;      // 0x0360(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_75E04FB54554892693A073B8DA752BF4;      // 0x03A8(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9842B2D84ABE71D911251FA56AAA1C86;// 0x0408(0x0070)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Impact_Hammer_1p_AnimBP.Impact_Hammer_1p_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_Impact_Hammer_1p_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// AnimBlueprintGeneratedClass BioRifle_AnimBP.BioRifle_AnimBP_C
// 0x00B0 (0x0408 - 0x0358)
class UBioRifle_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0358(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_9571ADB44FA5FFFD77EED7BF00D20A9B;      // 0x0360(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_9DCFAF5649E316A7028D88A0DBC1B57F;      // 0x03A8(0x0060)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BioRifle_AnimBP.BioRifle_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_BioRifle_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

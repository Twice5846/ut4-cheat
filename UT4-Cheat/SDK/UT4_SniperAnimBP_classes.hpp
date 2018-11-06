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

// AnimBlueprintGeneratedClass SniperAnimBP.SniperAnimBP_C
// 0x00B0 (0x0408 - 0x0358)
class USniperAnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0358(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_ACCDAB054889EFA96B2890856FCEABAE;      // 0x0360(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_77D9883E4BB92C9C6BE3AEAABFE09DE4;      // 0x03A8(0x0060)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SniperAnimBP.SniperAnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_SniperAnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// AnimBlueprintGeneratedClass Flak_AnimBP.Flak_AnimBP_C
// 0x00B0 (0x0408 - 0x0358)
class UFlak_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0358(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_67AB2F1C453F9DD4AD434EAB64482895;      // 0x0360(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_9F6A05484F70988D0735A18BFED1AF69;      // 0x03A8(0x0060)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Flak_AnimBP.Flak_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_Flak_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

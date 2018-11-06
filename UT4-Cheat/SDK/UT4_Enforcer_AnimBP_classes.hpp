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

// AnimBlueprintGeneratedClass Enforcer_AnimBP.Enforcer_AnimBP_C
// 0x00B0 (0x0408 - 0x0358)
class UEnforcer_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0358(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_129B9CFC454265E9208BFB85A22ACB66;      // 0x0360(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_A9F30FDF4F753D92445446B0FC98889C;      // 0x03A8(0x0060)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Enforcer_AnimBP.Enforcer_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_Enforcer_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

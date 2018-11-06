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

// AnimBlueprintGeneratedClass Enforcer_1p_animBP.Enforcer_1p_animBP_C
// 0x00B0 (0x0408 - 0x0358)
class UEnforcer_1p_animBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0358(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_50D83FD347BDF4087C28748C7AEC4CB7;      // 0x0360(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_B12B058540D835D0AC2449B474A067C1;      // 0x03A8(0x0060)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Enforcer_1p_animBP.Enforcer_1p_animBP_C");
		return ptr;
	}


	void ExecuteUbergraph_Enforcer_1p_animBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

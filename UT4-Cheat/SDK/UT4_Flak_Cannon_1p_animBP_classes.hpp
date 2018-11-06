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

// AnimBlueprintGeneratedClass Flak_Cannon_1p_animBP.Flak_Cannon_1p_animBP_C
// 0x00B0 (0x0408 - 0x0358)
class UFlak_Cannon_1p_animBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0358(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_9E3034D547A9031350608196E98092A0;      // 0x0360(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_16099B9640BC0413FED489B2309A20C5;      // 0x03A8(0x0060)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Flak_Cannon_1p_animBP.Flak_Cannon_1p_animBP_C");
		return ptr;
	}


	void ExecuteUbergraph_Flak_Cannon_1p_animBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

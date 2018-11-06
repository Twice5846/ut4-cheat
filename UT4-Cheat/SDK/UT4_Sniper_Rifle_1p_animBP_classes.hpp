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

// AnimBlueprintGeneratedClass Sniper_Rifle_1p_animBP.Sniper_Rifle_1p_animBP_C
// 0x00B0 (0x0408 - 0x0358)
class USniper_Rifle_1p_animBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0358(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_8C037CC543ECC4FDBE28378A49189FB7;      // 0x0360(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_61B6AE3D4FF33486384A0DAB36EFACA0;      // 0x03A8(0x0060)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Sniper_Rifle_1p_animBP.Sniper_Rifle_1p_animBP_C");
		return ptr;
	}


	void ExecuteUbergraph_Sniper_Rifle_1p_animBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

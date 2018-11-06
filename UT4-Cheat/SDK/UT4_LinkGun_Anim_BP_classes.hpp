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

// AnimBlueprintGeneratedClass LinkGun_Anim_BP.LinkGun_Anim_BP_C
// 0x00B1 (0x0409 - 0x0358)
class ULinkGun_Anim_BP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0358(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_264ECF7647CAE96438F026B0BD328540;      // 0x0360(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_983574114DD3B0E763DC1BA0A4B83066;      // 0x03A8(0x0060)
	bool                                               FiringAlt;                                                // 0x0408(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass LinkGun_Anim_BP.LinkGun_Anim_BP_C");
		return ptr;
	}


	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_LinkGun_Anim_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

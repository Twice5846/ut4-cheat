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

// AnimBlueprintGeneratedClass LinkGun_1p_animBP.LinkGun_1p_animBP_C
// 0x0240 (0x0598 - 0x0358)
class ULinkGun_1p_animBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0358(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_180B08F64BE6462158992B97A41E07E3;      // 0x0360(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_25CC91C146F13F8FB83C3D95518F4F21;      // 0x03A8(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F09B67AC4D4B9C59FB225CADACE2978F;// 0x0408(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_782FB7C24DED5400DEDC2583902054F3;// 0x0478(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_89E76FEA41A22FFA596A44BC51417324;// 0x04C0(0x00D8)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass LinkGun_1p_animBP.LinkGun_1p_animBP_C");
		return ptr;
	}


	void ExecuteUbergraph_LinkGun_1p_animBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

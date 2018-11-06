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

// AnimBlueprintGeneratedClass SK_WP_Stinger_1P_Skeleton_AnimBlueprint.SK_WP_Stinger_1P_Skeleton_AnimBlueprint_C
// 0x00B0 (0x0408 - 0x0358)
class USK_WP_Stinger_1P_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0358(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_3303F9894C94BD0FAC56998948F7FB6F;      // 0x0360(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_CFC67DF0486FFA6025804DBF1E175A45;      // 0x03A8(0x0060)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SK_WP_Stinger_1P_Skeleton_AnimBlueprint.SK_WP_Stinger_1P_Skeleton_AnimBlueprint_C");
		return ptr;
	}


	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_SK_WP_Stinger_1P_Skeleton_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

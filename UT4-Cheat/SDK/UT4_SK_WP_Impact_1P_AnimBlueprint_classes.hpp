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

// AnimBlueprintGeneratedClass SK_WP_Impact_1P_AnimBlueprint.SK_WP_Impact_1P_AnimBlueprint_C
// 0x00B0 (0x0408 - 0x0358)
class USK_WP_Impact_1P_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0358(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_20241F5343FA8A5D9D43BEA171B1A8C9;      // 0x0360(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_CFDF0F3D4A014814127DDEB61459E6BE;      // 0x03A8(0x0060)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SK_WP_Impact_1P_AnimBlueprint.SK_WP_Impact_1P_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_SK_WP_Impact_1P_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

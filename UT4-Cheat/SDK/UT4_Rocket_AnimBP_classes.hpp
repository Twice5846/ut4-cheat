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

// AnimBlueprintGeneratedClass Rocket_AnimBP.Rocket_AnimBP_C
// 0x00B8 (0x0410 - 0x0358)
class URocket_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0358(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_F6AF232042B2C1F3A30CD3ADB494E5EE;      // 0x0360(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_243C62914080698866254DB8DBC7A647;      // 0x03A8(0x0060)
	class ABP_RocketLauncher_C*                        Rocket_Launcher;                                          // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Rocket_AnimBP.Rocket_AnimBP_C");
		return ptr;
	}


	void BlueprintInitializeAnimation();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_Rocket_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

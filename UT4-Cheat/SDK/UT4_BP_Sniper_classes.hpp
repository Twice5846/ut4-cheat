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

// BlueprintGeneratedClass BP_Sniper.BP_Sniper_C
// 0x0010 (0x0C30 - 0x0C20)
class ABP_Sniper_C : public AUTWeap_Sniper
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0C20(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    MF;                                                       // 0x0C28(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Sniper.BP_Sniper_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_BP_Sniper(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

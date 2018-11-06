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

// BlueprintGeneratedClass BP_Sniper_Attach.BP_Sniper_Attach_C
// 0x0008 (0x04B0 - 0x04A8)
class ABP_Sniper_Attach_C : public AUTWeapAttachment_Sniper
{
public:
	class UParticleSystemComponent*                    MF;                                                       // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Sniper_Attach.BP_Sniper_Attach_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

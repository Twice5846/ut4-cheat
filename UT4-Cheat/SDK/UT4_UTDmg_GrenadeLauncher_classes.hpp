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

// BlueprintGeneratedClass UTDmg_GrenadeLauncher.UTDmg_GrenadeLauncher_C
// 0x0008 (0x0190 - 0x0188)
class UUTDmg_GrenadeLauncher_C : public UUTDmgType_AttachParticles
{
public:
	class AUTWorldSettings*                            NewVar;                                                   // 0x0188(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass UTDmg_GrenadeLauncher.UTDmg_GrenadeLauncher_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

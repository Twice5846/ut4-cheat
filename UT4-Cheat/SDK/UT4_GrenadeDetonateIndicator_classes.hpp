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

// WidgetBlueprintGeneratedClass GrenadeDetonateIndicator.GrenadeDetonateIndicator_C
// 0x0018 (0x0248 - 0x0230)
class UGrenadeDetonateIndicator_C : public UUserWidget
{
public:
	struct FText                                       GrenadeCountDisplay;                                      // 0x0230(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GrenadeDetonateIndicator.GrenadeDetonateIndicator_C");
		return ptr;
	}


	struct FText Get_GrenadeCount_Text_1();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

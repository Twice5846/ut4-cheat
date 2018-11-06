#pragma once

// Unreal Tournament 4 (Pre Alpha) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum UTMcpProfile.EUTObjectLibrary
enum class EUTObjectLibrary : uint8_t
{
	EUTObjectLibrary__BoostData    = 0,
	EUTObjectLibrary__CardData     = 1,
	EUTObjectLibrary__CardPackData = 2,
	EUTObjectLibrary__GiftBoxData  = 3,
	EUTObjectLibrary__SkinData     = 4,
	EUTObjectLibrary__TokenData    = 5,
	EUTObjectLibrary__CodeTokenData = 6,
	EUTObjectLibrary__ItemData     = 7,
	EUTObjectLibrary__Max_None     = 8,
	EUTObjectLibrary__EUTObjectLibrary_MAX = 9
};


// Enum UTMcpProfile.EUtItemType
enum class EUtItemType : uint8_t
{
	EUtItemType__Card              = 0,
	EUtItemType__CardPack          = 1,
	EUtItemType__GiftBox           = 2,
	EUtItemType__Currency          = 3,
	EUtItemType__Taunt             = 4,
	EUtItemType__Skin              = 5,
	EUtItemType__WeaponSkin        = 6,
	EUtItemType__Token             = 7,
	EUtItemType__CodeToken         = 8,
	EUtItemType__Item              = 9,
	EUtItemType__Boost             = 10,
	EUtItemType__Max_None          = 11,
	EUtItemType__EUtItemType_MAX   = 12
};


// Enum UTMcpProfile.EUTItemRarity
enum class EUTItemRarity : uint8_t
{
	EUTItemRarity__Basic           = 0,
	EUTItemRarity__Common          = 1,
	EUTItemRarity__Rare            = 2,
	EUTItemRarity__UltraRare       = 3,
	EUTItemRarity__EpicMegaRare    = 4,
	EUTItemRarity__EUTItemRarity_MAX = 5
};


// Enum UTMcpProfile.EUtBoostType
enum class EUtBoostType : uint8_t
{
	EUtBoostType__XP               = 0,
	EUtBoostType__TimeCurrency     = 1,
	EUtBoostType__XPWinCount       = 2,
	EUtBoostType__TimeCurrencyWinCount = 3,
	EUtBoostType__EUtBoostType_MAX = 4
};


// Enum UTMcpProfile.EUtMcpProfile
enum class EUtMcpProfile : uint8_t
{
	EUtMcpProfile__None            = 0,
	EUtMcpProfile__Profile         = 1,
	EUtMcpProfile__MAX             = 2,
	EUtMcpProfile__EUtMcpProfile_MAX = 3
};


// Enum UTMcpProfile.EUtCardPackType
enum class EUtCardPackType : uint8_t
{
	EUtCardPackType__CardPack      = 0,
	EUtCardPackType__LootCrate     = 1,
	EUtCardPackType__Chest         = 2,
	EUtCardPackType__Other         = 3,
	EUtCardPackType__EUtCardPackType_MAX = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct UTMcpProfile.CompositeSubtitution
// 0x0010
struct FCompositeSubtitution
{
	TArray<TAssetPtr<class UUtMcpDefinition>>          Substitutions;                                            // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct UTMcpProfile.UtSharedUrlContext
// 0x0000 (0x0060 - 0x0060)
struct FUtSharedUrlContext : public FBaseUrlContext
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

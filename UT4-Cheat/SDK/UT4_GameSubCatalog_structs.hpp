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

// Enum GameSubCatalog.ECatalogOfferType
enum class ECatalogOfferType : uint8_t
{
	ECatalogOfferType__StaticPrice = 0,
	ECatalogOfferType__DynamicBundle = 1,
	ECatalogOfferType__ECatalogOfferType_MAX = 2
};


// Enum GameSubCatalog.ECatalogSaleType
enum class ECatalogSaleType : uint8_t
{
	ECatalogSaleType__NotOnSale    = 0,
	ECatalogSaleType__UndecoratedNewPrice = 1,
	ECatalogSaleType__AmountOff    = 2,
	ECatalogSaleType__PercentOff   = 3,
	ECatalogSaleType__PercentOn    = 4,
	ECatalogSaleType__Strikethrough = 5,
	ECatalogSaleType__MAX          = 6,
	ECatalogSaleType__ECatalogSaleType_MAX = 7
};


// Enum GameSubCatalog.EAppStore
enum class EAppStore : uint8_t
{
	EAppStore__DebugStore          = 0,
	EAppStore__EpicPurchasingService = 1,
	EAppStore__IOSAppStore         = 2,
	EAppStore__WeChatAppStore      = 3,
	EAppStore__GooglePlayAppStore  = 4,
	EAppStore__KindleStore         = 5,
	EAppStore__PlayStationStore    = 6,
	EAppStore__XboxLiveStore       = 7,
	EAppStore__MAX                 = 8,
	EAppStore__EAppStore_MAX       = 9
};


// Enum GameSubCatalog.EStoreCurrencyType
enum class EStoreCurrencyType : uint8_t
{
	EStoreCurrencyType__RealMoney  = 0,
	EStoreCurrencyType__MtxCurrency = 1,
	EStoreCurrencyType__GameItem   = 2,
	EStoreCurrencyType__Other      = 3,
	EStoreCurrencyType__MAX        = 4,
	EStoreCurrencyType__EStoreCurrencyType_MAX = 5
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GameSubCatalog.CatalogPurchaseNotification
// 0x0020
struct FCatalogPurchaseNotification
{
	struct FMcpLootResult                              LootResult;                                               // 0x0000(0x0020)
};

// ScriptStruct GameSubCatalog.CatalogKeyValue
// 0x0020
struct FCatalogKeyValue
{
	struct FString                                     Key;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Value;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct GameSubCatalog.CatalogItemPrice
// 0x0048
struct FCatalogItemPrice
{
	TEnumAsByte<EStoreCurrencyType>                    CurrencyType;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     CurrencySubType;                                          // 0x0008(0x0010) (Edit, ZeroConstructor)
	int                                                RegularPrice;                                             // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                FinalPrice;                                               // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FText                                       PriceTextOverride;                                        // 0x0020(0x0018)
	TEnumAsByte<ECatalogSaleType>                      SaleType;                                                 // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	struct FDateTime                                   SaleExpiration;                                           // 0x0040(0x0008) (ZeroConstructor)
};

// ScriptStruct GameSubCatalog.ItemQuantity
// 0x0038
struct FItemQuantity
{
	struct FString                                     TemplateId;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                Quantity;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FJsonObjectWrapper                          Attributes;                                               // 0x0018(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct GameSubCatalog.CatalogDynamicBundleItem
// 0x0078
struct FCatalogDynamicBundleItem
{
	struct FItemQuantity                               Item;                                                     // 0x0000(0x0038) (Edit, DisableEditOnInstance)
	bool                                               bCanOwnMultiple;                                          // 0x0038(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	int                                                RegularPrice;                                             // 0x003C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DiscountedPrice;                                          // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AlreadyOwnedPriceReduction;                               // 0x0044(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       Title;                                                    // 0x0048(0x0018) (Edit, DisableEditOnInstance)
	struct FText                                       Description;                                              // 0x0060(0x0018) (Edit, DisableEditOnInstance)
};

// ScriptStruct GameSubCatalog.CatalogDynamicBundle
// 0x0028
struct FCatalogDynamicBundle
{
	int                                                BasePrice;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EStoreCurrencyType>                    CurrencyType;                                             // 0x0004(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FString                                     CurrencySubType;                                          // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCatalogDynamicBundleItem>           BundleItems;                                              // 0x0018(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct GameSubCatalog.CatalogMetaAssetInfo
// 0x0030
struct FCatalogMetaAssetInfo
{
	struct FString                                     StructName;                                               // 0x0000(0x0010) (ZeroConstructor)
	struct FJsonObjectWrapper                          Payload;                                                  // 0x0010(0x0020)
};

// ScriptStruct GameSubCatalog.CatalogOffer
// 0x01D8
struct FCatalogOffer
{
	struct FString                                     OfferId;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FCatalogKeyValue>                    MetaInfo;                                                 // 0x0010(0x0010) (Edit, ZeroConstructor)
	ECatalogOfferType                                  OfferType;                                                // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	TArray<struct FCatalogItemPrice>                   Prices;                                                   // 0x0028(0x0010) (Edit, ZeroConstructor)
	struct FCatalogDynamicBundle                       DynamicBundleInfo;                                        // 0x0038(0x0028) (Edit)
	int                                                DailyLimit;                                               // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                WeeklyLimit;                                              // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             Categories;                                               // 0x0068(0x0010) (Edit, ZeroConstructor)
	struct FString                                     CatalogGroup;                                             // 0x0078(0x0010) (Edit, ZeroConstructor)
	int                                                CatalogGroupPriority;                                     // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SortPriority;                                             // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // 0x0090(0x0018) (Edit)
	struct FText                                       ShortDescription;                                         // 0x00A8(0x0018) (Edit)
	struct FText                                       Description;                                              // 0x00C0(0x0018) (Edit)
	struct FString                                     AppStoreId[0x8];                                          // 0x00D8(0x0010) (Edit, ZeroConstructor)
	struct FCatalogMetaAssetInfo                       MetaAssetInfo;                                            // 0x0158(0x0030)
	struct FString                                     DisplayAssetPath;                                         // 0x0188(0x0010) (ZeroConstructor)
	TArray<struct FString>                             RequiredFulfillmentIds;                                   // 0x0198(0x0010) (ZeroConstructor)
	TArray<struct FString>                             DenyFulfillmentIds;                                       // 0x01A8(0x0010) (ZeroConstructor)
	TArray<struct FString>                             DenyItemTemplateIds;                                      // 0x01B8(0x0010) (Edit, ZeroConstructor)
	TArray<struct FItemQuantity>                       ItemGrants;                                               // 0x01C8(0x0010) (ZeroConstructor)
};

// ScriptStruct GameSubCatalog.Storefront
// 0x0020
struct FStorefront
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FCatalogOffer>                       CatalogEntries;                                           // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct GameSubCatalog.CatalogDownload
// 0x0020
struct FCatalogDownload
{
	int                                                RefreshIntervalHrs;                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DailyPurchaseHrs;                                         // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FDateTime                                   Expiration;                                               // 0x0008(0x0008) (ZeroConstructor)
	TArray<struct FStorefront>                         Storefronts;                                              // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct GameSubCatalog.CatalogItemSalePrice
// 0x0018
struct FCatalogItemSalePrice
{
	int                                                SalePrice;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECatalogSaleType>                      SaleType;                                                 // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FDateTime                                   StartTime;                                                // 0x0008(0x0008) (Edit, ZeroConstructor)
	struct FDateTime                                   EndTime;                                                  // 0x0010(0x0008) (Edit, ZeroConstructor)
};

// ScriptStruct GameSubCatalog.CatalogPurchaseInfo
// 0x0030
struct FCatalogPurchaseInfo
{
	struct FString                                     OfferId;                                                  // 0x0000(0x0010) (ZeroConstructor)
	int                                                PurchaseQuantity;                                         // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EStoreCurrencyType>                    Currency;                                                 // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	struct FString                                     CurrencySubType;                                          // 0x0018(0x0010) (ZeroConstructor)
	int                                                ExpectedPrice;                                            // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct GameSubCatalog.CatalogReceiptInfo
// 0x0038
struct FCatalogReceiptInfo
{
	TEnumAsByte<EAppStore>                             AppStore;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     AppStoreId;                                               // 0x0008(0x0010) (ZeroConstructor)
	struct FString                                     ReceiptId;                                                // 0x0018(0x0010) (ZeroConstructor)
	struct FString                                     ReceiptInfo;                                              // 0x0028(0x0010) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

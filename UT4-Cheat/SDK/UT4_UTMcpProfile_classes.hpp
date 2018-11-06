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

// Class UTMcpProfile.UtMcpDefinition
// 0x0088 (0x00B0 - 0x0028)
class UUtMcpDefinition : public UMcpItemDefinitionBase
{
public:
	struct FText                                       ItemDisplayName;                                          // 0x0028(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FText                                       ItemDisplayDescription;                                   // 0x0040(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FText                                       DisplayNamePrefix;                                        // 0x0058(0x0018)
	unsigned char                                      bAllowMultipleStacks : 1;                                 // 0x0070(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
	int                                                MaxStackSize;                                             // 0x0074(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EUtItemType                                        ItemType;                                                 // 0x0078(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EUTItemRarity                                      ItemRarity;                                               // 0x0079(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x007A(0x0006) MISSED OFFSET
	struct FString                                     TemplateId;                                               // 0x0080(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TAssetPtr<class UObject>                           ItemDisplayAsset;                                         // 0x0090(0x0020) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTMcpProfile.UtMcpDefinition");
		return ptr;
	}


	TAssetPtr<class UObject> GetIconAsset();
};


// Class UTMcpProfile.UtCardData
// 0x0000 (0x00B0 - 0x00B0)
class UUtCardData : public UUtMcpDefinition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTMcpProfile.UtCardData");
		return ptr;
	}

};


// Class UTMcpProfile.UtMcpBoostDefinition
// 0x0008 (0x00B8 - 0x00B0)
class UUtMcpBoostDefinition : public UUtMcpDefinition
{
public:
	EUtBoostType                                       BoostType;                                                // 0x00B0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00B1(0x0003) MISSED OFFSET
	int                                                DurationInHours;                                          // 0x00B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTMcpProfile.UtMcpBoostDefinition");
		return ptr;
	}

};


// Class UTMcpProfile.UtMcpTokenDefinition
// 0x00A0 (0x0150 - 0x00B0)
class UUtMcpTokenDefinition : public UUtMcpDefinition
{
public:
	struct FText                                       LootCrateDisplayName;                                     // 0x00B0(0x0018) (Edit)
	TAssetPtr<class UTexture2D>                        LootCrateDisplayAsset;                                    // 0x00C8(0x0020) (Edit)
	bool                                               bIsReward;                                                // 0x00E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00E9(0x0007) MISSED OFFSET
	TArray<TAssetPtr<class UUtMcpDefinition>>          Substitutions;                                            // 0x00F0(0x0010) (Edit, ZeroConstructor)
	TArray<struct FCompositeSubtitution>               CompositeSubstitutions;                                   // 0x0100(0x0010) (Edit, ZeroConstructor)
	TAssetPtr<class UUtMcpDefinition>                  EquivalencyType;                                          // 0x0110(0x0020) (Edit)
	int                                                EquivalencyQuantity;                                      // 0x0130(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0134(0x0004) MISSED OFFSET
	struct FString                                     PersistentNameOverride;                                   // 0x0138(0x0010) (Edit, ZeroConstructor)
	bool                                               bMakeNewItemNotification;                                 // 0x0148(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0149(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTMcpProfile.UtMcpTokenDefinition");
		return ptr;
	}

};


// Class UTMcpProfile.UtMcpCardPackDefinition
// 0x00F0 (0x01A0 - 0x00B0)
class UUtMcpCardPackDefinition : public UUtMcpDefinition
{
public:
	struct FString                                     LootTierGroup;                                            // 0x00B0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                LootTier;                                                 // 0x00C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00C4(0x0004) MISSED OFFSET
	TAssetPtr<class UUtMcpTokenDefinition>             RequiredTokenToOpen;                                      // 0x00C8(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	EUtCardPackType                                    CardPackType;                                             // 0x00E8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoOpen;                                                // 0x00E9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x00EA(0x0006) MISSED OFFSET
	struct FString                                     OptionalSubcategory;                                      // 0x00F0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<TAssetPtr<class UUtMcpDefinition>>          ExplicitItems;                                            // 0x0100(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TAssetPtr<class UClass>                            DisplayActor;                                             // 0x0110(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData02[0x70];                                      // 0x0130(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTMcpProfile.UtMcpCardPackDefinition");
		return ptr;
	}


	bool GetExplicitCards(TArray<class UObject*>* Cards);
};


// Class UTMcpProfile.UtMcpItemAware
// 0x0038 (0x0060 - 0x0028)
class UUtMcpItemAware : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FString                                     TemplateId;                                               // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0040(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTMcpProfile.UtMcpItemAware");
		return ptr;
	}


	struct FString GetMcpId();
	int GetLevel();
	int GetCount();
};


// Class UTMcpProfile.UtMcpItem
// 0x0010 (0x0070 - 0x0060)
class UUtMcpItem : public UUtMcpItemAware
{
public:
	int                                                Count;                                                    // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // 0x0064(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UUtMcpDefinition*                            ItemDefinition;                                           // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTMcpProfile.UtMcpItem");
		return ptr;
	}


	int GetLevel();
	int GetCount();
};


// Class UTMcpProfile.UtMcpBoostItem
// 0x0000 (0x0070 - 0x0070)
class UUtMcpBoostItem : public UUtMcpItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTMcpProfile.UtMcpBoostItem");
		return ptr;
	}


	class UUtMcpBoostDefinition* GetInternalData();
};


// Class UTMcpProfile.UtMcpCardPackItem
// 0x0000 (0x0070 - 0x0070)
class UUtMcpCardPackItem : public UUtMcpItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTMcpProfile.UtMcpCardPackItem");
		return ptr;
	}


	class UUtMcpCardPackDefinition* GetInternalData();
};


// Class UTMcpProfile.UtMcpTokenItem
// 0x0000 (0x0070 - 0x0070)
class UUtMcpTokenItem : public UUtMcpItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTMcpProfile.UtMcpTokenItem");
		return ptr;
	}


	class UUtMcpTokenDefinition* GetInternalData();
};


// Class UTMcpProfile.UtMcpProfileBase
// 0x0010 (0x02A0 - 0x0290)
class UUtMcpProfileBase : public UMcpProfile
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0290(0x0004) MISSED OFFSET
	TWeakObjectPtr<class UUtMcpProfileManager>         ProfileManager;                                           // 0x0294(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x029C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTMcpProfile.UtMcpProfileBase");
		return ptr;
	}

};


// Class UTMcpProfile.UTMcpProfile
// 0x0000 (0x02A0 - 0x02A0)
class UUTMcpProfile : public UUtMcpProfileBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTMcpProfile.UTMcpProfile");
		return ptr;
	}


	void SetStars(int newGoldStars, int newBlueStars, const struct FClientUrlContext& Context);
	void SetAvatarAndFlag(const struct FString& newAvatar, const struct FString& newFlag, const struct FClientUrlContext& Context);
	void GrantXP(int xpAmount, const struct FDedicatedServerUrlContext& Context);
	void CheckForStuff(const struct FClientUrlContext& Context);
};


// Class UTMcpProfile.UtMcpProfileManager
// 0x0030 (0x0078 - 0x0048)
class UUtMcpProfileManager : public UMcpProfileManager
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x0048(0x0001) MISSED OFFSET
	bool                                               bMcpProfileValid;                                         // 0x0049(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsSharedAccount;                                         // 0x004A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x004B(0x0001) MISSED OFFSET
	int                                                ProfileRequestsInFlight;                                  // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	class UMcpProfileGroup*                            ProfileGroup;                                             // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0058(0x0010) MISSED OFFSET
	TArray<class UUtMcpProfileBase*>                   ActiveProfiles;                                           // 0x0068(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTMcpProfile.UtMcpProfileManager");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Unreal Tournament 4 (Pre Alpha) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct McpProfileSys.ProfileEntry
// 0x0018
struct FProfileEntry
{
	struct FString                                     ProfileId;                                                // 0x0000(0x0010) (ZeroConstructor)
	class UMcpProfile*                                 ProfileObject;                                            // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct McpProfileSys.ProfileHttpRequest
// 0x0070
struct FProfileHttpRequest
{
	class UMcpProfile*                                 SourceProfile;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x68];                                      // 0x0008(0x0068) MISSED OFFSET
};

// ScriptStruct McpProfileSys.BaseUrlContext
// 0x0060
struct FBaseUrlContext
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct McpProfileSys.DedicatedServerUrlContext
// 0x0000 (0x0060 - 0x0060)
struct FDedicatedServerUrlContext : public FBaseUrlContext
{

};

// ScriptStruct McpProfileSys.ClientUrlContext
// 0x0000 (0x0060 - 0x0060)
struct FClientUrlContext : public FBaseUrlContext
{

};

// ScriptStruct McpProfileSys.ProfileGroupEntry
// 0x0020
struct FProfileGroupEntry
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
	class UMcpProfileGroup*                            ProfileGroup;                                             // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct McpProfileSys.McpItemIdAndQuantity
// 0x0018
struct FMcpItemIdAndQuantity
{
	struct FString                                     ItemId;                                                   // 0x0000(0x0010) (ZeroConstructor)
	int                                                Quantity;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct McpProfileSys.McpLootEntry
// 0x0048
struct FMcpLootEntry
{
	struct FString                                     ItemType;                                                 // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     ItemGuid;                                                 // 0x0010(0x0010) (ZeroConstructor)
	int                                                Quantity;                                                 // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FJsonObjectWrapper                          Attributes;                                               // 0x0028(0x0020)
};

// ScriptStruct McpProfileSys.McpLootResult
// 0x0020
struct FMcpLootResult
{
	struct FString                                     TierGroupName;                                            // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FMcpLootEntry>                       Items;                                                    // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct McpProfileSys.PublicUrlContext
// 0x0000 (0x0060 - 0x0060)
struct FPublicUrlContext : public FBaseUrlContext
{

};

// ScriptStruct McpProfileSys.McpAddItemRequest
// 0x0048
struct FMcpAddItemRequest
{
	struct FString                                     ItemId;                                                   // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     TemplateId;                                               // 0x0010(0x0010) (ZeroConstructor)
	int                                                Quantity;                                                 // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FJsonObjectWrapper                          Attributes;                                               // 0x0028(0x0020)
};

// ScriptStruct McpProfileSys.McpRemoveItemRequest
// 0x0010
struct FMcpRemoveItemRequest
{
	struct FString                                     ItemId;                                                   // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct McpProfileSys.McpChangeQuantityRequest
// 0x0018
struct FMcpChangeQuantityRequest
{
	struct FString                                     ItemId;                                                   // 0x0000(0x0010) (ZeroConstructor)
	int                                                DeltaQuantity;                                            // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct McpProfileSys.McpChangeAttributesRequest
// 0x0030
struct FMcpChangeAttributesRequest
{
	struct FString                                     ItemId;                                                   // 0x0000(0x0010) (ZeroConstructor)
	struct FJsonObjectWrapper                          Attributes;                                               // 0x0010(0x0020)
};

// ScriptStruct McpProfileSys.McpProfileChangeRequest
// 0x0058
struct FMcpProfileChangeRequest
{
	int                                                BaseProfileRevision;                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FMcpAddItemRequest>                  AddRequests;                                              // 0x0008(0x0010) (ZeroConstructor)
	TArray<struct FMcpRemoveItemRequest>               RemoveRequests;                                           // 0x0018(0x0010) (ZeroConstructor)
	TArray<struct FMcpChangeQuantityRequest>           ChangeQuantityRequests;                                   // 0x0028(0x0010) (ZeroConstructor)
	TArray<struct FMcpChangeAttributesRequest>         ChangeAttributesRequests;                                 // 0x0038(0x0010) (ZeroConstructor)
	TArray<struct FJsonObjectWrapper>                  ChangeStatRequests;                                       // 0x0048(0x0010) (ZeroConstructor)
};

// ScriptStruct McpProfileSys.ProfileUpdateSingle
// 0x0048
struct FProfileUpdateSingle
{
	int64_t                                            ProfileRevision;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     ProfileId;                                                // 0x0008(0x0010) (ZeroConstructor)
	int64_t                                            ProfileChangesBaseRevision;                               // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FJsonObjectWrapper>                  ProfileChanges;                                           // 0x0020(0x0010) (ZeroConstructor)
	struct FDateTime                                   LockExpiration;                                           // 0x0030(0x0008) (ZeroConstructor)
	TArray<struct FJsonObjectWrapper>                  Notifications;                                            // 0x0038(0x0010) (ZeroConstructor)
};

// ScriptStruct McpProfileSys.ProfileUpdate
// 0x0020 (0x0068 - 0x0048)
struct FProfileUpdate : public FProfileUpdateSingle
{
	int                                                ResponseVersion;                                          // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	struct FDateTime                                   ServerTime;                                               // 0x0050(0x0008) (ZeroConstructor)
	TArray<struct FProfileUpdateSingle>                MultiUpdate;                                              // 0x0058(0x0010) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

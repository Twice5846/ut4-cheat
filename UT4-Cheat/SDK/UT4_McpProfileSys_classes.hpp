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

// Class McpProfileSys.McpItemAware
// 0x0000 (0x0028 - 0x0028)
class UMcpItemAware : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class McpProfileSys.McpItemAware");
		return ptr;
	}

};


// Class McpProfileSys.McpItemDefinitionBase
// 0x0000 (0x0028 - 0x0028)
class UMcpItemDefinitionBase : public UDataAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class McpProfileSys.McpItemDefinitionBase");
		return ptr;
	}

};


// Class McpProfileSys.McpProfileGroup
// 0x0148 (0x0170 - 0x0028)
class UMcpProfileGroup : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET
	int                                                DelayMcpResults;                                          // 0x0078(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	TArray<struct FProfileEntry>                       ProfileList;                                              // 0x0080(0x0010) (ZeroConstructor)
	bool                                               bIsInitialized;                                           // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
	struct FString                                     PlayerName;                                               // 0x0098(0x0010) (ZeroConstructor)
	bool                                               bIsServer;                                                // 0x00A8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET
	struct FString                                     ProfileNotificationsStompTopic;                           // 0x00B0(0x0010) (ZeroConstructor, Config)
	unsigned char                                      UnknownData04[0x40];                                      // 0x00C0(0x0040) MISSED OFFSET
	struct FString                                     LastMcpVersion;                                           // 0x0100(0x0010) (ZeroConstructor)
	struct FTimespan                                   LocalTimeOffset;                                          // 0x0110(0x0008) (ZeroConstructor)
	TArray<struct FProfileHttpRequest>                 PendingRequests;                                          // 0x0118(0x0010) (ZeroConstructor)
	bool                                               bIsProcessingRequestGenerator;                            // 0x0128(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0129(0x0007) MISSED OFFSET
	struct FString                                     LockCode;                                                 // 0x0130(0x0010) (ZeroConstructor)
	TArray<class UMcpProfile*>                         LockedProfiles;                                           // 0x0140(0x0010) (ZeroConstructor)
	struct FString                                     LockedProfilesString;                                     // 0x0150(0x0010) (ZeroConstructor)
	int                                                ProfileWriteLockTimeoutSecs;                              // 0x0160(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bSubscribedToNotifications;                               // 0x0164(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0xB];                                       // 0x0165(0x000B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class McpProfileSys.McpProfileGroup");
		return ptr;
	}

};


// Class McpProfileSys.McpProfile
// 0x0268 (0x0290 - 0x0028)
class UMcpProfile : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0028(0x00A0) MISSED OFFSET
	struct FString                                     DebugName;                                                // 0x00C8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET
	class UMcpProfileGroup*                            ProfileGroup;                                             // 0x00E0(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     ProfileId;                                                // 0x00E8(0x0010) (ZeroConstructor)
	int64_t                                            ProfileRevision;                                          // 0x00F8(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                FullProfileQueryQueued;                                   // 0x0100(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bShouldCreateInstances;                                   // 0x0104(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bProfileLockOperationPending;                             // 0x0105(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bProfileWriteLocked;                                      // 0x0106(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0107(0x0001) MISSED OFFSET
	struct FDateTime                                   ProfileWriteLockExpireTime;                               // 0x0108(0x0008) (ZeroConstructor)
	bool                                               bProfileUnlockOperationPending;                           // 0x0110(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x17F];                                     // 0x0111(0x017F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class McpProfileSys.McpProfile");
		return ptr;
	}


	void UnlockProfileForWrite(const struct FString& Code, struct FDedicatedServerUrlContext* Context);
	void QueryProfile(struct FBaseUrlContext* Context);
	void LockProfileForWrite(const struct FString& Code, int Timeout, struct FDedicatedServerUrlContext* Context);
	void DeleteProfile(struct FClientUrlContext* Context);
	void DeleteAllProfiles(struct FClientUrlContext* Context);
};


// Class McpProfileSys.McpProfileManager
// 0x0020 (0x0048 - 0x0028)
class UMcpProfileManager : public UObject
{
public:
	TArray<struct FProfileGroupEntry>                  ServerProfileGroups;                                      // 0x0028(0x0010) (ZeroConstructor)
	TArray<struct FProfileGroupEntry>                  ClientProfileGroups;                                      // 0x0038(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class McpProfileSys.McpProfileManager");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

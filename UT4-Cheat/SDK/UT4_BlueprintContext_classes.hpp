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

// Class BlueprintContext.BlueprintContextBase
// 0x0008 (0x0030 - 0x0028)
class UBlueprintContextBase : public UObject
{
public:
	int                                                LocalPlayerIndex;                                         // 0x0028(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BlueprintContext.BlueprintContextBase");
		return ptr;
	}

};


// Class BlueprintContext.MatchmakingContext
// 0x0030 (0x0060 - 0x0030)
class UMatchmakingContext : public UBlueprintContextBase
{
public:
	struct FScriptMulticastDelegate                    OnMatchmakingStarted;                                     // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMatchmakingComplete;                                    // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMatchmakingStateChange;                                 // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BlueprintContext.MatchmakingContext");
		return ptr;
	}

};


// Class BlueprintContext.PartyContext
// 0x0250 (0x0280 - 0x0030)
class UPartyContext : public UBlueprintContextBase
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0030(0x0068) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPartyTransitionStarted;                                 // 0x0098(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPartyTransitionCompleted;                               // 0x00A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x1C8];                                     // 0x00B8(0x01C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BlueprintContext.PartyContext");
		return ptr;
	}


	void OnPartyTransitionStartedDelegate__DelegateSignature(EUTPartyTransition PartyTransition);
	void OnPartyTransitionCompleteDelegate__DelegateSignature(EUTPartyTransition PartyTransition);
	int GetPartySize();
	void GetLocalPartyMemberNames(TArray<struct FText>* PartyMemberNamess);
	void GetLocalPartyMemberIDs(TArray<struct FUniqueNetIdRepl>* PartyMemberIDs);
};


// Class BlueprintContext.BlueprintContextLibrary
// 0x0000 (0x0028 - 0x0028)
class UBlueprintContextLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BlueprintContext.BlueprintContextLibrary");
		return ptr;
	}


	class UBlueprintContextBase* STATIC_GetContext(class UObject* ContextObject, class UClass* Class);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

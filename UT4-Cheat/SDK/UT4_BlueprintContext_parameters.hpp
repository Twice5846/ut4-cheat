#pragma once

// Unreal Tournament 4 (Pre Alpha) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// DelegateFunction BlueprintContext.PartyContext.OnPartyTransitionStartedDelegate__DelegateSignature
struct UPartyContext_OnPartyTransitionStartedDelegate__DelegateSignature_Params
{
	EUTPartyTransition                                 PartyTransition;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction BlueprintContext.PartyContext.OnPartyTransitionCompleteDelegate__DelegateSignature
struct UPartyContext_OnPartyTransitionCompleteDelegate__DelegateSignature_Params
{
	EUTPartyTransition                                 PartyTransition;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlueprintContext.PartyContext.GetPartySize
struct UPartyContext_GetPartySize_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlueprintContext.PartyContext.GetLocalPartyMemberNames
struct UPartyContext_GetLocalPartyMemberNames_Params
{
	TArray<struct FText>                               PartyMemberNamess;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function BlueprintContext.PartyContext.GetLocalPartyMemberIDs
struct UPartyContext_GetLocalPartyMemberIDs_Params
{
	TArray<struct FUniqueNetIdRepl>                    PartyMemberIDs;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function BlueprintContext.BlueprintContextLibrary.GetContext
struct UBlueprintContextLibrary_GetContext_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UBlueprintContextBase*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

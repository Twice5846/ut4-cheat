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

// Function UTMcpProfile.UtMcpDefinition.GetIconAsset
struct UUtMcpDefinition_GetIconAsset_Params
{
	TAssetPtr<class UObject>                           ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function UTMcpProfile.UtMcpCardPackDefinition.GetExplicitCards
struct UUtMcpCardPackDefinition_GetExplicitCards_Params
{
	TArray<class UObject*>                             Cards;                                                    // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UTMcpProfile.UtMcpItemAware.GetMcpId
struct UUtMcpItemAware_GetMcpId_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function UTMcpProfile.UtMcpItemAware.GetLevel
struct UUtMcpItemAware_GetLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UTMcpProfile.UtMcpItemAware.GetCount
struct UUtMcpItemAware_GetCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UTMcpProfile.UtMcpItem.GetLevel
struct UUtMcpItem_GetLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UTMcpProfile.UtMcpItem.GetCount
struct UUtMcpItem_GetCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UTMcpProfile.UtMcpBoostItem.GetInternalData
struct UUtMcpBoostItem_GetInternalData_Params
{
	class UUtMcpBoostDefinition*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UTMcpProfile.UtMcpCardPackItem.GetInternalData
struct UUtMcpCardPackItem_GetInternalData_Params
{
	class UUtMcpCardPackDefinition*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UTMcpProfile.UtMcpTokenItem.GetInternalData
struct UUtMcpTokenItem_GetInternalData_Params
{
	class UUtMcpTokenDefinition*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UTMcpProfile.UTMcpProfile.SetStars
struct UUTMcpProfile_SetStars_Params
{
	int                                                newGoldStars;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                newBlueStars;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FClientUrlContext                           Context;                                                  // (Parm, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// Function UTMcpProfile.UTMcpProfile.SetAvatarAndFlag
struct UUTMcpProfile_SetAvatarAndFlag_Params
{
	struct FString                                     newAvatar;                                                // (Parm, ZeroConstructor)
	struct FString                                     newFlag;                                                  // (Parm, ZeroConstructor)
	struct FClientUrlContext                           Context;                                                  // (Parm, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// Function UTMcpProfile.UTMcpProfile.GrantXP
struct UUTMcpProfile_GrantXP_Params
{
	int                                                xpAmount;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDedicatedServerUrlContext                  Context;                                                  // (Parm, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// Function UTMcpProfile.UTMcpProfile.CheckForStuff
struct UUTMcpProfile_CheckForStuff_Params
{
	struct FClientUrlContext                           Context;                                                  // (Parm, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

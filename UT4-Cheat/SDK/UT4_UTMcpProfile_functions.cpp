// Unreal Tournament 4 (Pre Alpha) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UTMcpProfile.UtMcpDefinition.GetIconAsset
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TAssetPtr<class UObject>       ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

TAssetPtr<class UObject> UUtMcpDefinition::GetIconAsset()
{
	static auto fn = UObject::FindObject<UFunction>("Function UTMcpProfile.UtMcpDefinition.GetIconAsset");

	UUtMcpDefinition_GetIconAsset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UTMcpProfile.UtMcpCardPackDefinition.GetExplicitCards
// (Final, Native, Public, HasOutParms, BlueprintCallable, Const)
// Parameters:
// TArray<class UObject*>         Cards                          (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUtMcpCardPackDefinition::GetExplicitCards(TArray<class UObject*>* Cards)
{
	static auto fn = UObject::FindObject<UFunction>("Function UTMcpProfile.UtMcpCardPackDefinition.GetExplicitCards");

	UUtMcpCardPackDefinition_GetExplicitCards_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cards != nullptr)
		*Cards = params.Cards;

	return params.ReturnValue;
}


// Function UTMcpProfile.UtMcpItemAware.GetMcpId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUtMcpItemAware::GetMcpId()
{
	static auto fn = UObject::FindObject<UFunction>("Function UTMcpProfile.UtMcpItemAware.GetMcpId");

	UUtMcpItemAware_GetMcpId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UTMcpProfile.UtMcpItemAware.GetLevel
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUtMcpItemAware::GetLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function UTMcpProfile.UtMcpItemAware.GetLevel");

	UUtMcpItemAware_GetLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UTMcpProfile.UtMcpItemAware.GetCount
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUtMcpItemAware::GetCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function UTMcpProfile.UtMcpItemAware.GetCount");

	UUtMcpItemAware_GetCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UTMcpProfile.UtMcpItem.GetLevel
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUtMcpItem::GetLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function UTMcpProfile.UtMcpItem.GetLevel");

	UUtMcpItem_GetLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UTMcpProfile.UtMcpItem.GetCount
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUtMcpItem::GetCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function UTMcpProfile.UtMcpItem.GetCount");

	UUtMcpItem_GetCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UTMcpProfile.UtMcpBoostItem.GetInternalData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UUtMcpBoostDefinition*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUtMcpBoostDefinition* UUtMcpBoostItem::GetInternalData()
{
	static auto fn = UObject::FindObject<UFunction>("Function UTMcpProfile.UtMcpBoostItem.GetInternalData");

	UUtMcpBoostItem_GetInternalData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UTMcpProfile.UtMcpCardPackItem.GetInternalData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UUtMcpCardPackDefinition* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUtMcpCardPackDefinition* UUtMcpCardPackItem::GetInternalData()
{
	static auto fn = UObject::FindObject<UFunction>("Function UTMcpProfile.UtMcpCardPackItem.GetInternalData");

	UUtMcpCardPackItem_GetInternalData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UTMcpProfile.UtMcpTokenItem.GetInternalData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UUtMcpTokenDefinition*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUtMcpTokenDefinition* UUtMcpTokenItem::GetInternalData()
{
	static auto fn = UObject::FindObject<UFunction>("Function UTMcpProfile.UtMcpTokenItem.GetInternalData");

	UUtMcpTokenItem_GetInternalData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UTMcpProfile.UTMcpProfile.SetStars
// (Net, NetReliable, NetRequest, Native, Event, Public)
// Parameters:
// int                            newGoldStars                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            newBlueStars                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FClientUrlContext       Context                        (Parm, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

void UUTMcpProfile::SetStars(int newGoldStars, int newBlueStars, const struct FClientUrlContext& Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function UTMcpProfile.UTMcpProfile.SetStars");

	UUTMcpProfile_SetStars_Params params;
	params.newGoldStars = newGoldStars;
	params.newBlueStars = newBlueStars;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UTMcpProfile.UTMcpProfile.SetAvatarAndFlag
// (Net, NetReliable, NetRequest, Native, Event, Public)
// Parameters:
// struct FString                 newAvatar                      (Parm, ZeroConstructor)
// struct FString                 newFlag                        (Parm, ZeroConstructor)
// struct FClientUrlContext       Context                        (Parm, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

void UUTMcpProfile::SetAvatarAndFlag(const struct FString& newAvatar, const struct FString& newFlag, const struct FClientUrlContext& Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function UTMcpProfile.UTMcpProfile.SetAvatarAndFlag");

	UUTMcpProfile_SetAvatarAndFlag_Params params;
	params.newAvatar = newAvatar;
	params.newFlag = newFlag;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UTMcpProfile.UTMcpProfile.GrantXP
// (Net, NetReliable, NetRequest, Native, Event, Public)
// Parameters:
// int                            xpAmount                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FDedicatedServerUrlContext Context                        (Parm, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

void UUTMcpProfile::GrantXP(int xpAmount, const struct FDedicatedServerUrlContext& Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function UTMcpProfile.UTMcpProfile.GrantXP");

	UUTMcpProfile_GrantXP_Params params;
	params.xpAmount = xpAmount;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UTMcpProfile.UTMcpProfile.CheckForStuff
// (Net, NetReliable, NetRequest, Native, Event, Public)
// Parameters:
// struct FClientUrlContext       Context                        (Parm, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

void UUTMcpProfile::CheckForStuff(const struct FClientUrlContext& Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function UTMcpProfile.UTMcpProfile.CheckForStuff");

	UUTMcpProfile_CheckForStuff_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

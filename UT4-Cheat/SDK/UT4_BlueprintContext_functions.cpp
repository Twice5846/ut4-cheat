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

// DelegateFunction BlueprintContext.PartyContext.OnPartyTransitionStartedDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// EUTPartyTransition             PartyTransition                (Parm, ZeroConstructor, IsPlainOldData)

void UPartyContext::OnPartyTransitionStartedDelegate__DelegateSignature(EUTPartyTransition PartyTransition)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.PartyContext.OnPartyTransitionStartedDelegate__DelegateSignature");

	UPartyContext_OnPartyTransitionStartedDelegate__DelegateSignature_Params params;
	params.PartyTransition = PartyTransition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction BlueprintContext.PartyContext.OnPartyTransitionCompleteDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// EUTPartyTransition             PartyTransition                (Parm, ZeroConstructor, IsPlainOldData)

void UPartyContext::OnPartyTransitionCompleteDelegate__DelegateSignature(EUTPartyTransition PartyTransition)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction BlueprintContext.PartyContext.OnPartyTransitionCompleteDelegate__DelegateSignature");

	UPartyContext_OnPartyTransitionCompleteDelegate__DelegateSignature_Params params;
	params.PartyTransition = PartyTransition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlueprintContext.PartyContext.GetPartySize
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPartyContext::GetPartySize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintContext.PartyContext.GetPartySize");

	UPartyContext_GetPartySize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlueprintContext.PartyContext.GetLocalPartyMemberNames
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FText>           PartyMemberNamess              (Parm, OutParm, ZeroConstructor)

void UPartyContext::GetLocalPartyMemberNames(TArray<struct FText>* PartyMemberNamess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintContext.PartyContext.GetLocalPartyMemberNames");

	UPartyContext_GetLocalPartyMemberNames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PartyMemberNamess != nullptr)
		*PartyMemberNamess = params.PartyMemberNamess;
}


// Function BlueprintContext.PartyContext.GetLocalPartyMemberIDs
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FUniqueNetIdRepl> PartyMemberIDs                 (Parm, OutParm, ZeroConstructor)

void UPartyContext::GetLocalPartyMemberIDs(TArray<struct FUniqueNetIdRepl>* PartyMemberIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintContext.PartyContext.GetLocalPartyMemberIDs");

	UPartyContext_GetLocalPartyMemberIDs_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PartyMemberIDs != nullptr)
		*PartyMemberIDs = params.PartyMemberIDs;
}


// Function BlueprintContext.BlueprintContextLibrary.GetContext
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)
// class UBlueprintContextBase*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBlueprintContextBase* UBlueprintContextLibrary::STATIC_GetContext(class UObject* ContextObject, class UClass* Class)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintContext.BlueprintContextLibrary.GetContext");

	UBlueprintContextLibrary_GetContext_Params params;
	params.ContextObject = ContextObject;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

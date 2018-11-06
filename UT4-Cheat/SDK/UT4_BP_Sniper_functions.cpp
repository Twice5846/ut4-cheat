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

// Function BP_Sniper.BP_Sniper_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Sniper_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sniper.BP_Sniper_C.UserConstructionScript");

	ABP_Sniper_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Sniper.BP_Sniper_C.ExecuteUbergraph_BP_Sniper
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Sniper_C::ExecuteUbergraph_BP_Sniper(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sniper.BP_Sniper_C.ExecuteUbergraph_BP_Sniper");

	ABP_Sniper_C_ExecuteUbergraph_BP_Sniper_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

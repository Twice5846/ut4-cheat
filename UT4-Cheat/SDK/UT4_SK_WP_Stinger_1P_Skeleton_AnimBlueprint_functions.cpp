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

// Function SK_WP_Stinger_1P_Skeleton_AnimBlueprint.SK_WP_Stinger_1P_Skeleton_AnimBlueprint_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (Parm, ZeroConstructor, IsPlainOldData)

void USK_WP_Stinger_1P_Skeleton_AnimBlueprint_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function SK_WP_Stinger_1P_Skeleton_AnimBlueprint.SK_WP_Stinger_1P_Skeleton_AnimBlueprint_C.BlueprintUpdateAnimation");

	USK_WP_Stinger_1P_Skeleton_AnimBlueprint_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SK_WP_Stinger_1P_Skeleton_AnimBlueprint.SK_WP_Stinger_1P_Skeleton_AnimBlueprint_C.ExecuteUbergraph_SK_WP_Stinger_1P_Skeleton_AnimBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USK_WP_Stinger_1P_Skeleton_AnimBlueprint_C::ExecuteUbergraph_SK_WP_Stinger_1P_Skeleton_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SK_WP_Stinger_1P_Skeleton_AnimBlueprint.SK_WP_Stinger_1P_Skeleton_AnimBlueprint_C.ExecuteUbergraph_SK_WP_Stinger_1P_Skeleton_AnimBlueprint");

	USK_WP_Stinger_1P_Skeleton_AnimBlueprint_C_ExecuteUbergraph_SK_WP_Stinger_1P_Skeleton_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function SK_WP_RocketLauncher_3P_AnimBP.SK_WP_RocketLauncher_3P_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_WP_RocketLauncher_3P_AnimBP_AnimGraphNode_BlendListByInt_51513E854E5C320303C9FC9BDEDC1BC0
// (BlueprintEvent)

void USK_WP_RocketLauncher_3P_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_WP_RocketLauncher_3P_AnimBP_AnimGraphNode_BlendListByInt_51513E854E5C320303C9FC9BDEDC1BC0()
{
	static auto fn = UObject::FindObject<UFunction>("Function SK_WP_RocketLauncher_3P_AnimBP.SK_WP_RocketLauncher_3P_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_WP_RocketLauncher_3P_AnimBP_AnimGraphNode_BlendListByInt_51513E854E5C320303C9FC9BDEDC1BC0");

	USK_WP_RocketLauncher_3P_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SK_WP_RocketLauncher_3P_AnimBP_AnimGraphNode_BlendListByInt_51513E854E5C320303C9FC9BDEDC1BC0_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SK_WP_RocketLauncher_3P_AnimBP.SK_WP_RocketLauncher_3P_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (Parm, ZeroConstructor, IsPlainOldData)

void USK_WP_RocketLauncher_3P_AnimBP_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function SK_WP_RocketLauncher_3P_AnimBP.SK_WP_RocketLauncher_3P_AnimBP_C.BlueprintUpdateAnimation");

	USK_WP_RocketLauncher_3P_AnimBP_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SK_WP_RocketLauncher_3P_AnimBP.SK_WP_RocketLauncher_3P_AnimBP_C.ExecuteUbergraph_SK_WP_RocketLauncher_3P_AnimBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USK_WP_RocketLauncher_3P_AnimBP_C::ExecuteUbergraph_SK_WP_RocketLauncher_3P_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SK_WP_RocketLauncher_3P_AnimBP.SK_WP_RocketLauncher_3P_AnimBP_C.ExecuteUbergraph_SK_WP_RocketLauncher_3P_AnimBP");

	USK_WP_RocketLauncher_3P_AnimBP_C_ExecuteUbergraph_SK_WP_RocketLauncher_3P_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

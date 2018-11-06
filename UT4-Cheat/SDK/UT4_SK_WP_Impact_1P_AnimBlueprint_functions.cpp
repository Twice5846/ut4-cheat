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

// Function SK_WP_Impact_1P_AnimBlueprint.SK_WP_Impact_1P_AnimBlueprint_C.ExecuteUbergraph_SK_WP_Impact_1P_AnimBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USK_WP_Impact_1P_AnimBlueprint_C::ExecuteUbergraph_SK_WP_Impact_1P_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SK_WP_Impact_1P_AnimBlueprint.SK_WP_Impact_1P_AnimBlueprint_C.ExecuteUbergraph_SK_WP_Impact_1P_AnimBlueprint");

	USK_WP_Impact_1P_AnimBlueprint_C_ExecuteUbergraph_SK_WP_Impact_1P_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function GrenadeDetonateIndicator.GrenadeDetonateIndicator_C.Get_GrenadeCount_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UGrenadeDetonateIndicator_C::Get_GrenadeCount_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeDetonateIndicator.GrenadeDetonateIndicator_C.Get_GrenadeCount_Text_1");

	UGrenadeDetonateIndicator_C_Get_GrenadeCount_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

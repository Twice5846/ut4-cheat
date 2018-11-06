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

// Function Rocket_AnimBP.Rocket_AnimBP_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void URocket_AnimBP_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rocket_AnimBP.Rocket_AnimBP_C.BlueprintInitializeAnimation");

	URocket_AnimBP_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rocket_AnimBP.Rocket_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (Parm, ZeroConstructor, IsPlainOldData)

void URocket_AnimBP_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rocket_AnimBP.Rocket_AnimBP_C.BlueprintUpdateAnimation");

	URocket_AnimBP_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rocket_AnimBP.Rocket_AnimBP_C.ExecuteUbergraph_Rocket_AnimBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void URocket_AnimBP_C::ExecuteUbergraph_Rocket_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rocket_AnimBP.Rocket_AnimBP_C.ExecuteUbergraph_Rocket_AnimBP");

	URocket_AnimBP_C_ExecuteUbergraph_Rocket_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

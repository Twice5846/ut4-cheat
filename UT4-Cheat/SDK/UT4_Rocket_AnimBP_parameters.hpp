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

// Function Rocket_AnimBP.Rocket_AnimBP_C.BlueprintInitializeAnimation
struct URocket_AnimBP_C_BlueprintInitializeAnimation_Params
{
};

// Function Rocket_AnimBP.Rocket_AnimBP_C.BlueprintUpdateAnimation
struct URocket_AnimBP_C_BlueprintUpdateAnimation_Params
{
	float*                                             DeltaTimeX;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Rocket_AnimBP.Rocket_AnimBP_C.ExecuteUbergraph_Rocket_AnimBP
struct URocket_AnimBP_C_ExecuteUbergraph_Rocket_AnimBP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

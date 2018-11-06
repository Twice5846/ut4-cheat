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

// Function BP_FlakCannon.BP_FlakCannon_C.UserConstructionScript
struct ABP_FlakCannon_C_UserConstructionScript_Params
{
};

// Function BP_FlakCannon.BP_FlakCannon_C.ReceiveTick
struct ABP_FlakCannon_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FlakCannon.BP_FlakCannon_C.ExecuteUbergraph_BP_FlakCannon
struct ABP_FlakCannon_C_ExecuteUbergraph_BP_FlakCannon_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function BP_Flowing_Water.BP_Flowing_Water_C.UserConstructionScript
struct ABP_Flowing_Water_C_UserConstructionScript_Params
{
};

// Function BP_Flowing_Water.BP_Flowing_Water_C.ReceiveActorBeginOverlap
struct ABP_Flowing_Water_C_ReceiveActorBeginOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Flowing_Water.BP_Flowing_Water_C.ReceiveActorEndOverlap
struct ABP_Flowing_Water_C_ReceiveActorEndOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Flowing_Water.BP_Flowing_Water_C.ExecuteUbergraph_BP_Flowing_Water
struct ABP_Flowing_Water_C_ExecuteUbergraph_BP_Flowing_Water_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

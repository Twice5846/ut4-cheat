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

// Function StingerImpact.StingerImpact_C.ComponentCreated
struct AStingerImpact_C_ComponentCreated_Params
{
	class USceneComponent**                            NewComp;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        HitComp;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     SpawnedBy;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FImpactEffectNamedParameters*               EffectParams;                                             // (Parm)
};

// Function StingerImpact.StingerImpact_C.UserConstructionScript
struct AStingerImpact_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function FX_RocketExplosion.FX_RocketExplosion_C.ComponentCreated
struct AFX_RocketExplosion_C_ComponentCreated_Params
{
	class USceneComponent**                            NewComp;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        HitComp;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     SpawnedBy;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FImpactEffectNamedParameters*               EffectParams;                                             // (Parm)
};

// Function FX_RocketExplosion.FX_RocketExplosion_C.UserConstructionScript
struct AFX_RocketExplosion_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

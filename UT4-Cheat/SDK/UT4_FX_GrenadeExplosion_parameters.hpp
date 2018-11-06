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

// Function FX_GrenadeExplosion.FX_GrenadeExplosion_C.ComponentCreated
struct AFX_GrenadeExplosion_C_ComponentCreated_Params
{
	class USceneComponent**                            NewComp;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        HitComp;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     SpawnedBy;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FImpactEffectNamedParameters*               EffectParams;                                             // (Parm)
};

// Function FX_GrenadeExplosion.FX_GrenadeExplosion_C.UserConstructionScript
struct AFX_GrenadeExplosion_C_UserConstructionScript_Params
{
};

// Function FX_GrenadeExplosion.FX_GrenadeExplosion_C.ExecuteUbergraph_FX_GrenadeExplosion
struct AFX_GrenadeExplosion_C_ExecuteUbergraph_FX_GrenadeExplosion_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

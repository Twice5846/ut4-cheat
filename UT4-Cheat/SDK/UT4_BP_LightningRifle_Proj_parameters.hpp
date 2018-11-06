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

// Function BP_LightningRifle_Proj.BP_LightningRifle_Proj_C.UserConstructionScript
struct ABP_LightningRifle_Proj_C_UserConstructionScript_Params
{
};

// Function BP_LightningRifle_Proj.BP_LightningRifle_Proj_C.DamageImpactedActor
struct ABP_LightningRifle_Proj_C_DamageImpactedActor_Params
{
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function BP_LightningRifle_Proj.BP_LightningRifle_Proj_C.ExecuteUbergraph_BP_LightningRifle_Proj
struct ABP_LightningRifle_Proj_C_ExecuteUbergraph_BP_LightningRifle_Proj_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

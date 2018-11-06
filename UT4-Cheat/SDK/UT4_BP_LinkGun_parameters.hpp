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

// Function BP_LinkGun.BP_LinkGun_C.GetAISelectRating
struct ABP_LinkGun_C_GetAISelectRating_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_LinkGun.BP_LinkGun_C.CanAttack
struct ABP_LinkGun_C_CanAttack_Params
{
	class AActor**                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    TargetLoc;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool*                                              bDirectOnly;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bPreferCurrentMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      BestFireMode;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     OptimalTargetLoc;                                         // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_LinkGun.BP_LinkGun_C.UserConstructionScript
struct ABP_LinkGun_C_UserConstructionScript_Params
{
};

// Function BP_LinkGun.BP_LinkGun_C.PlayImpactEffects
struct ABP_LinkGun_C_PlayImpactEffects_Params
{
	struct FVector*                                    TargetLoc;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	unsigned char*                                     FireMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    SpawnLocation;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator*                                   SpawnRotation;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function BP_LinkGun.BP_LinkGun_C.DetachFromOwner
struct ABP_LinkGun_C_DetachFromOwner_Params
{
};

// Function BP_LinkGun.BP_LinkGun_C.StopFiringEffects
struct ABP_LinkGun_C_StopFiringEffects_Params
{
};

// Function BP_LinkGun.BP_LinkGun_C.ReceiveTick
struct ABP_LinkGun_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LinkGun.BP_LinkGun_C.FiringInfoUpdated
struct ABP_LinkGun_C_FiringInfoUpdated_Params
{
	unsigned char*                                     InFireMode;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     FlashCount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    InFlashLocation;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LinkGun.BP_LinkGun_C.ExecuteUbergraph_BP_LinkGun
struct ABP_LinkGun_C_ExecuteUbergraph_BP_LinkGun_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

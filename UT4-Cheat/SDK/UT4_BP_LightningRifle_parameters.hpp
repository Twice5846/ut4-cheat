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

// Function BP_LightningRifle.BP_LightningRifle_C.CanAttack
struct ABP_LightningRifle_C_CanAttack_Params
{
	class AActor**                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    TargetLoc;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool*                                              bDirectOnly;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bPreferCurrentMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      BestFireMode;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     OptimalTargetLoc;                                         // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_LightningRifle.BP_LightningRifle_C.UserConstructionScript
struct ABP_LightningRifle_C_UserConstructionScript_Params
{
};

// Function BP_LightningRifle.BP_LightningRifle_C.ReceiveBeginPlay
struct ABP_LightningRifle_C_ReceiveBeginPlay_Params
{
};

// Function BP_LightningRifle.BP_LightningRifle_C.TipArc
struct ABP_LightningRifle_C_TipArc_Params
{
};

// Function BP_LightningRifle.BP_LightningRifle_C.OnBringUp
struct ABP_LightningRifle_C_OnBringUp_Params
{
};

// Function BP_LightningRifle.BP_LightningRifle_C.ExecuteUbergraph_BP_LightningRifle
struct ABP_LightningRifle_C_ExecuteUbergraph_BP_LightningRifle_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

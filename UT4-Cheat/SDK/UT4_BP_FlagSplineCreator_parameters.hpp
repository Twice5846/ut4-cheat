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

// Function BP_FlagSplineCreator.BP_FlagSplineCreator_C.UserConstructionScript
struct ABP_FlagSplineCreator_C_UserConstructionScript_Params
{
};

// Function BP_FlagSplineCreator.BP_FlagSplineCreator_C.SplineFade__FinishedFunc
struct ABP_FlagSplineCreator_C_SplineFade__FinishedFunc_Params
{
};

// Function BP_FlagSplineCreator.BP_FlagSplineCreator_C.SplineFade__UpdateFunc
struct ABP_FlagSplineCreator_C_SplineFade__UpdateFunc_Params
{
};

// Function BP_FlagSplineCreator.BP_FlagSplineCreator_C.AddSplinePoint
struct ABP_FlagSplineCreator_C_AddSplinePoint_Params
{
	struct FVector                                     NextPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FlagSplineCreator.BP_FlagSplineCreator_C.SetTeam
struct ABP_FlagSplineCreator_C_SetTeam_Params
{
	class AUTTeamInfo**                                Team;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FlagSplineCreator.BP_FlagSplineCreator_C.SetPoints
struct ABP_FlagSplineCreator_C_SetPoints_Params
{
	TArray<struct FVector>*                            Points;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_FlagSplineCreator.BP_FlagSplineCreator_C.EndTrail
struct ABP_FlagSplineCreator_C_EndTrail_Params
{
};

// Function BP_FlagSplineCreator.BP_FlagSplineCreator_C.ReceiveTick
struct ABP_FlagSplineCreator_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FlagSplineCreator.BP_FlagSplineCreator_C.ExecuteUbergraph_BP_FlagSplineCreator
struct ABP_FlagSplineCreator_C_ExecuteUbergraph_BP_FlagSplineCreator_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

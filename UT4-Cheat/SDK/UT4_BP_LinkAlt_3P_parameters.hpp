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

// Function BP_LinkAlt_3P.BP_LinkAlt_3P_C.SetColors
struct ABP_LinkAlt_3P_C_SetColors_Params
{
	struct FLinearColor                                NewPrimeColor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LinkAlt_3P.BP_LinkAlt_3P_C.SetMaterialParams
struct ABP_LinkAlt_3P_C_SetMaterialParams_Params
{
};

// Function BP_LinkAlt_3P.BP_LinkAlt_3P_C.Deactivate
struct ABP_LinkAlt_3P_C_Deactivate_Params
{
};

// Function BP_LinkAlt_3P.BP_LinkAlt_3P_C.UserConstructionScript
struct ABP_LinkAlt_3P_C_UserConstructionScript_Params
{
};

// Function BP_LinkAlt_3P.BP_LinkAlt_3P_C.ReceiveBeginPlay
struct ABP_LinkAlt_3P_C_ReceiveBeginPlay_Params
{
};

// Function BP_LinkAlt_3P.BP_LinkAlt_3P_C.ReceiveTick
struct ABP_LinkAlt_3P_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LinkAlt_3P.BP_LinkAlt_3P_C.MaterialCheck
struct ABP_LinkAlt_3P_C_MaterialCheck_Params
{
};

// Function BP_LinkAlt_3P.BP_LinkAlt_3P_C.ExecuteUbergraph_BP_LinkAlt_3P
struct ABP_LinkAlt_3P_C_ExecuteUbergraph_BP_LinkAlt_3P_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

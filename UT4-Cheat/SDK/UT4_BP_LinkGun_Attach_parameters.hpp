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

// Function BP_LinkGun_Attach.BP_LinkGun_Attach_C.OverrideFiringEffects
struct ABP_LinkGun_Attach_C_OverrideFiringEffects_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_LinkGun_Attach.BP_LinkGun_Attach_C.UserConstructionScript
struct ABP_LinkGun_Attach_C_UserConstructionScript_Params
{
};

// Function BP_LinkGun_Attach.BP_LinkGun_Attach_C.StopFiringEffects
struct ABP_LinkGun_Attach_C_StopFiringEffects_Params
{
	bool*                                              bIgnoreCurrentMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LinkGun_Attach.BP_LinkGun_Attach_C.ReceiveEndPlay
struct ABP_LinkGun_Attach_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LinkGun_Attach.BP_LinkGun_Attach_C.ExecuteUbergraph_BP_LinkGun_Attach
struct ABP_LinkGun_Attach_C_ExecuteUbergraph_BP_LinkGun_Attach_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

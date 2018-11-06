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

// Function ImpactHammerShieldProj.ImpactHammerShieldProj_C.UserConstructionScript
struct AImpactHammerShieldProj_C_UserConstructionScript_Params
{
};

// Function ImpactHammerShieldProj.ImpactHammerShieldProj_C.ReceiveBeginPlay
struct AImpactHammerShieldProj_C_ReceiveBeginPlay_Params
{
};

// Function ImpactHammerShieldProj.ImpactHammerShieldProj_C.ReceiveTick
struct AImpactHammerShieldProj_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ImpactHammerShieldProj.ImpactHammerShieldProj_C.ExecuteUbergraph_ImpactHammerShieldProj
struct AImpactHammerShieldProj_C_ExecuteUbergraph_ImpactHammerShieldProj_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

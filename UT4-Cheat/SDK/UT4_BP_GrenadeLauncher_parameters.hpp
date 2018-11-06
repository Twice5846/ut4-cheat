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

// Function BP_GrenadeLauncher.BP_GrenadeLauncher_C.UserConstructionScript
struct ABP_GrenadeLauncher_C_UserConstructionScript_Params
{
};

// Function BP_GrenadeLauncher.BP_GrenadeLauncher_C.ReceiveTick
struct ABP_GrenadeLauncher_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GrenadeLauncher.BP_GrenadeLauncher_C.PlayDetonationEffects
struct ABP_GrenadeLauncher_C_PlayDetonationEffects_Params
{
};

// Function BP_GrenadeLauncher.BP_GrenadeLauncher_C.ShowDetonatorUI
struct ABP_GrenadeLauncher_C_ShowDetonatorUI_Params
{
};

// Function BP_GrenadeLauncher.BP_GrenadeLauncher_C.HideDetonatorUI
struct ABP_GrenadeLauncher_C_HideDetonatorUI_Params
{
};

// Function BP_GrenadeLauncher.BP_GrenadeLauncher_C.OnContinuedFiring
struct ABP_GrenadeLauncher_C_OnContinuedFiring_Params
{
};

// Function BP_GrenadeLauncher.BP_GrenadeLauncher_C.AddDetonatorUIToHUD
struct ABP_GrenadeLauncher_C_AddDetonatorUIToHUD_Params
{
};

// Function BP_GrenadeLauncher.BP_GrenadeLauncher_C.ExecuteUbergraph_BP_GrenadeLauncher
struct ABP_GrenadeLauncher_C_ExecuteUbergraph_BP_GrenadeLauncher_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function BP_UTDmg_LightningHeadshot.BP_UTDmg_LightningHeadshot_C.PlayDeathEffects
struct UBP_UTDmg_LightningHeadshot_C_PlayDeathEffects_Params
{
	class AUTCharacter**                               DyingPawn;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UTDmg_LightningHeadshot.BP_UTDmg_LightningHeadshot_C.GetDeathAnim
struct UBP_UTDmg_LightningHeadshot_C_GetDeathAnim_Params
{
	class AUTCharacter**                               DyingPawn;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_UTDmg_LightningHeadshot.BP_UTDmg_LightningHeadshot_C.OverrideDeathSound
struct UBP_UTDmg_LightningHeadshot_C_OverrideDeathSound_Params
{
	class AUTCharacter**                               Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

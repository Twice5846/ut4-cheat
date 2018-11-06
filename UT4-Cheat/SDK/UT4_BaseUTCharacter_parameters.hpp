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

// Function BaseUTCharacter.BaseUTCharacter_C.OnShockComboExplode
struct ABaseUTCharacter_C_OnShockComboExplode_Params
{
};

// Function BaseUTCharacter.BaseUTCharacter_C.SpawnActorHelper
struct ABaseUTCharacter_C_SpawnActorHelper_Params
{
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  SpawnTransform;                                           // (Parm, IsPlainOldData)
	class AActor*                                      Spawned_Actor;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BaseUTCharacter.BaseUTCharacter_C.GetGameTime
struct ABaseUTCharacter_C_GetGameTime_Params
{
	float                                              GameTime;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BaseUTCharacter.BaseUTCharacter_C.UserConstructionScript
struct ABaseUTCharacter_C_UserConstructionScript_Params
{
};

// Function BaseUTCharacter.BaseUTCharacter_C.PlayTakeHitEffects
struct ABaseUTCharacter_C_PlayTakeHitEffects_Params
{
};

// Function BaseUTCharacter.BaseUTCharacter_C.OnRep_Invisible
struct ABaseUTCharacter_C_OnRep_Invisible_Params
{
};

// Function BaseUTCharacter.BaseUTCharacter_C.OnSlide
struct ABaseUTCharacter_C_OnSlide_Params
{
	struct FVector*                                    SlideLocation;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector*                                    SlideDir;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function BaseUTCharacter.BaseUTCharacter_C.DrawPoint
struct ABaseUTCharacter_C_DrawPoint_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BaseUTCharacter.BaseUTCharacter_C.ExecuteUbergraph_BaseUTCharacter
struct ABaseUTCharacter_C_ExecuteUbergraph_BaseUTCharacter_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BaseUTCharacter.BaseUTCharacter_C.NewEventDispatcher__DelegateSignature
struct ABaseUTCharacter_C_NewEventDispatcher__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

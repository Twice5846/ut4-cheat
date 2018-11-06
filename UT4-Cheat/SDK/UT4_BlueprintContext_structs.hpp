#pragma once

// Unreal Tournament 4 (Pre Alpha) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum BlueprintContext.EUTPartyTransition
enum class EUTPartyTransition : uint8_t
{
	EUTPartyTransition__Idle       = 0,
	EUTPartyTransition__Joining    = 1,
	EUTPartyTransition__Leaving    = 2,
	EUTPartyTransition__Max        = 3,
	EUTPartyTransition__EUTPartyTransition_MAX = 4
};


// Enum BlueprintContext.EPartyMemberState
enum class EPartyMemberState : uint8_t
{
	EPartyMemberState__Solo        = 0,
	EPartyMemberState__InParty     = 1,
	EPartyMemberState__EPartyMemberState_MAX = 2
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

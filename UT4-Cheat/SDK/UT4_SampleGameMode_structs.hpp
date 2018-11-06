#pragma once

// Unreal Tournament 4 (Pre Alpha) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SampleGameMode.StartingInventory
// 0x0010
struct FStartingInventory
{
	TArray<class UClass*>                              Inventory;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct SampleGameMode.DamageTypeToProgess
// 0x0010
struct FDamageTypeToProgess
{
	TArray<class UClass*>                              DamageType;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

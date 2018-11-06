#pragma once

// Unreal Tournament 4 (Pre Alpha) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class SampleGameMode.SampleGameMode
// 0x0028 (0x0930 - 0x0908)
class ASampleGameMode : public AUTGameMode
{
public:
	TArray<struct FStartingInventory>                  StartingInventories;                                      // 0x0908(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FDamageTypeToProgess>                ScoringDamageTypes;                                       // 0x0918(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                MagicNumber;                                              // 0x0928(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x092C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SampleGameMode.SampleGameMode");
		return ptr;
	}

};


// Class SampleGameMode.SampleGameState
// 0x0000 (0x0BE0 - 0x0BE0)
class ASampleGameState : public AUTGameState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SampleGameMode.SampleGameState");
		return ptr;
	}

};


// Class SampleGameMode.SamplePlayerState
// 0x0000 (0x09D0 - 0x09D0)
class ASamplePlayerState : public AUTPlayerState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SampleGameMode.SamplePlayerState");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

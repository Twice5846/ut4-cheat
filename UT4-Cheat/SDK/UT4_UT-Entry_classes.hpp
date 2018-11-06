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

// BlueprintGeneratedClass UT-Entry.UT-Entry_C
// 0x0008 (0x0398 - 0x0390)
class AUT_Entry_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0390(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass UT-Entry.UT-Entry_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_UT_Entry(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

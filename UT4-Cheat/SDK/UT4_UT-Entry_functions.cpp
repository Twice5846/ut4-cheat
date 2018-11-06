// Unreal Tournament 4 (Pre Alpha) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UT-Entry.UT-Entry_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AUT_Entry_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function UT-Entry.UT-Entry_C.ReceiveBeginPlay");

	AUT_Entry_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UT-Entry.UT-Entry_C.ExecuteUbergraph_UT-Entry
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AUT_Entry_C::ExecuteUbergraph_UT_Entry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UT-Entry.UT-Entry_C.ExecuteUbergraph_UT-Entry");

	AUT_Entry_C_ExecuteUbergraph_UT_Entry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

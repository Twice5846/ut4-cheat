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

// Function ShockBall.ShockBall_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AShockBall_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShockBall.ShockBall_C.UserConstructionScript");

	AShockBall_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShockBall.ShockBall_C.OnComboExplode
// (Event, Public, BlueprintEvent)

void AShockBall_C::OnComboExplode()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShockBall.ShockBall_C.OnComboExplode");

	AShockBall_C_OnComboExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShockBall.ShockBall_C.ExecuteUbergraph_ShockBall
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AShockBall_C::ExecuteUbergraph_ShockBall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShockBall.ShockBall_C.ExecuteUbergraph_ShockBall");

	AShockBall_C_ExecuteUbergraph_ShockBall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

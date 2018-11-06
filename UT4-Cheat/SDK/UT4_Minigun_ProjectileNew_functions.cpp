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

// Function Minigun_ProjectileNew.Minigun_ProjectileNew_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMinigun_ProjectileNew_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Minigun_ProjectileNew.Minigun_ProjectileNew_C.UserConstructionScript");

	AMinigun_ProjectileNew_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Minigun_ProjectileNew.Minigun_ProjectileNew_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AMinigun_ProjectileNew_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Minigun_ProjectileNew.Minigun_ProjectileNew_C.ReceiveBeginPlay");

	AMinigun_ProjectileNew_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Minigun_ProjectileNew.Minigun_ProjectileNew_C.ExecuteUbergraph_Minigun_ProjectileNew
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMinigun_ProjectileNew_C::ExecuteUbergraph_Minigun_ProjectileNew(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Minigun_ProjectileNew.Minigun_ProjectileNew_C.ExecuteUbergraph_Minigun_ProjectileNew");

	AMinigun_ProjectileNew_C_ExecuteUbergraph_Minigun_ProjectileNew_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

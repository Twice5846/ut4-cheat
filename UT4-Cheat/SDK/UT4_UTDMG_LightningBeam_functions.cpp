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

// Function UTDMG_LightningBeam.UTDMG_LightningBeam_C.PlayDeathEffects
// (BlueprintCosmetic, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AUTCharacter**           DyingPawn                      (Parm, ZeroConstructor, IsPlainOldData)

void UUTDMG_LightningBeam_C::PlayDeathEffects(class AUTCharacter** DyingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function UTDMG_LightningBeam.UTDMG_LightningBeam_C.PlayDeathEffects");

	UUTDMG_LightningBeam_C_PlayDeathEffects_Params params;
	params.DyingPawn = DyingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

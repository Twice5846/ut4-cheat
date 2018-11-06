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

// BlueprintGeneratedClass BaseUTCharacter.BaseUTCharacter_C
// 0x0040 (0x0F70 - 0x0F30)
class ABaseUTCharacter_C : public AUTCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0F30(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        RightFootShadow;                                          // 0x0F38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        LeftFootShadow;                                           // 0x0F40(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class ABP_Flowing_Water_C*>                 WaterForceVolumes;                                        // 0x0F48(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    NewEventDispatcher;                                       // 0x0F58(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class USoundBase*                                  NewVar_1;                                                 // 0x0F68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BaseUTCharacter.BaseUTCharacter_C");
		return ptr;
	}


	void OnShockComboExplode();
	void SpawnActorHelper(class UClass* Class, const struct FTransform& SpawnTransform, class AActor** Spawned_Actor);
	void GetGameTime(float* GameTime);
	void UserConstructionScript();
	void PlayTakeHitEffects();
	void OnRep_Invisible();
	void OnSlide(struct FVector* SlideLocation, struct FVector* SlideDir);
	void DrawPoint(const struct FVector& Location);
	void ExecuteUbergraph_BaseUTCharacter(int EntryPoint);
	void NewEventDispatcher__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

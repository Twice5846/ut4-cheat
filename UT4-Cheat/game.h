#pragma once

#include <Windows.h>
#include <vector>

#include "SDK.hpp"

using namespace Classes;

extern TNameEntryArray* (__fastcall * FName_GetNames)();


class Game
{
public:

	Game(DWORD main_thread_id);
	~Game();

	template <class T> void GetAllActors(std::vector<T*>& actors) {
		auto world = GetWorld();
		if (!world) {
			return;
		}

		auto gameplay_statics = GetGameplayStatics();
		if (!gameplay_statics) {
			return;
		}

		TArray<AActor*> actors2;
		gameplay_statics->STATIC_GetAllActorsOfClass(world, T::StaticClass(), &actors2);

		for (int i = 0; i < actors2.Num(); i++) {
			actors.push_back((T*)actors2[i]);
		}
	}

	bool					IsVisible(FVector location);
	bool					IsFriend(AActor* actor);
	bool					WorldToSceen(FVector location, FVector2D& screen);

	UGameplayStatics*		GetGameplayStatics();
	UEngine*				GetEngine();
	UGameViewportClient*	GetViewport();
	UWorld*					GetWorld();
	UUTLocalPlayer*			GetLocalPlayer();
	AUTPlayerController*	GetLocalController();
	AUTCharacter*			GetLocalCharacter();
	AUTWeapon*				GetLocalWeapon();
	AUTHUD*					GetLocalHUD();

	// Getter - 
	DWORD				GetMainThreadID() const { return main_thread_id_; }
	BYTE*				GetAddress_ProcessEvent() const { return (BYTE*)GetVFunction<void(__fastcall*)(UObject*, class UFunction*, void*)>(UObject::GObjects->ObjObjects.GetByIndex(0), 57); }

private:

	DWORD		main_thread_id_;
	UEngine**	engine_pointer_;

	void*		FindObjectByPattern(const char* moduleName, const char* mask, const char* pattern);

	char*		FindPattern(HMODULE module, const char* mask, const char* pattern);
	char*		FindPattern(char* start, DWORD length, const char* mask, const char* pattern);
};

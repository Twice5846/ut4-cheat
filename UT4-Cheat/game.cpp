// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------

#include "game.h"

#include <Psapi.h>

TNameEntryArray* (__fastcall * FName_GetNames)() = nullptr;


// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
Game::Game(DWORD main_thread_id) :
	main_thread_id_(main_thread_id)
{
	FName_GetNames = (decltype(FName_GetNames))GetProcAddress(GetModuleHandle(L"UE4-Core-Win64-Shipping.dll"), "?GetNames@FName@@CAAEAV?$TStaticIndirectArrayThreadSafeRead@UFNameEntry@@$0CAAAAA@$0EAAA@@@XZ");
	
	engine_pointer_ = (decltype(engine_pointer_))GetProcAddress(GetModuleHandle(L"UE4-Engine-Win64-Shipping.dll"), "?GEngine@@3PEAVUEngine@@EA");

	UObject::GObjects = (decltype(UObject::GObjects))GetProcAddress(GetModuleHandle(L"UE4-CoreUObject-Win64-Shipping.dll"), "?GUObjectArray@@3VFUObjectArray@@A");
	FName::GNames = FName_GetNames();
}

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
Game::~Game()
{

}

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
bool Game::IsVisible(FVector location)
{
	auto controller = GetLocalController();
	if (!controller) {
		return false;
	}

	FVector view_location;
	FRotator view_rotation;
	controller->GetActorEyesViewPoint(&view_location, &view_rotation);

	auto kismet_system_library = (UKismetSystemLibrary*)UKismetSystemLibrary::StaticClass();
	return !kismet_system_library->STATIC_LineTraceSingle(
		GetWorld(),
		view_location,
		location,
		ETraceTypeQuery::TraceTypeQuery1,
		false,
		TArray<AActor*>(),
		EDrawDebugTrace::EDrawDebugTrace__None,
		true,
		FLinearColor(0, 0, 0, 0),
		FLinearColor(0, 0, 0, 0),
		0,
		nullptr
	);
}

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
bool Game::IsFriend(AActor* actor)
{
	if (!actor) {
		return false;
	}

	auto world = GetWorld();
	if (!world || !world->GameState) {
		return false;
	}

	auto game_state = (AUTGameState*)world->GameState;
	if (!game_state) {
		return false;
	}

	auto controller = GetLocalController();
	if (!controller) {
		return false;
	}

	return game_state->OnSameTeam(controller, actor);
}

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
bool Game::WorldToSceen(FVector location, FVector2D& screen)
{
	auto gameplay_statics = GetGameplayStatics();
	if (!gameplay_statics) {
		return false;
	}

	return gameplay_statics->STATIC_ProjectWorldToScreen(GetLocalController(), location, false, &screen);
}

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
UGameplayStatics* Game::GetGameplayStatics()
{
	return (UGameplayStatics*)UGameplayStatics::StaticClass();
}

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
UEngine* Game::GetEngine()
{
	return *engine_pointer_;
}

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
UGameViewportClient* Game::GetViewport()
{
	auto engine = GetEngine();
	if (!engine) {
		return nullptr;
	}

	return engine->GameViewport;
}

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
UWorld* Game::GetWorld()
{
	auto viewport = GetViewport();
	if (!viewport) {
		return nullptr;
	}

	return viewport->World;
}

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
UUTLocalPlayer* Game::GetLocalPlayer()
{
	auto viewport = GetViewport();
	if (!viewport || !viewport->GameInstance) {
		return nullptr;
	}

	auto localPlayers = viewport->GameInstance->LocalPlayers;
	if (!localPlayers.IsValidIndex(0)) {
		return nullptr;
	}

	return (UUTLocalPlayer*)localPlayers[0];
}

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
AUTPlayerController* Game::GetLocalController()
{
	auto player = GetLocalPlayer();
	if (!player) {
		return nullptr;
	}

	return (AUTPlayerController*)player->PlayerController;
}

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
AUTCharacter* Game::GetLocalCharacter()
{
	auto controller = GetLocalController();
	if (!controller) {
		return nullptr;
	}

	return (AUTCharacter*)controller->GetUTCharacter();
}

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
AUTWeapon* Game::GetLocalWeapon()
{
	auto local_character = GetLocalCharacter();
	if (!local_character) {
		return nullptr;
	}

	return local_character->Weapon;
}

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
AUTHUD* Game::GetLocalHUD()
{
	auto controller = GetLocalController();
	if (!controller) {
		return nullptr;
	}

	return (AUTHUD*)controller->MyUTHUD;
}

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
void* Game::FindObjectByPattern(const char* moduleName, const char* mask, const char* pattern)
{
	char* address = FindPattern(GetModuleHandleA(moduleName), mask, pattern);
	if (!address) {
		return nullptr;
	}

	DWORD offset = strstr(mask, "?") - mask;
	return address + *(DWORD*)(address + offset) + offset + 4;
}

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
char* Game::FindPattern(HMODULE module, const char* mask, const char* pattern)
{
	MODULEINFO moduleInfo;
	if (!GetModuleInformation(GetCurrentProcess(), module, &moduleInfo, sizeof(moduleInfo))) {
		return 0;
	}

	return FindPattern((char*)moduleInfo.lpBaseOfDll, moduleInfo.SizeOfImage, mask, pattern);
}

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
char* Game::FindPattern(char* start, DWORD length, const char* mask, const char* pattern)
{
	DWORD maskLength = strlen(mask);
	char* data = new char[maskLength];
	char* result = 0;

	for (char* currentAddress = start; currentAddress <= start + length; currentAddress++) {
		if (!ReadProcessMemory(GetCurrentProcess(), currentAddress, data, maskLength, nullptr))
			continue;

		bool patternMatch = true;
		for (int i = 0; i < maskLength; i++) {
			if (mask[i] == '?') {
				continue;
			}

			if (data[i] != pattern[i]) {
				patternMatch = false;

				break;
			}
		}

		if (patternMatch) {
			result = currentAddress;

			break;
		}
	}

	delete data;

	return result;
}

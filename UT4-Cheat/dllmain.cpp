// ----------------------------------------------------------------------------
// This SDK is for Version 0.1.12.1
// ----------------------------------------------------------------------------

#include <Windows.h>
#include "manager.h"


// ----------------------------------------------------------------------------
// Called when DLL is loaded.
// ----------------------------------------------------------------------------
void OnInject()
{
	AllocConsole();
	freopen("conin$", "r", stdin);
	freopen("conout$", "w", stdout);
	freopen("conout$", "w", stderr);

	manager.Startup();
}

// ----------------------------------------------------------------------------
// Called when DLL is unloaded.
// ----------------------------------------------------------------------------
void OnEject()
{
	FreeConsole();

	manager.Shutdown();
}

// ----------------------------------------------------------------------------
// Module entry point.
// ----------------------------------------------------------------------------
BOOL __stdcall DllMain(HMODULE module, DWORD reason, void* reserved)
{
	switch (reason)
	{
	case DLL_PROCESS_ATTACH:
	{
		CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)OnInject, nullptr, 0, nullptr);

		break;
	}
	case DLL_PROCESS_DETACH:
	{
		OnEject();

		break;
	}
	}

	return TRUE;
}

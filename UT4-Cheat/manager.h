// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------

#pragma once

// ===== Project includes =====
#include "detours/game/draw_hud_detour.h"
#include "detours/game/tick_detour.h"
#include "game.h"
#include "modules/esp.h"
#include "modules/aimbot.h"

using namespace detours;
using namespace modules;


// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
class Manager : public Module
{
public:

	Manager();
	~Manager();

	void							Startup();
	void							Shutdown();

	virtual void					Render();
	virtual void					ClientCommand();

	// Getter
	Game*							GetGame() const { return game_; }

private:

	bool							EnumerateThreadIDs(std::vector<DWORD>& thread_ids);
	BYTE*							GetThreadEntryPoint(DWORD thread_id);
	BYTE*							GetProcessEntryPoint();
	DWORD							GetMainThreadID();
	void							SuspendMainThread();
	void							ResumeMainThread();

	DrawHUDDetour*					draw_hud_detour_;
	TickDetour*						tick_detour_;

	ESP*							esp_;
	Aimbot*							aimbot_;
};

extern Manager manager;

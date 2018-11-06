// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------

#pragma once

// ===== Platform includes =====
#include <Windows.h>

// ===== Project includes =====
#include "exception_detour.h"


namespace detours
{

class HWBPDetour : public ExceptionDetour
{
public:

	// 
	HWBPDetour(DWORD thread_id, ADDRESS address, DWORD size);
	~HWBPDetour();

	// Install this detour.
	virtual bool		Install();

	// Remove this detour.
	virtual bool		Remove();

protected:

	// Which thread this breakpoint was created on.
	DWORD				breakpoint_thread_id_;
};

}

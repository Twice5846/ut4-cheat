// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------

#pragma once

// ===== Platform includes =====
#include <Windows.h>

// ===== Project includes =====
#include "detour.h"


namespace detours
{

class VMTDetour : public Detour
{
public:

	// 
	VMTDetour(void* object, DWORD method_index, ADDRESS new_method_address);
	~VMTDetour();

	// Install this detour.
	virtual bool		Install();

	// Remove this detour.
	virtual bool		Remove();

protected:

	void*		object_;
	ADDRESS*	vmt_;
	DWORD		method_index_;
	ADDRESS		method_address_;
	ADDRESS		new_method_address_;
};

}

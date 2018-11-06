// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------

#pragma once

// ===== Platform includes =====
#include <Windows.h>
#include <vector>


namespace detours
{

typedef BYTE* ADDRESS;

class Detour
{
public:

	// Constructor & Destructor
	Detour();
	~Detour();

	// Install this detour.
	virtual bool		Install() = 0;

	// Remove this detour.
	virtual bool		Remove() = 0;

protected:

	// 
	static std::vector<Detour*>		detour_list;

	// Is this detour already installed?
	bool				is_installed_;

	// Write [data] into [address].
	bool				WriteData(ADDRESS address, BYTE* data, DWORD size);
};

}

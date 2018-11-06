// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------

// ===== Project includes =====
#include "detour.h"


namespace detours
{

//
std::vector<Detour*> Detour::detour_list;

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
Detour::Detour() :
	is_installed_(false)
{
	Detour::detour_list.push_back(this);
}

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
Detour::~Detour()
{
	auto it_this = std::find(Detour::detour_list.begin(), Detour::detour_list.end(), this);

	if (it_this != Detour::detour_list.end()) {
		Detour::detour_list.erase(it_this);
	}
}

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
bool Detour::WriteData(ADDRESS address, BYTE* data, DWORD size)
{
	// Needed by VirtualProtect.
	DWORD old_protection = 0;

	// Make sure writing memory is permitted.
	if (!VirtualProtect(address, size, PAGE_READWRITE, &old_protection)) {
		return false;
	}

	// Write Byte-After-Byte.
	for (int i = 0; i < size; i++) {
		address[i] = data[i];
	}

	// Restore old protection.
	if (!VirtualProtect(address, size, old_protection, &old_protection)) {
		return false;
	}

	// 
	return true;
}

}

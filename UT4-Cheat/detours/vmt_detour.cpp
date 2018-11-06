// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------

// ===== Project includes =====
#include "vmt_detour.h"


namespace detours
{

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
VMTDetour::VMTDetour(void* object, DWORD method_index, ADDRESS new_method_address) :
	Detour(),
	object_(object),
	vmt_(*(ADDRESS**)object),
	method_index_(method_index),
	method_address_(vmt_[method_index]),
	new_method_address_(new_method_address)
{

}

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
VMTDetour::~VMTDetour()
{

}

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
bool VMTDetour::Install()
{
	if (is_installed_) {
		return false;
	}

	if (!WriteData((BYTE*)&vmt_[method_index_], (BYTE*)&new_method_address_, sizeof(new_method_address_))) {
		return false;
	}

	is_installed_ = true;

	return true;
}

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
bool VMTDetour::Remove()
{
	if (!is_installed_) {
		return false;
	}

	if (!WriteData((BYTE*)&vmt_[method_index_], (BYTE*)&method_address_, sizeof(method_address_))) {
		return false;
	}

	is_installed_ = false;

	return true;
}

}

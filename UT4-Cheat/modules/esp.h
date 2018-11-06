// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------

#pragma once

// ===== Platform includes =====
#include <vector>

// ===== Project includes =====
#include "module.h"



namespace modules
{

class ESP : public Module
{
public:

	// 
	ESP(Game* game);
	~ESP();

	// 
	virtual void		Render();
	virtual void		ClientCommand();

private:

	void				DrawBox(float x, float y, float w, float h, float t, FLinearColor c);
};

}

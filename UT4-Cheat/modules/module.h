// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------

#pragma once

// ===== Project includes =====
#include "../game.h"


namespace modules
{

class Module
{
public:

	Module(Game* game);
	~Module();

	virtual void			Render() = 0;
	virtual void			ClientCommand() = 0;

protected:

	Game* game_;
};

}

#pragma once

#include "ResourceManager.h"

class Update{
protected:
	static Update* updatePointer;
public:
	Update();
	~Update();
	static Update* updateLogic();
	void update();
};


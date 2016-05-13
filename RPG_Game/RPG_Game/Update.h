#pragma once

#include "ResourceManager.h"
#include "Object.h"

class Update{
protected:
	static Update* updatePointer;
	std::queue<Object*> updateList;
public:
	Update();
	~Update();
	static Update* updateLogic();
	void update();
	void updateUpdateList();
};


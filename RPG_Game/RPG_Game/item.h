#pragma once

#include <string>
#include "GameObject.h"
#include "GameDatabase.h"

class item: public GameObject
{
protected:

public:
	item();
	item(std::string filename, int x, int y);
	~item();
};


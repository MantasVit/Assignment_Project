#pragma once

#include <string>
#include "Object.h"
#include "GameDatabase.h"

class item: public Object
{
protected:

public:
	item();
	item(std::string filename, int x, int y);
	~item();
};


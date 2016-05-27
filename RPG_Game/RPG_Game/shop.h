#pragma once
#include <SDL.h>
#include <iostream>
#include "Object.h"
#include "BaseItem.h"
#include <array>

using namespace std;

class shop : public Object
{
protected:
	Object background;
	array<BaseItem, 4> items;
public:
	shop();
	~shop();
	void update(SDL_Event* evt);
};






#pragma once
#include <SDL.h>
#include <iostream>
#include "Object.h"
#include "BaseItem.h"

using namespace std;

class shop : public Object
{
protected:
	Object* background;
	vector<BaseItem*> items;
public:
	shop();
	~shop();
	void update(SDL_Event* evt);
};






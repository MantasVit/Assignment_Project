#pragma once
#include <SDL.h>
#include <iostream>
#include "Object.h"

using namespace std;

class town: public Object
{
protected:
	Object* background;

public:
	town();
	~town();
	void update(SDL_Event* evt);
};
















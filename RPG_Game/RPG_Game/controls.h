#pragma once
#include <SDL.h>
#include <iostream>

using namespace std;

class controls
{
protected:
	bool ENTER;
	bool UP;
	bool DOWN;
	bool LEFT;
	bool RIGHT;

public:
	controls();
	~controls();
	bool inputUpdate(SDL_Event* evt);
};

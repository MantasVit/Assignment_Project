#pragma once
#include <SDL.h>
#include <iostream>

using namespace std;

class controls
{
protected:
	SDL_Event evt;
	bool ENTER;

public:
	controls();
	~controls();
	bool update();
};

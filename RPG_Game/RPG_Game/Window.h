#pragma once

#include "SDL.h"

class Window{
protected:
	SDL_Window* gameWindow;
public:
	Window();
	~Window();
};


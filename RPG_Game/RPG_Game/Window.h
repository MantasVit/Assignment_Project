//Mantas

#pragma once

#include "SDL.h"
#include <string>

const int DEFAULT_WIDTH = 1024;
const int DEFAULT_HEIGHT = 768;

class Window{
protected:
	SDL_Window* gameWindow;
public:
	Window();
	Window(std::string flag);
	Window(int w, int h, std::string flag);
	//Window(std::string windowTitle);
	Window(std::string windowTitle, int w, int h);
	Window(std::string windowTitle, std::string flag);
	Window(std::string windowTitle, int w, int h, std::string flag);
	~Window();
};


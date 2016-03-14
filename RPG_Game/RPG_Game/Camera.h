#pragma once

#include "SDL.h"

class Camera{
	SDL_Rect camera;
public:
	Camera();
	~Camera();
	void setCameraX(int x);
	void setCameraY(int y);
	int getCameraX();
	int getCameraY();
	SDL_Rect* getRect();
};


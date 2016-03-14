#pragma once

#include "SDL.h"
#include "Matrix2D.h"

class Camera{
	int x, y;
public:
	Camera();
	~Camera();
	void setCameraX(int X);
	void setCameraY(int Y);
	int getCameraX();
	int getCameraY();
	//SDL_Rect* getRect();
};


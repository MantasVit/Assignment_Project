#pragma once

#include "include\SDL.h"
#include "Texture.h"
#include "Camera.h"

class ObjectBase{
protected:
	int			worldLocationX, worldLocationY;
public:
	ObjectBase();
	ObjectBase(int x, int y);
	~ObjectBase();
	void setWorldLocationX(int x);
	void setWorldLocationY(int y);
	int getWorldLocationX();
	int getWorldLocationY();
};


#pragma once

#include "include\SDL.h"
#include "Texture.h"
#include "Renderer.h"
#include "Camera.h"

class ObjectBase{
protected:
	Texture*	objectTexture;
	SDL_Rect	objectRect;
	int			worldLocationX, worldLocationY;
	int			w, h;
public:
	ObjectBase();
	ObjectBase(std::string filename);
	ObjectBase(std::string filename, int x, int y);
	~ObjectBase();
	void setWorldLocationX(int x);
	void setWorldLocationY(int y);
	int getWorldLocationX();
	int getWorldLocationY();
	SDL_Texture* getTexture();
	SDL_Rect* getRect();
	void setX(int x);
	void setY(int y);
	void updateLocation(Camera* camera);
};


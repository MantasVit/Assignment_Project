#pragma once

#include "include\SDL.h"
#include "ObjectBase.h"
#include "Texture.h"
#include "Renderer.h"
#include "ResourceManager.h"

class Renderer;

class Object: public ObjectBase{
protected:
	SDL_Rect	hitbox;
	Texture*	objectTexture;
	SDL_Rect	textureRect;
	SDL_Rect	renderArea;
	int			w, h;
public:
	Object();
	Object(std::string filename);
	Object(std::string filename, int x, int y);
	~Object();
	SDL_Texture* getTexture();
	SDL_Rect* getTextureRect();
	SDL_Rect* getRenderArea();
	void setX(int x);
	void setY(int y);
	int getW();
	int getH();
	void updateLocation();
};


#pragma once

#include "include\SDL.h"
#include "Texture.h"
#include "Renderer.h"
#include "ObjectBase.h"

class GameObject: public ObjectBase{
protected:
	SDL_Rect			hitbox;
public:
	GameObject();
	~GameObject();
};


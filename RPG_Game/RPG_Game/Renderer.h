#pragma once

#include <iostream>
#include "include\SDL.h"
#include <queue>
#include "ResourceManager.h"
#include "Object.h"
#include "Vector2D.h"

class Object;

class Renderer{
protected:
	static Renderer* rendererPointer;
	SDL_Renderer* mainRenderer;
	std::queue<Object*> renderList;
	Vector2D *test;
public:
	Renderer();
	~Renderer();
	static Renderer* useRenderer();
	void createRenderer(SDL_Window* window);
	//Get the renderer used by the game
	SDL_Renderer* getRenderer();
	void clearRenderer(SDL_Renderer* renderer);
	void renderTexture(SDL_Renderer* renderer, SDL_Texture* texture, SDL_Rect* camera, SDL_Rect* rect);
	void updateRenderer(SDL_Renderer* renderer);
	void render();
	void updateRenderList();
};


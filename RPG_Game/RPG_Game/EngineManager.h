#pragma once

#include <iostream>
#include <string>
#include "include\SDL.h"
#include "GameDatabase.h"
#include "WorldSpace.h"
#include "Camera.h"

class EngineManager{
protected:
	static EngineManager* EngineManagerPointer;
	SDL_Window* gameWindow;
	SDL_Renderer* gameRenderer;
	SDL_Event gameEvent;
	GameObject* axe;
	Camera mainCamera;
	WorldSpace* mine;
public:
	EngineManager();
	~EngineManager();
	//Required to use any SDLManager functions
	static EngineManager* getManager();
	//Create a game window
	void createWindow(std::string gameTitle, int resolutionWidth, int resolutionHeight);
	Camera* getCamera();
	//Get the event handler of the game
	SDL_Event* getEvent();
	//Update the game window
	void update();
};


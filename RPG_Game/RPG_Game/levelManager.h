#pragma once
#include <SDL.h>
#include <iostream>
#include "Object.h"

using namespace std;

const int MENU_TRANSITION = 0;
const int MENU = 1;
const int TOWN_TRANSITION = 2;
const int TOWN = 3;
const int SHOP_TRANSITION = 4;
const int SHOP = 5;


class levelManager
{
protected:
	int gameState;
	Object* currentLevel;

public:
	levelManager();
	~levelManager();
	void levelUpdate(SDL_Event* evt);
};

#pragma once
#include <SDL.h>
#include <iostream>
#include "Object.h"

using namespace std;

const int MENU_TRANSITION = 0;  //used as cases in switch statement
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
	static levelManager* ptrLevelManager;

public:
	levelManager();
	~levelManager();
	static levelManager* sharedLevelManager();
	void setState(int ts);
	void update();
};

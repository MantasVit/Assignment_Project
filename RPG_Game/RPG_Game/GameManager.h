#pragma once

#include <iostream>
#include <vector>
#include "EngineManager.h"
#include "Object.h"
#include "controls.h"
#include "levelManager.h"

class GameManager{
protected:
	
	static GameManager* GameManagerPointer;
	bool				gameRunning;
	Object* hi;
	controls* control;
	levelManager* level;
public:
	GameManager();
	~GameManager();
	static GameManager* getManager();
	
	void startGame();
	void update();
};


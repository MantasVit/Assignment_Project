#pragma once

#include <iostream>
#include <vector>
#include "EngineManager.h"
#include "Object.h"

class GameManager{
protected:
	
	static GameManager* GameManagerPointer;
	bool				gameRunning;
	Object* hi;
public:
	GameManager();
	~GameManager();
	static GameManager* getManager();
	
	void startGame();
	void update();
};


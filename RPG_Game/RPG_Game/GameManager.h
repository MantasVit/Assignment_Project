#pragma once

#include <iostream>
#include <vector>
#include "EngineManager.h"
#include "item.h"
#include "Camera.h"

class GameManager{
protected:
	
	static GameManager* GameManagerPointer;
	bool				gameRunning;
	item* hi;
public:
	GameManager();
	~GameManager();
	static GameManager* getManager();
	
	void startGame();
	void update();
};


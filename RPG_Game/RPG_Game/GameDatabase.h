#pragma once

#include <vector>
#include "GameObject.h"

class GameDatabase{
protected:
	static GameDatabase* gameDatabasePointer;
	std::vector<GameObject*> objectList;
public:
	GameDatabase();
	~GameDatabase();
	static GameDatabase* useDatabase();
	void addObject(GameObject* object);
	std::vector<GameObject*> getList();
	int getSize();
};


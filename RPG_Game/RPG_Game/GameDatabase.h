#pragma once

#include <vector>
#include "GameObject.h"
#include "Texture.h"

class GameDatabase{
protected:
	static GameDatabase* gameDatabasePointer;
	std::vector<GameObject*> objectList;
	std::vector<Texture*> textureList;
public:
	GameDatabase();
	~GameDatabase();
	static GameDatabase* useDatabase();
	void addObject(GameObject* object);
	void addTexture(Texture* texture);
	std::vector<GameObject*> getList();
	//std::vector<Texture*> getList();
	int getSize();
};


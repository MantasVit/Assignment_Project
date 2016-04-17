#pragma once

#include <vector>
#include "Object.h"
#include "Texture.h"

class GameDatabase{
protected:
	static GameDatabase* gameDatabasePointer;
	std::vector<Object*> objectList;
	std::vector<Texture*> textureList;
public:
	GameDatabase();
	~GameDatabase();
	static GameDatabase* useDatabase();
	void addObject(Object* object);
	void addTexture(Texture* texture);
	std::vector<Object*> getList();
	//std::vector<Texture*> getList();
	int getSize();
};


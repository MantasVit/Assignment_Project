#pragma once

#include <vector>
#include <map>
#include "Texture.h"
#include "WorldSpace.h"
#include "include\SDL_ttf.h"
#include "Object.h"
//#include "EntityBase.h"

class Object;
//class EntityBase;

//class WorldSpace;

class ResourceManager{
protected:
	static ResourceManager* resourceManagerPointer;
	std::vector<Object*> objects;
	//std::vector<EntityBase*> entities;
	std::map<std::pair<std::pair<std::string, std::string>, int>, SDL_Texture*> textures;
	std::map<std::string, WorldSpace*> worldSpaces;
	std::map<std::pair<std::string, int>, TTF_Font*> fonts;
public:
	ResourceManager();
	~ResourceManager();
	static ResourceManager* useResources();
	void addItem(Object* object);
	//void addItem(EntityBase* entity);
	void addItem(SDL_Texture* texture);
	void addItem(TTF_Font* font);
	void addItem(WorldSpace* worldSpace);
	std::vector<Object*> getObjectList();
	//std::vector<EntityBase*> getEntityList();
	//std::vector<Texture*> getList();
	int getSize();
};


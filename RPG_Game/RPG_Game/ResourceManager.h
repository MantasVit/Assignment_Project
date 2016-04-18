#pragma once

#include <vector>
#include <map>
#include "Object.h"
#include "Texture.h"
#include "WorldSpace.h"
#include "include\SDL_ttf.h"

class Object;

//class WorldSpace;

class ResourceManager{
protected:
	static ResourceManager* resourceManagerPointer;
	std::vector<Object*> objects;
	std::map<std::pair<std::pair<std::string, std::string>, int>, SDL_Texture*> textures;
	std::map<std::string, WorldSpace*> worldSpaces;
	std::map<std::pair<std::string, int>, TTF_Font*> fonts;
public:
	ResourceManager();
	~ResourceManager();
	static ResourceManager* useResources();
	void addItem(Object* object);
	void addItem(SDL_Texture* texture);
	void addItem(TTF_Font* font);
	void addItem(WorldSpace* worldSpace);
	std::vector<Object*> getList();
	//std::vector<Texture*> getList();
	int getSize();
};


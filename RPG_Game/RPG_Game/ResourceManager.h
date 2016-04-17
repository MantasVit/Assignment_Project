#pragma once

#include <vector>
#include <map>
#include "Object.h"
#include "Texture.h"
#include "WorldSpace.h"
#include "include\SDL_ttf.h"

class ResourceManager{
protected:
	static ResourceManager* resourceManagerPointer;
	std::vector<ObjectBase*> objects;
	std::map<std::pair<std::pair<std::string, std::string>, int>, SDL_Texture*> textures;
	std::map<std::string, WorldSpace*> worldSpaces;
	std::map<std::pair<std::string, int>, TTF_Font*> fonts;
public:
	ResourceManager();
	~ResourceManager();
	static ResourceManager* useResources();
	void addItem(ObjectBase* object);
	void addItem(SDL_Texture* texture);
	void addItem(TTF_Font* font);
	void addItem(WorldSpace* worldSpace);
	std::vector<ObjectBase*> getList();
	//std::vector<Texture*> getList();
	int getSize();
};


#include "ResourceManager.h"

ResourceManager* ResourceManager::resourceManagerPointer = nullptr;

ResourceManager::ResourceManager()
{
}


ResourceManager::~ResourceManager()
{
}

ResourceManager* ResourceManager::useResources(){
	if(resourceManagerPointer == nullptr){
		resourceManagerPointer = new ResourceManager();
		std::cout<<"Game database created."<<std::endl;
		return resourceManagerPointer;
	}
	//std::cout<<"SDL manager already exists."<<std::endl;
	return resourceManagerPointer;
}

void ResourceManager::addItem(Object* object){
	objects.push_back(object);
}
void ResourceManager::addItem(EntityBase* entity){
	entities.push_back(entity);
}
void ResourceManager::addItem(SDL_Texture* texture){
	//textures.push_back(texture);
}
void ResourceManager::addItem(TTF_Font* font){
	//fonts.push_back(font);
}
void ResourceManager::addItem(WorldSpace* worldSpace){
	//worldSpaces.push_back(worldSpace);
}

std::vector<Object*> ResourceManager::getObjectList(){
	return objects;
}

std::vector<Object*> ResourceManager::getEntityList(){
	return entities;
}

//std::vector<Texture*> GameDatabase::getList(){
	//return textureList;
//}

int ResourceManager::getSize(){
		return objects.size();
}

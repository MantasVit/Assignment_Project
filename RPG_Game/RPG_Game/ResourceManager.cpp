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

void ResourceManager::addItem(ObjectBase* object){
	objects.push_back(object);
}
void ResourceManager::addItem(SDL_Texture* texture){

}
void ResourceManager::addItem(TTF_Font* font){

}
void ResourceManager::addItem(WorldSpace* worldSpace){

}

//std::vector<Texture*> GameDatabase::getList(){
	//return textureList;
//}

int ResourceManager::getSize(){
		return objects.size();
}

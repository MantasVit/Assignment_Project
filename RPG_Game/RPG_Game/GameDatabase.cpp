#include "GameDatabase.h"

GameDatabase* GameDatabase::gameDatabasePointer = nullptr;

GameDatabase::GameDatabase()
{
}


GameDatabase::~GameDatabase()
{
}

GameDatabase* GameDatabase::useDatabase(){
	if(gameDatabasePointer == nullptr){
		gameDatabasePointer = new GameDatabase();
		std::cout<<"Game database created."<<std::endl;
		return gameDatabasePointer;
	}
	//std::cout<<"SDL manager already exists."<<std::endl;
	return gameDatabasePointer;
}

void GameDatabase::addObject(GameObject* object){
	objectList.push_back(object);
}

std::vector<GameObject*> GameDatabase::getList(){
	return objectList;
}

int GameDatabase::getSize(){
	return objectList.size();
}

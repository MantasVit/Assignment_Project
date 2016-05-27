#include "levelManager.h"
#include "town.h"
#include "ResourceManager.h"

levelManager* levelManager::ptrLevelManager = NULL;

levelManager::levelManager()
{
	gameState = TOWN_TRANSITION;
	currentLevel = NULL;
}

levelManager::~levelManager()
{

}

levelManager* levelManager::sharedLevelManager()
{
	if (ptrLevelManager == NULL)
	{
		ptrLevelManager = new levelManager();
		return ptrLevelManager;
	}

	return ptrLevelManager;

}

void levelManager::setState(int ts)
{
	gameState = ts;
}

void levelManager::update()
{
	switch (gameState)
	{
		/*case MENU_TRANSITION:
			if (currentLevel == NULL)
			{
				currentLevel = new menu();
				gameState = TOWN;
			}
			break;
		case MENU:
			if (currentLevel != NULL)
			{
				currentLevel->update();
			}
			break;*/
		case TOWN_TRANSITION:
			if (currentLevel == NULL)
			{
				currentLevel = new town();  //creating new state of the game
			}
			gameState = TOWN;
			break;
		case TOWN:
			if (currentLevel != NULL)
			{
				currentLevel->update();   //using update function in a specific class
			}
			break;
		case SHOP_TRANSITION:
			delete currentLevel; //deleting previous level
			currentLevel = new shop();
			gameState = SHOP;
			break;
		case SHOP:
			if (currentLevel != NULL)
			{
				currentLevel->update();
			}
			break;
	}
}



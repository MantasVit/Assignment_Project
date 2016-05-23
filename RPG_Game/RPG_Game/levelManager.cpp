#include "levelManager.h"
#include "town.h"

levelManager::levelManager()
{
	gameState = TOWN_TRANSITION;
	currentLevel = NULL;
}

levelManager::~levelManager()
{

}

void levelManager::levelUpdate(SDL_Event* evt)
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
				currentLevel = new town();
				gameState = TOWN;
			}
			break;
		case TOWN:
			if (currentLevel != NULL)
			{
				currentLevel->update();
			}
			break;
		case SHOP_TRANSITION:
			delete currentLevel;
			currentLevel = new shop();
			gameState = SHOP;
			break;
			break;
		case SHOP:
			if (currentLevel != NULL)
			{
				currentLevel->update();
			}
			break;
	}
}



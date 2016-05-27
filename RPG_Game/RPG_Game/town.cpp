#include "town.h"

town::town() 
{
	background = new Object("Adamant_axe.png", 0, 0);
	ARMORSMITH = false;
	WEAPONSMITH = false;
	ALCHEMY = false;
}

town::~town()
{

}

void town::update()
{
	if (controls::get(SDL_SCANCODE_UP))
	{
		levelManager::sharedLevelManager()->setState(SHOP_TRANSITION);
	}
}

#include "town.h"

town::town() 
{
	background = new Object("townTemp.png", 0, 0);
	ARMORSMITH = false;
	WEAPONSMITH = false;
	ALCHEMY = false;
}

town::~town()
{

}

void town::update()
{
	if (control.getUP())
	{
		std::cout << "test";
		levelManager::sharedLevelManager()->setState(SHOP_TRANSITION);
	}
}

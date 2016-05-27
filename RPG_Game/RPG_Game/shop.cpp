#include "shop.h"
#include "controls.h"
#include "BaseItem.h"
#include "levelManager.h"

shop::shop()
{
	background.setTexture("armorsmithTemp.png");
	items[0].setTexture("itemTemp.png");
	items[0].setX(330);
	items[0].setY(70);

	items[1].setTexture("itemTemp.png");
	items[1].setX(430);
	items[1].setY(70);

	items[2].setTexture("itemTemp.png");
	items[2].setX(530);
	items[2].setY(70);

	items[3].setTexture("itemTemp.png");
	items[3].setX(630);
	items[3].setY(70);


}

shop::shop(BaseItem* item1, BaseItem* item2, BaseItem* item3, BaseItem* item4, string shopBackground)
{
	/*background.setTexture(shopBackground);
	items[0] = item1;
	items[0] = item1;
	items[0] = item1;*/
}

shop::~shop()
{

}

void shop::update()
{
	if (controls::get(SDL_SCANCODE_DOWN))
	{
		levelManager::sharedLevelManager()->setState(TOWN_TRANSITION);
	}
}


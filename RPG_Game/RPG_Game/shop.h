#pragma once
#include <SDL.h>
#include <iostream>
#include "Object.h"
#include "BaseItem.h"
#include <array>
#include <string>

using namespace std;

class shop : public Object   //template that will be used by all shops in this game
{
protected:
	Object background;
	array<BaseItem, 4> items;
public:
	shop();
	shop(BaseItem* item1, BaseItem* item2, BaseItem* item3, BaseItem* item4, string shopBackground);
	~shop();
	void update();
};






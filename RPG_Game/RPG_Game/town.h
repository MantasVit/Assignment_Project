#pragma once
#include <SDL.h>
#include <iostream>
#include "Object.h"
#include "shop.h"
#include "controls.h"
#include "levelManager.h"

using namespace std;

class town: public Object
{
protected:
	Object* background;
	shop* weaponsmith;
	shop* armorsmith;
	shop* alchemy;
	bool ARMORSMITH;
	bool ALCHEMY;
	bool WEAPONSMITH;
	controls control;

public:
	town();
	~town();
	void update();
};
















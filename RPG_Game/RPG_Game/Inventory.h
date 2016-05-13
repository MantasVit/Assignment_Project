#pragma once

#include <array>
#include "MSEngine.h"
#include "BaseArmour.h"
#include "BaseWeapon.h"

class Inventory{
protected:
	std::array<Object*, 20> inventorySlots;
	Object	*weaponSlot, *shieldSlot, *helmetSlot, *bodySlot, *legSlot;
	float defaultCarryWeight;
	float maxCarryWeight;
public:
	Inventory();
	~Inventory();
	void addItem();
	void removeItem();
	void equipWeapon(BaseWeapon *weapon);
	void equipShield(BaseArmour *shield);
	void equipHelmet(BaseArmour *helmet);
	void equipBody(BaseArmour *body);
	void equipLegs(BaseArmour *legs);
};


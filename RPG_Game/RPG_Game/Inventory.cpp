#include "Inventory.h"

Inventory::Inventory(){
	for(int i = 0; i < inventorySlots.size(); i++){
		inventorySlots.at(i) = nullptr;
	}
	weaponSlot = nullptr;
	shieldSlot = nullptr;
	helmetSlot = nullptr;
	bodySlot = nullptr;
	legSlot = nullptr;
	defaultCarryWeight = 20.0f;
}

Inventory::~Inventory(){

}

void Inventory::addItem(){

}

void Inventory::removeItem(){

}

void Inventory::equipWeapon(BaseWeapon *weapon){
	//TODO: need base weapon class finished and to contain a variable defining whether the weapon is 1 or 2 handed
	//if(weapon.hands == 1){
		weaponSlot = weapon;
	//}
	/*else if(weapon.hands == 2){
		weaponSlot = weapon;
		shieldSlot = nullptr;
	}*/
}
void Inventory::equipShield(BaseArmour *shield){
	shieldSlot = shield;
}
void Inventory::equipHelmet(BaseArmour *helmet){
	helmetSlot = helmet;
}
void Inventory::equipBody(BaseArmour *body){
	bodySlot = body;
}
void Inventory::equipLegs(BaseArmour *legs){
	legSlot = legs;
}

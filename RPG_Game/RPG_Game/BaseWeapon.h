#pragma once
#include "BaseItem.h"
class BaseWeapon :
	public BaseItem
{
public:
	BaseWeapon(int Damage);
	~BaseWeapon();
};


//Simon Heath - coding


/* testing
player1.weapon = sword;

if(player1.weapon == sword)
{
sword.dmg + player.dmg;

return player.dmg;
}
*/

//List of properties needed
//Damage
//Price
//Weight

//List of weapons
//swords
//crossbows
//spears
//axes

//Weapon damage initialisation

//All item classes created by Simon 

//class player  //Player class for testing purposes
//{
//	int health;
//	int damage;
//	int armour;
//
//	void print()
//	{
//		cout << health << endl;
//
//	}
//
//};

class sword
{
public:
	int damage;
	int price;
	int weight;
};

class axe
{
public:
	int damage;
	int price;
	int weight;
};

class crossbow
{
public:
	int damage;
	int price;
	int weight;
};

class spear
{
public:
	int damage;
	int price;
	int weight;
};

#ifndef _ENEMY_HEADER_
#define _ENEMY_HEADER_

#include <iostream>
#include <string>
#include "Entity.h"

class Enemy
{
public:
	//the stats for enemies: health, armour and damage
	short int hp, def, dmg;

protected:

private:
	//default blank constructor for enemies
	Enemy();
	//overloaded constructor for enemies, has the ability to set the enemy stats
	Enemy(short int health, short int armour, short int damage);
	//destructor for enemies
	~Enemy();



};


#endif
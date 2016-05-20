#ifndef _ENEMY_HEADER_
#define _ENEMY_HEADER_

#include <iostream>
#include <string>
#include "Entity.h"


class Enemy : public Entity
{
public:
	//the stats for enemies: health, armour and damage
	//default blank constructor for enemies
	Enemy();
	//overloaded constructor for enemies, has the ability to set the enemy stats
	Enemy(short int health, short int armour, short int damage, bool Alive);
	//destructor for enemies
	~Enemy();

protected:

private:




};


#endif
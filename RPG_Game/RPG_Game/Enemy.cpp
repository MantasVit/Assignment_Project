#include <iostream>
#include <string>
#include "EntityUP.h"
#include "Enemy.h"

//class that represents the enemy
Enemy::Enemy()
{

}

//the enemy class is a container for data
Enemy::Enemy(short int health, short int armour, short int damage, bool Alive)
{
	hp = health;
	ar = armour;
	atk = damage;
	isAlive = Alive;

}
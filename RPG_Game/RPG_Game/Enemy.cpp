#include <iostream>
#include <string>
#include "EntityUP.h"
#include "Enemy.h"

Enemy::Enemy()
{

}

Enemy::Enemy(short int health, short int armour, short int damage, bool Alive)
{
	hp = health;
	ar = armour;
	atk = damage;
	isAlive = Alive;

}
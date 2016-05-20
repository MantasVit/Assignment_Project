#include <iostream>
#include <string>
#include "Entity.h"

Entity::Entity()
{

}


Entity::Entity(short int Health, short int Armour, short int Attack)
{
	Health = 100;
	Armour = 5;
	Attack = 20;
}


Entity::~Entity()
{

}

void Entity::setStatus(bool alive)
{
	alive = true;
	isAlive = alive;

}

bool Entity::getStatus()
{

	return isAlive;
}


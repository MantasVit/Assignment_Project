#ifndef _ENTITY_HEADER_
#define _ENTITY_HEADER_
#include <iostream>
#include <string>

using namespace std;

class Entity 
{
private:
	//basic stats for entities
	short int hp, mp, ar, sp, atk, level, xp;
	bool isAlive;

protected:

public:

	// Constructors for entities
	Entity();
	//overloaded constructor for entities, this one comes with health, armour and attack
	Entity(short int Health, short int Armour, short int Attack);
	~Entity();
	void setStatus(bool alive);
	bool getStatus();

};

#endif
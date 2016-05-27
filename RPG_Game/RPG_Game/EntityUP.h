#ifndef _ENTITYUP_HEADER_
#define _ENTITYUP_HEADER_
#include <iostream>
#include <string>

//using namespace std;

class Entity 
{
public:
	//basic stats for entities
	short int hp, mp, ar, sp, atk, level, xp;
	bool isAlive;

	// Constructors for entities
	Entity();
	//overloaded constructor for entities, this one comes with health, armour and attack
	Entity(short int Health, short int Armour, short int Attack);
	~Entity();

	

	void setStatus(bool alive);
	bool getStatus();

	int getHealth();
	void setHealth();

	

private:
	

protected:


	

};

#endif
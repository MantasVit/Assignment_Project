#ifndef _PLAYER_HEADER_
#define _PLAYER_HEADER_


#include<iostream>
#include<string>
#include "EntityUP.h"

//this class should be finished

using namespace std;

class Player : public Entity
{
private:

protected:

public:
	//void setStats(short int Health, short int Mana, short int Armour, short int Stamina, short int Attack, short int Level);


	//overloaded constructor for the player class, comes with all the stats required
	Player(short int Health, short int Mana, short int Armour, short int Stamina, short int Attack, short int Level, short int Experience, bool isAlive);
	~Player();




};



#endif

#ifndef _PLAYER_HEADER_
#define _PLAYER_HEADER_

#include<iostream>
#include<string>
#include "EntityUP.h"

using namespace std;

class Player 
{
private:

protected:

private:
	//void setStats(short int Health, short int Mana, short int Armour, short int Stamina, short int Attack, short int Level);

	//constructor for the player class
	Player();
	//overloaded constructor for the player class, comes with all the stats required
	Player(short int Health, short int Mana, short int Armour, short int Stamina, short int Attack, short int Level, short int Experience);
	~Player();

	

};



#endif

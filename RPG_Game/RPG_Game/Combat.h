#ifndef _COMBAT_HEADER_
#define _COMBAT_HEADER_

#include <iostream>
#include <string>
#include "EntityUP.h"
#include "Player.h"
#include "Enemy.h"


class Combat
{

private:

protected:

public:
	bool running;
	string choice;

	//combat for the game, it will currently handle the player fighting only one enemy
	//however it can be expanded from a single enemy to an array of enemies
	void combatStart(Player p1, Enemy e1);

	


};


#endif
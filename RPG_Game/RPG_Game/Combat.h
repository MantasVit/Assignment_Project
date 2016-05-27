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

	void combatStart(Player p1, Enemy e1);
	Player attack(Enemy target);
	


};


#endif
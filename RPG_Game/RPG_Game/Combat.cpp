#include <iostream>
#include <string>
#include "Combat.h"
#include "Player.h"
#include "Enemy.h"



void Combat::combatStart(Player p1, Enemy e1)
{
	while (running == true)
	{
		cout << "\n What will you do?" << endl;
		cout << "Attack" << endl;
		cout << "Fortify" << endl;
		cout << "Heal" << endl;
		cout << "Run" << endl;

		cin >> choice;

		if (choice == "Attack" || choice == "ATTACK" || choice == "attack")
		{
			cout << "You attack the enemy! " << endl;
			e1.hp -= (p1.atk -= e1.ar);

			cout << "The enemy hits you!" << endl;
			p1.hp -= (e1.atk -= p1.ar);

		}

		if (p1.hp <= 0)
		{
			cout << "YOU DIED!" << endl;
			running = false;
		}

		if (e1.hp <= 0)
		{
			cout << "You managed to defeat the enemy! " << endl;
			running = false;
		}


	}

}
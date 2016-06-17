#include <iostream>
#include <string>
#include "Combat.h"
#include "Player.h"
#include "Enemy.h"


/*
this function is responsible for the combat in the game, it is a while loop that runs while the player and the enemy are alive
the moment either one of them dies, the loop will stop and the combat will finish
*/
void Combat::combatStart(Player p1, Enemy e1)//combat function
{
	while (running == true)
	{
		//this displays the actions that the player can do
		cout << "\n What will you do?" << endl;
		cout << "Attack" << endl;
		cout << "Fortify" << endl;
		cout << "Heal" << endl;
		cout << "Run" << endl;

		//player inputs a choice
		cin >> choice;

		//choice for attack
		if (choice == "Attack" || choice == "ATTACK" || choice == "attack")
		{
			cout << "You attack the enemy! " << endl;
			e1.hp -= (p1.atk -= e1.ar);

			cout << "The enemy hits you!" << endl;
			p1.hp -= (e1.atk -= p1.ar);

		}

		//if statement that determines when the player is dead
		if (p1.hp <= 0)
		{
			cout << "YOU DIED!" << endl;
			running = false;
		}

		//if statement that determines when the enemy is dead
		if (e1.hp <= 0)
		{
			cout << "You managed to defeat the enemy! " << endl;
			running = false;
		}


	}

}
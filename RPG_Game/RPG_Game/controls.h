#pragma once
#include <SDL.h>
#include <iostream>

using namespace std;

class controls //class handling controls in the program
{
protected:
	bool ENTER; //bools to check whether button is pressed or not
	bool UP;
	bool DOWN;
	bool LEFT;
	bool RIGHT;
	bool MOUSELEFT;
	bool MOUSERIGHT;

public:
	controls();
	~controls();
	bool getUP();
	bool inputUpdate(); //function handling user input
};

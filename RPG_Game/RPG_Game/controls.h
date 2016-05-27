#pragma once
#include <SDL.h>
#include <iostream>

using namespace std;

class controls //class handling controls in the program
{
protected:
	static bool ENTER; //bools to check whether button is pressed or not
	static bool UP;
	static bool DOWN;
	static bool LEFT;
	static bool RIGHT;
	static bool MOUSELEFT;
	static bool MOUSERIGHT;

public:
	controls();
	~controls();
	static bool get(int key);
	static bool inputUpdate(); //function handling user input
};

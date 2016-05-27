#include "controls.h"

bool controls::ENTER = false; //setting all booleans to false as no buttons are pressed at the start of it
bool controls::UP = false;
bool controls::DOWN = false;
bool controls::LEFT = false;
bool controls::RIGHT = false;
bool controls::MOUSELEFT = false;
bool controls::MOUSERIGHT = false;
const Uint8* controls::keystate = SDL_GetKeyboardState(NULL);

controls::controls()
{
	
}

controls::~controls()
{


}

bool controls::get(int key)  //function that allows other classes to create if statements that check whether booleans are true or not
{
	if(keystate[key]){
		return true;
	}
}

bool controls::inputUpdate()
{
	//KEY PRESSES
	//KEYBOARD
	if (keystate[SDL_SCANCODE_RETURN]) //when specific button is pressed
	{
		ENTER = true;
		cout << "ENTER PRESSED" << endl;  //displaying proof in console
		return ENTER;	                  //returning the value
	}

	if (keystate[SDL_SCANCODE_UP])
	{
		UP = true;
		cout << "UP PRESSED" << endl;
		return UP;
	}

	if (keystate[SDL_SCANCODE_DOWN])
	{
		DOWN = true;
		cout << "DOWN PRESSED" << endl;
		return DOWN;
	}

	if (keystate[SDL_SCANCODE_LEFT])
	{
		LEFT = true;
		cout << "LEFT PRESSED" << endl;
		return LEFT;
	}

	if (keystate[SDL_SCANCODE_RIGHT])
	{
		RIGHT = true;
		cout << "RIGHT PRESSED" << endl;
		return RIGHT;
	}

	//MOUSE
	Uint32 SDL_GetMouseState(int* x, int* y);   //getting mouse coordinates when clicked
	SDL_PumpEvents();
	if (SDL_GetMouseState(NULL, NULL) & SDL_BUTTON(SDL_BUTTON_LEFT))
	{
		MOUSELEFT = true;
		cout << "MOUSE LEFT PRESSED" << endl;
		return MOUSELEFT;
	}

	if (SDL_GetMouseState(NULL, NULL) & SDL_BUTTON(SDL_BUTTON_RIGHT))
	{
		MOUSERIGHT = true;
		cout << "MOUSE RIGHT PRESSED" << endl;
		return MOUSERIGHT;
	}

	//KEY RELEASES
	//KEYBOARD
	if (!keystate[SDL_SCANCODE_RETURN])
	{
		ENTER = false;            //setting false to tell the program that button is not pressed anymore
		return ENTER;
	}

	if (!keystate[SDL_SCANCODE_UP])
	{
		UP = false;
		return UP;
	}


	if (!keystate[SDL_SCANCODE_DOWN])
	{
		DOWN = false;
		return DOWN;
	}

	

	if (!keystate[SDL_SCANCODE_LEFT])
	{
		LEFT = false;
		return LEFT;
	}

	if (!keystate[SDL_SCANCODE_RIGHT])
	{
		RIGHT = false;
		return RIGHT;
	}
	return false;
}
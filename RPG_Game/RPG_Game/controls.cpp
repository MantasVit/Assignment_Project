#include "controls.h"


controls::controls()
{
	ENTER = false;
	UP = false;
	DOWN = false;
	LEFT = false;
	RIGHT = false;

}

controls::~controls()
{


}

bool controls::inputUpdate(SDL_Event* evt)
{
	const Uint8* keystate = SDL_GetKeyboardState(NULL);
	
	//KEY PRESSES
	if (keystate[SDL_SCANCODE_RETURN])
	{
		ENTER = true;
		cout << "ENTER PRESSED" << endl;
		return ENTER;	
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

	//KEY RELEASES
	if (!keystate[SDL_SCANCODE_RETURN])
	{
		ENTER = false;
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


/*controls function

bool upKey;
bool downKey...
booleans in the header under public


if(key pressed)
{
	if(key that was pressed was up)
	{
		keyUp = true;
	}
	... repeat for every key you need
}

	if(key released)
	{
		if(key that was pressed was up)
		{
		keyUp = false;
		}
	}





*/
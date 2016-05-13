#include "controls.h"


controls::controls()
{
	ENTER = false;

}

controls::~controls()
{


}

bool controls::update()
{
	/*Uint8 *SDL_GetKeyState(int *numkeys);
	Uint8 *keystate = SDL_GetKeyState(NULL);
	if (keystate[SDLK_RETURN])
	{
		ENTER = true;
		cout << "ENTER PRESSEDDDDDDDDDDD" << endl;
		return ENTER;
		
	}*/
	return true;
}
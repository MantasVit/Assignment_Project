#pragma once

#include "include\SDL_ttf.h"
#include <string>
#include <iostream>

class Text{
protected:
	SDL_Surface* text;
	TTF_Font* font;
	SDL_Color  textColour;
	SDL_Texture* finished;
public:
	Text();
	Text(SDL_Renderer* renderer, std::string Text);
	~Text();
	SDL_Texture* showText(std::string Text, SDL_Renderer* renderer);
	SDL_Texture* getTexture();
	void setText(SDL_Renderer* renderer, std::string Text);
};


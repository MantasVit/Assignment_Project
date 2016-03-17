#pragma once

#include "include\SDL_ttf.h"
#include <string>
#include <iostream>
#include "FPS.h"

class Text{
protected:
	SDL_Surface* text;
	//SDL_Surface* text2;
	//SDL_Surface* text3;
	//SDL_Surface* text4;
	//SDL_Surface* text5;
	//SDL_Surface* text6;
	//SDL_Surface* text7;
	//SDL_Surface* text8;
	//SDL_Surface* text9;
	//SDL_Surface* text0;
	TTF_Font* font;
	SDL_Color  textColour;
	SDL_Texture* finished;
	std::string all;
	SDL_Rect textRect;
	SDL_Rect textRect2;
	SDL_Rect textRect3;
	SDL_Rect textRect_2;
	SDL_Rect textRect2_2;
	SDL_Rect textRect3_2;
	int w, h;
public:
	Text();
	Text(SDL_Renderer* renderer, std::string Text);
	Text(SDL_Renderer* renderer, std::string Font, int fontSize);
	~Text();
	SDL_Texture* showText(std::string Text, SDL_Renderer* renderer);
	SDL_Texture* getTexture();
	void setText(SDL_Renderer* renderer, std::string Text);
	SDL_Rect* getRect();
	SDL_Rect* getRect_2();
};


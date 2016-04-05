#pragma once

#include "include\SDL_ttf.h"
#include <string>
#include <iostream>
#include "FPS.h"
#include <vector>

class Text{
protected:
	SDL_Surface* text;
	SDL_Surface* number;
	SDL_Surface* uppercase;
	SDL_Surface* lowercase;
	SDL_Surface* symbol;
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
	SDL_Texture* numberTexture;
	SDL_Texture* uppercaseTexture;
	SDL_Texture* lowercaseTexture;
	SDL_Texture* symbolTexture;
	std::string numbers;
	std::string lowercases;
	std::string uppercases;
	std::string symbols;
	std::string all;
	std::string textSheet;
	std::string checkList;
	SDL_Rect textSheetRect;
	SDL_Rect textSheetRect2;
	SDL_Rect textRect;
	SDL_Rect textRect2;
	SDL_Rect textRect3;
	SDL_Rect textRect4;
	SDL_Rect textRect5;
	SDL_Rect textRect_2;
	SDL_Rect textRect_3;
	SDL_Rect textRect_4;
	SDL_Rect textRect_5;
	SDL_Rect textRect2_2;
	SDL_Rect textRect3_2;
	int w, h;
	int ij;
	std::vector<SDL_Rect*> letter;
	std::vector<SDL_Rect*> letterSource;
public:
	Text();
	Text(SDL_Renderer* renderer, std::string Text);
	Text(SDL_Renderer* renderer, std::string Font, int fontSize);
	~Text();
	SDL_Texture* showText(std::string Text, SDL_Renderer* renderer);
	SDL_Texture* getTexture();
	void setText(SDL_Renderer* renderer, std::string Text);
	int getI();
	SDL_Rect* getRect();
	SDL_Rect* getRect2();
	SDL_Rect* getRect3();
	SDL_Rect* getRect4();
	SDL_Rect* getRect_2();
	SDL_Rect* getRect_3();
	SDL_Rect* getRect_4();
	SDL_Rect* getRect_5();
	SDL_Rect* getTextSheet();
	SDL_Rect* getTextSheet2();
	void outputText(std::string Text);
	std::vector<SDL_Rect*> getLetter();
	SDL_Rect* getLetterRect(int I);
	SDL_Rect* getLetterSourceRect(int I);
};


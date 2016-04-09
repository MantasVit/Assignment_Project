#pragma once

#include "include\SDL_ttf.h"
#include <string>
#include <iostream>
#include "FPS.h"
#include <vector>
#include <array>

class Text{
protected:
	static Text* TextPointer;
	SDL_Surface* text;
	SDL_Surface* number;
	SDL_Surface* uppercase;
	SDL_Surface* lowercase;
	SDL_Surface* symbol;
	std::array<SDL_Surface*, 62> soloL;
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
	std::array<SDL_Texture*, 62> soloTexture;
	std::string numbers;
	std::string lowercases;
	std::string uppercases;
	std::string symbols;
	std::string all;
	std::array<char, 62> soloLetter;
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
	int perfTest;
	bool textureOpened;
	std::array<int, 62> minY;
	std::array<int, 62> maxY;
	std::array<int, 62> minX;
	std::array<int, 62> maxX;
	std::array<int, 62> advance;
	std::array<int, 62> minY2;
	std::array<int, 62> maxY2;
	std::array<int, 62> minX2;
	std::array<int, 62> maxX2;
	std::array<int, 62> advance2;
	int w2, h2;
	bool letterChecked;
	int lettersChecked;
	int i, j, k, n;
public:
	static Text* getText();
	Text();
	Text(SDL_Renderer* renderer, std::string Text);
	Text(SDL_Renderer* renderer, std::string Font, int fontSize, int test);
	~Text();
	void newText(SDL_Renderer* renderer, std::string Font, int fontSize, int test);
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
	void TEST(int i);
};


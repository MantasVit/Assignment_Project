#pragma once

#include "include\SDL_ttf.h"
#include <vector>
#include <map>
#include <iostream>
#include <string>

class TTF{
protected:
	static TTF*							ttfPointer;
	std::map<int, TTF_Font*>			fontList;
	std::map<int, TTF_Font*>::iterator	fontFinder;
	TTF_Font*							tempFont;
	std::vector<SDL_Surface*>			surfaceList;
	SDL_Surface*						tempSurface;
	std::vector<SDL_Texture*>			textureList;
	SDL_Texture*						tempTexture;
	std::vector<bool>					fontCheckList;
	SDL_Color							textColour;
public:
	TTF();
	~TTF();
	static TTF* useTTF();
	void addText(SDL_Renderer* renderer, std::string font, std::string text, int fontSize, int r, int g, int b);
	TTF_Font* getFont(TTF_Font* font);
	SDL_Texture* getTexture(std::string text);
	void getLetterPositions(std::string text, std::vector<int> minY, std::vector<int> maxY, std::vector<int> x);
};


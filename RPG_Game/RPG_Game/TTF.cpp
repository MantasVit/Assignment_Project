#include "TTF.h"

TTF* TTF::ttfPointer = nullptr;

TTF::TTF(){
	TTF_Init();
}
TTF::~TTF(){
}
TTF* TTF::useTTF(){
	if(ttfPointer == nullptr){
		ttfPointer = new TTF();
		return ttfPointer;
	}
	return ttfPointer;
}
void TTF::addText(SDL_Renderer* renderer, std::string font, std::string text, int fontSize, int r, int g, int b){
	textColour = {0, 0, 0};
	tempFont = TTF_OpenFont(("fonts\\"+font+".ttf").c_str(), fontSize);
	tempSurface = TTF_RenderText_Solid(tempFont, text.c_str(), textColour);
	tempTexture = SDL_CreateTextureFromSurface(renderer, tempSurface);
	for(int i = 0; i < fontList.size(); i++){
		if(fontList.at(i) != tempFont){
			fontList.at(i) = tempFont;
			fontCheckList.at(i) = false;
			for(int j = 0; j < textureList.size(); j++){
				if(textureList.at(j) != tempTexture){
					surfaceList.at(j) = TTF_RenderText_Solid(tempFont, text.c_str(), textColour);
					textureList.at(j) = SDL_CreateTextureFromSurface(renderer, tempSurface);
				}
			}
		}
	}
}
TTF_Font* TTF::getFont(TTF_Font* font){
	return fontList.at(0);
}
SDL_Texture* TTF::getTexture(std::string text){
	return textureList.at(0);
}
void TTF::getLetterPositions(std::string text, std::vector<int> minY, std::vector<int> maxY, std::vector<int> x){
	for(int i = 0; i < fontList.size(); i++){
		if(fontCheckList.at(i) == false){
			for(int j = 0; j < text.size(); j++){
				TTF_GlyphMetrics(fontList.at(i), text.at(j), NULL, NULL, &minY.at(i), &maxY.at(i), &x.at(i));
			}
			fontCheckList.at(i) = true;
		}
	}
}
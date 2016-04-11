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

}
TTF_Font* TTF::getFont(TTF_Font* font){

}
SDL_Texture* TTF::getTexture(std::string text){

}
void TTF::getLetterPositions(std::string text, std::vector<int> minY, std::vector<int> maxY, std::vector<int> x){

}
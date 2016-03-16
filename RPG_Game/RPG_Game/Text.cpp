#include "Text.h"

Text::Text(){
	TTF_Init();
	if( TTF_Init() == -1 )
    {
        std::cout<<"no";    
    }
	font = TTF_OpenFont("OpenSans-Regular.ttf", 14);
	textColour = {0, 0, 0};
	text = TTF_RenderText_Solid(font, "TEST", textColour);
}

Text::Text(SDL_Renderer* renderer, std::string Text){
	TTF_Init();
	if( TTF_Init() == -1 )
    {
        std::cout<<"no";    
    }
	font = TTF_OpenFont("fonts\\OpenSans-Regular.ttf", 1000);
	textColour = {0, 0, 0};
	text = TTF_RenderText_Solid(font, Text.c_str(), textColour);
	finished = SDL_CreateTextureFromSurface(renderer, text);
}

Text::~Text()
{
}

SDL_Texture* Text::showText(std::string Text, SDL_Renderer* renderer){
	return finished;
}

SDL_Texture* Text::getTexture(){
	return finished;
}

void Text::setText(SDL_Renderer* renderer, std::string Text){
	//std::string test;
	//test = Text;
	SDL_FreeSurface(text);
	SDL_DestroyTexture(finished);
	text = TTF_RenderText_Solid(font, Text.c_str(), textColour);
	finished = SDL_CreateTextureFromSurface(renderer, text);
	//SDL_FreeSurface(text);
	//std::cout<<test<<std::endl;
}

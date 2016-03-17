#include "Text.h"

Text::Text(){
	TTF_Init();
	if( TTF_Init() == -1 )
    {
        std::cout<<"no";    
    }
	font = TTF_OpenFont("OpenSans-Regular.ttf", 14);
	textColour = {0, 0, 0};
	//text = TTF_RenderText_Solid(font, "TEST", textColour);
}

Text::Text(SDL_Renderer* renderer, std::string Text){
	TTF_Init();
	if (TTF_Init() == -1)
	{
		std::cout << "no";
	}
	all = "1234567890";
	font = TTF_OpenFont("fonts\\OpenSans-Regular.ttf", 1000);
	textColour = {0, 0, 0};
	text = TTF_RenderText_Solid(font, Text.c_str(), textColour);
	finished = SDL_CreateTextureFromSurface(renderer, text);
}

Text::Text(SDL_Renderer* renderer, std::string Font, int fontSize){
	TTF_Init();
	if (TTF_Init() == -1)
	{
		std::cout<<"no";
	}
	all = "1234567890";
	font = TTF_OpenFont(Font.c_str(), fontSize);
	textColour = {0, 0, 0};
	text = TTF_RenderText_Solid(font, all.c_str(), textColour);
	finished = SDL_CreateTextureFromSurface(renderer, text);
	//text1 = TTF_RenderText_Solid(font, "1234567890", textColour);
	//text2 = TTF_RenderText_Solid(font, "2", textColour);
	//text3 = TTF_RenderText_Solid(font, "3", textColour);
	//text4 = TTF_RenderText_Solid(font, "4", textColour);
	//text5 = TTF_RenderText_Solid(font, "5", textColour);
	//text6 = TTF_RenderText_Solid(font, "6", textColour);
	//text7 = TTF_RenderText_Solid(font, "7", textColour);
	//text8 = TTF_RenderText_Solid(font, "8", textColour);
	//text9 = TTF_RenderText_Solid(font, "9", textColour);
	//text0 = TTF_RenderText_Solid(font, "0", textColour);
	
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
	text = TTF_RenderText_Solid(font, all.c_str(), textColour);
	finished = SDL_CreateTextureFromSurface(renderer, text);
	//SDL_FreeSurface(text);
	//std::cout<<test<<std::endl;
}

SDL_Rect* Text::getRect() {
	SDL_QueryTexture(finished, NULL, NULL, &w, &h);
	FPS::useFPS()->update();
	//for (int i = 0; i < all.size(); i++) {
		//for (int j = 0; j < FPS::useFPS()->update().size(); j++) {
			//if (all.at(i) == FPS::useFPS()->update().at(j)) {
				//std::cout << all.at(i) << " = " << FPS::useFPS()->update().at(j) << std::endl;
				//std::cout << w / (all.size() - 9) << std::endl;
				textRect.w = w;
				textRect.h = h;
				//std::cout << w / (all.size() - j) << std::endl;
				return &textRect;
			//}
			/*if (all.at(i) == '2') {
				textRect.w = w / all.size() + 2;
				textRect.h = h;
			}
			if (all.at(i) == '3') {
				textRect.w = w / all.size() + 3;
				textRect.h = h;
			}
			if (all.at(i) == '4') {
				textRect.w = w / all.size() + 4;
				textRect.h = h;
			}
			if (all.at(i) == '5') {
				textRect.w = w / all.size() + 5;
				textRect.h = h;
			}
			if (all.at(i) == '6') {
				textRect.w = w / all.size() + 6;
				textRect.h = h;
			}
			if (all.at(i) == '7') {
				textRect.w = w / all.size() + 7;
				textRect.h = h;
			}
			if (all.at(i) == '8') {
				textRect.w = w / all.size() + 8;
				textRect.h = h;
			}
			if (all.at(i) == '9') {
				textRect.w = w / all.size() + 9;
				textRect.h = h;
			}
			if (all.at(i) == '0') {
				textRect.w = w / all.size() + 10;
				textRect.h = h;
			}*/
		//}
	//}
	//textRect.x = textRect.w / all.size();
	//textRect.y = textRect.h;
}

SDL_Rect* Text::getRect_2() {
	//SDL_QueryTexture(finished, NULL, NULL, &w, &h);
	FPS::useFPS()->update();
	//for (int i = 0; i < all.size(); i++) {
		//for (int j = 0; j < FPS::useFPS()->update().size(); j++) {
			//if (all.at(i) == FPS::useFPS()->update().at(j)) {
				//std::cout << all.at(i) << " = " << FPS::useFPS()->update().at(j) << std::endl;
				std::cout << w / (all.size() - 9) << std::endl;
				textRect_2.x = 333;
				textRect_2.y = 0;
				textRect_2.w = textRect.w;
				textRect_2.h = textRect.h;
				//std::cout << w / (all.size() - j) << std::endl;
				return &textRect_2;
			//}
			/*if (all.at(i) == '2') {
			textRect.w = w / all.size() + 2;
			textRect.h = h;
			}
			if (all.at(i) == '3') {
			textRect.w = w / all.size() + 3;
			textRect.h = h;
			}
			if (all.at(i) == '4') {
			textRect.w = w / all.size() + 4;
			textRect.h = h;
			}
			if (all.at(i) == '5') {
			textRect.w = w / all.size() + 5;
			textRect.h = h;
			}
			if (all.at(i) == '6') {
			textRect.w = w / all.size() + 6;
			textRect.h = h;
			}
			if (all.at(i) == '7') {
			textRect.w = w / all.size() + 7;
			textRect.h = h;
			}
			if (all.at(i) == '8') {
			textRect.w = w / all.size() + 8;
			textRect.h = h;
			}
			if (all.at(i) == '9') {
			textRect.w = w / all.size() + 9;
			textRect.h = h;
			}
			if (all.at(i) == '0') {
			textRect.w = w / all.size() + 10;
			textRect.h = h;
			}*/
		//}
	//}
	//textRect.x = textRect.w / all.size();
	//textRect.y = textRect.h;
}
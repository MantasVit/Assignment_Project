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
	textSheet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789-+_=*/\<>?:;@'#~[{]}()!£$%^&";
}

Text::Text(SDL_Renderer* renderer, std::string Text){
	TTF_Init();
	if (TTF_Init() == -1)
	{
		std::cout << "no";
	}
	all = "0123456789";
	numbers = "1234567890";
	lowercases = "abcdefghijklmnopqrstuvwxyz";
	uppercases = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	symbols = "-+_=*/\<>?:;@'#~[{]}()!£$%^&";
	font = TTF_OpenFont("fonts\\OpenSans-Regular.ttf", 1000);
	textColour = {0, 0, 0};
	text = TTF_RenderText_Solid(font, Text.c_str(), textColour);
	number = TTF_RenderText_Solid(font, numbers.c_str(), textColour);
	lowercase = TTF_RenderText_Solid(font, lowercases.c_str(), textColour);
	uppercase = TTF_RenderText_Solid(font, uppercases.c_str(), textColour);
	symbol = TTF_RenderText_Solid(font, symbols.c_str(), textColour);
	finished = SDL_CreateTextureFromSurface(renderer, text);
	numberTexture = SDL_CreateTextureFromSurface(renderer, number);
	lowercaseTexture = SDL_CreateTextureFromSurface(renderer, lowercase);
	uppercaseTexture = SDL_CreateTextureFromSurface(renderer, uppercase);
	symbolTexture = SDL_CreateTextureFromSurface(renderer, symbol);
}

Text::Text(SDL_Renderer* renderer, std::string Font, int fontSize){
	TTF_Init();
	if (TTF_Init() == -1)
	{
		std::cout<<"no";
	}
	all = "0123456789";
	numbers = "1234567890";
	lowercases = "abcdefghijklmnopqrstuvwxyz";
	uppercases = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	symbols = "-+_=*/\<>?:;@'#~[{]}()!£$%^&";
	font = TTF_OpenFont(Font.c_str(), fontSize);
	textColour = {0, 0, 0};
	text = TTF_RenderText_Solid(font, all.c_str(), textColour);
	number = TTF_RenderText_Solid(font, numbers.c_str(), textColour);
	lowercase = TTF_RenderText_Solid(font, lowercases.c_str(), textColour);
	uppercase = TTF_RenderText_Solid(font, uppercases.c_str(), textColour);
	symbol = TTF_RenderText_Solid(font, symbols.c_str(), textColour);
	finished = SDL_CreateTextureFromSurface(renderer, text);
	numberTexture = SDL_CreateTextureFromSurface(renderer, number);
	lowercaseTexture = SDL_CreateTextureFromSurface(renderer, lowercase);
	uppercaseTexture = SDL_CreateTextureFromSurface(renderer, uppercase);
	symbolTexture = SDL_CreateTextureFromSurface(renderer, symbol);
	SDL_QueryTexture(finished, NULL, NULL, &w, &h);
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

int Text::getI() {
	return ij;
}

SDL_Rect* Text::getRect() {
	SDL_QueryTexture(finished, NULL, NULL, &w, &h);
	FPS::useFPS()->update();
	for (int i = 0; i < all.size(); i++) {
		for (int j = 0; j < FPS::useFPS()->update().size(); j++) {
			if (all.at(i) == FPS::useFPS()->update().at(j)) {
				//std::cout << all.at(i) << " = " << FPS::useFPS()->update().at(j) << std::endl;
				//std::cout << w / (all.size() - 9) << std::endl;
				ij = i;
				textRect.w = w;
				textRect.h = h;
				textRect.x = 0;
				textRect.y = 0;
				//textRect_2.w = (w / all.size()) * i;
				//textRect_2.x = (w / all.size()) * i;
				//std::cout << w / (all.size() - j) << std::endl;
				return &textRect;
			}
		}
	}
}

SDL_Rect* Text::getRect2() {
	FPS::useFPS()->update();
	for (int i = 0; i < all.size(); i++) {
		for (int j = 0; j < FPS::useFPS()->update().size(); j++) {
			if (all.at(i) == FPS::useFPS()->update().at(j)) {
				if (FPS::useFPS()->update().length() >= 2) {
					textRect3.w = (w / all.size()) * i;
					textRect3.h = h;
					textRect3.x = textRect.x + ((w / all.size()) * i);
					textRect_3.x = (w / all.size()) * i;
				}
				//std::cout << w / (all.size() - j) << std::endl;
				return &textRect3;
			}
		}
	}
}

SDL_Rect* Text::getRect3() {
	FPS::useFPS()->update();
	for (int i = 0; i < all.size(); i++) {
		for (int j = 0; j < FPS::useFPS()->update().size(); j++) {
			if (all.at(i) == FPS::useFPS()->update().at(j)) {
				if (FPS::useFPS()->update().length() >= 3) {
					textRect4.w = (w / all.size()) * i;
					textRect4.h = h;
					textRect4.x = textRect3.x + ((w / all.size()) * i);
					textRect_4.x = (w / all.size()) * i;
				}
				//std::cout << w / (all.size() - j) << std::endl;
				return &textRect4;
			}
		}
	}
}

SDL_Rect* Text::getRect4() {
	FPS::useFPS()->update();
	for (int i = 0; i < all.size(); i++) {
		for (int j = 0; j < FPS::useFPS()->update().size(); j++) {
			if (all.at(i) == FPS::useFPS()->update().at(j)) {
				if (FPS::useFPS()->update().length() >= 4) {
					textRect5.w = (w / all.size()) * i;
					textRect5.h = h;
					textRect5.x = textRect4.x + ((w / all.size()) * i);
					textRect_5.x = (w / all.size()) * i;
				}
				//std::cout << w / (all.size() - j) << std::endl;
				return &textRect5;
			}
		}
	}
}

SDL_Rect* Text::getRect_2() {
	//SDL_QueryTexture(finished, NULL, NULL, &w, &h);
	//FPS::useFPS()->update();
	//for (int i = 0; i < all.size(); i++) {
		//for (int j = 0; j < FPS::useFPS()->update().size(); j++) {
			//if (all.at(i) == FPS::useFPS()->update().at(j)) {
				//std::cout << all.at(i) << " = " << FPS::useFPS()->update().at(j) << std::endl;
				//std::cout << w / (all.size()) << std::endl;
				textRect_2.x = 0;
				textRect_2.y = 0;
				textRect_2.w = textRect.w;//(w / all.size()) * getI();
				textRect_2.x = textRect.w;//(w / all.size()) * getI();
				//std::cout << w / (all.size() - j) << std::endl;
				return &textRect_2;
}

SDL_Rect* Text::getRect_3() {
	//SDL_QueryTexture(finished, NULL, NULL, &w, &h);
	//FPS::useFPS()->update();
	//for (int i = 0; i < all.size(); i++) {
	//for (int j = 0; j < FPS::useFPS()->update().size(); j++) {
	//if (all.at(i) == FPS::useFPS()->update().at(j)) {
	//std::cout << all.at(i) << " = " << FPS::useFPS()->update().at(j) << std::endl;
	//std::cout << w / (all.size()) << std::endl;
	//textRect_2.x = 0;
	//textRect_2.y = 0;
	//textRect_3.w = textRect3.w;
	//textRect_3.h = textRect3.h;
	//std::cout << w / (all.size() - j) << std::endl;
	return &textRect_3;
}

SDL_Rect* Text::getRect_4() {
	//SDL_QueryTexture(finished, NULL, NULL, &w, &h);
	//FPS::useFPS()->update();
	//for (int i = 0; i < all.size(); i++) {
	//for (int j = 0; j < FPS::useFPS()->update().size(); j++) {
	//if (all.at(i) == FPS::useFPS()->update().at(j)) {
	//std::cout << all.at(i) << " = " << FPS::useFPS()->update().at(j) << std::endl;
	//std::cout << w / (all.size()) << std::endl;
	//textRect_2.x = 0;
	//textRect_2.y = 0;
	//textRect_4.w = textRect4.w;
	//textRect_4.h = textRect4.h;
	//std::cout << w / (all.size() - j) << std::endl;
	return &textRect_4;
}

SDL_Rect* Text::getRect_5() {
	//SDL_QueryTexture(finished, NULL, NULL, &w, &h);
	//FPS::useFPS()->update();
	//for (int i = 0; i < all.size(); i++) {
	//for (int j = 0; j < FPS::useFPS()->update().size(); j++) {
	//if (all.at(i) == FPS::useFPS()->update().at(j)) {
	//std::cout << all.at(i) << " = " << FPS::useFPS()->update().at(j) << std::endl;
	//std::cout << w / (all.size()) << std::endl;
	//textRect_2.x = 0;
	//textRect_2.y = 0;
	//textRect_5.w = textRect5.w;
	//textRect_5.h = textRect5.h;
	//std::cout << w / (all.size() - j) << std::endl;
	return &textRect_5;
}

void Text::outputText(std::string Text) {
	checkList = all;
	bool letterChecked;
	int lettersChecked = 0;
		//std::cout << checkList.at(i) << std::endl;
		for (int j = 0; j < Text.size(); j++) {
			for (int i = 0; i < checkList.size(); i++) {
				letterChecked = false;
			//std::cout << Text.at(j) << std::endl;
			//std::cout << "stuck in for loop" << std::endl;
				if (checkList.at(i) == Text.at(j)) {
				//std::cout << Text.at(j) << " = " << checkList.at(i) << std::endl;
				if (letter.size() < Text.size()) {
					letter.push_back(new SDL_Rect);
				}
				for (int k = lettersChecked; k < letter.size(); k++) {
					
				//if(k <= letter.size()){
					//std::cout << "stuck in letter" << std::endl;
					//std::cout << letter.size() << std::endl;
					for (Text.size(); Text.size() < letter.size(); letter.pop_back()) {
					}
					//for (int n = 0; n < 1; n++){
						//std::cout << "letter: " << letter.size() << std::endl;
					letter.at(k)->h = h;
					letter.at(k)->w = w / checkList.size();
					letter.at(k)->x = letter.at(k)->w * k;
					letter.at(k)->y = 0;
					if (letterSource.size() < letter.size()) {
						letterSource.push_back(new SDL_Rect);
					}
					for (int n = 0; n < letterSource.size(); n++){
						if (n == k) {
							//std::cout << "letterSource: "<<letterSource.size()<< std::endl;
							letterSource.at(n)->h = letter.at(k)->h;
							letterSource.at(n)->w = letter.at(k)->w;
							letterSource.at(n)->x = (w / checkList.size()) * (i);
							letterSource.at(n)->y = 0;
							//std::cout <<"N: "<< n << std::endl;
							//std::cout << "K: " << k << std::endl;
							//std::cout << "I: " << i << std::endl;
							//std::cout << "J: " << j << std::endl;
							letterChecked = true;
							lettersChecked += 1;
						}
					}
				//}
					if (letterChecked == true) {
						break;
					}
				}
					
			}
		}
	}
}

std::vector<SDL_Rect*> Text::getLetter() {
	return letter;
}

SDL_Rect* Text::getLetterRect(int I) {
	return letter.at(I);
}
SDL_Rect* Text::getLetterSourceRect(int I) {
	return letterSource.at(I);
}

SDL_Rect* Text::getTextSheet() {
	return &textSheetRect;
}
SDL_Rect* Text::getTextSheet2() {
	return &textSheetRect2;
}
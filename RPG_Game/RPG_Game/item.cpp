#include "item.h"



item::item(){
}

item::item(std::string filename, int x, int y){
	objectTexture = new Texture(Renderer::useRenderer()->getRenderer(), filename.c_str());
	SDL_QueryTexture(objectTexture->getTexture(), NULL, NULL, &w, &h);
	objectRect.w = w;
	objectRect.h = h;
	worldLocationX = x - (w / 2);
	worldLocationY = y - (w / 2);
	//objectTexture->setX(worldLocationX);
	//objectTexture->setY(worldLocationY);
	GameDatabase::useDatabase()->addObject(this);
}

item::~item()
{
}

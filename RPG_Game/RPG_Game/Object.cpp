#include "Object.h"

Object::Object(){
	objectTexture = new Texture(Renderer::useRenderer()->getRenderer(), "Adamant_axe.png");
	SDL_QueryTexture(objectTexture->getTexture(), NULL, NULL, &w, &h);
	textureRect.w = w;
	textureRect.h = h;
	worldLocationX = 0;
	worldLocationY = 0;
}

Object::Object(std::string filename){
	objectTexture = new Texture(Renderer::useRenderer()->getRenderer(), filename.c_str());
	SDL_QueryTexture(objectTexture->getTexture(), NULL, NULL, &w, &h);
	textureRect.w = w;
	textureRect.h = h;
	worldLocationX = 0;
	worldLocationY = 0;
}

Object::Object(std::string filename, int x, int y){
	objectTexture = new Texture(Renderer::useRenderer()->getRenderer(), filename.c_str());
	SDL_QueryTexture(objectTexture->getTexture(), NULL, NULL, &w, &h);
	textureRect.w = w;
	textureRect.h = h;
	worldLocationX = x - (w / 2);
	worldLocationY = y - (w / 2);
}
Object::~Object(){

}

SDL_Texture* Object::getTexture(){
	return objectTexture->getTexture();
}

SDL_Rect* Object::getTextureRect(){
	return &textureRect;
}

SDL_Rect* Object::getRenderArea(){
	return &renderArea;
}

void Object::setX(int x){
	textureRect.x = x;
}

void Object::setY(int y){
	textureRect.y = y;
}

void Object::updateLocation(Camera* camera){
	textureRect.x = camera->getCameraX() + worldLocationX;
	std::cout<<textureRect.x<<std::endl;
	textureRect.y = camera->getCameraY() + worldLocationY;
}
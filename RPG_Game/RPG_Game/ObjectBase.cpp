#include "ObjectBase.h"

ObjectBase::ObjectBase(){
	objectTexture = new Texture(Renderer::useRenderer()->getRenderer(), "Adamant_axe.png");
	SDL_QueryTexture(objectTexture->getTexture(), NULL, NULL, &w, &h);
	objectRect.w = w;
	objectRect.h = h;
	worldLocationX = 0;
	worldLocationY = 0;
}

ObjectBase::ObjectBase(std::string filename, int x, int y){
	objectTexture = new Texture(Renderer::useRenderer()->getRenderer(), "WorldSpace_test.png");
	SDL_QueryTexture(objectTexture->getTexture(), NULL, NULL, &w, &h);
	objectRect.w = w;
	objectRect.h = h;
	worldLocationX = x - (w / 2);
	worldLocationY = y - (w / 2);
}

ObjectBase::~ObjectBase(){

}

SDL_Texture* ObjectBase::getTexture(){
	return objectTexture->getTexture();
}

SDL_Rect* ObjectBase::getRect(){
	return &objectRect;
}

void ObjectBase::setWorldLocationX(int x){
	worldLocationX = x;
}
void ObjectBase::setWorldLocationY(int y){
	worldLocationY = y;
}

int ObjectBase::getWorldLocationX(){
	return worldLocationX;
}
int ObjectBase::getWorldLocationY(){
	return worldLocationY;
}

void ObjectBase::setX(int x){
	objectRect.x = x;
}

void ObjectBase::setY(int y){
	objectRect.x = y;
}

void ObjectBase::updateLocation(Camera* camera){
	objectRect.x = camera->getCameraX() + worldLocationX;
	objectRect.y = camera->getCameraY() + worldLocationY;
}
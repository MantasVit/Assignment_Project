#include "ObjectBase.h"

ObjectBase::ObjectBase(){
	worldLocationX = 0;
	worldLocationY = 0;
}

ObjectBase::ObjectBase(int x, int y){
	worldLocationX = x;
	worldLocationY = y;
}

ObjectBase::~ObjectBase(){

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

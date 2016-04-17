#include "WorldSpace.h"

WorldSpace::WorldSpace(){
	worldName = "World Space";
	worldX = 0;
	worldY = 0;
}

WorldSpace::WorldSpace(std::string name, SDL_Renderer* renderer){
	worldName = name;
	worldX = 0;
	worldY = 0;
	//SDL_RenderDrawLine(renderer, worldX, worldY, worldXEnd, worldYEnd);
}

WorldSpace::~WorldSpace(){
}

void WorldSpace::setWorldName(std::string name){
	worldName = name;
}
void WorldSpace::setXCoordinates(int x){
	worldX = x;
}
void WorldSpace::setXYCoordinates(int y){
	worldY = y;
}
std::string WorldSpace::getWorldName(){
	return worldName;
}
int WorldSpace::getXCoordinates(){
	return worldX;
}
int WorldSpace::getYCoordinates(){
	return worldY;
}

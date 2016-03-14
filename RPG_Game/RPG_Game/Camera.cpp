#include "Camera.h"

Camera::Camera(){
	camera.w = 800;
	camera.h = 600;
	camera.x = 0;
	camera.y = 0;
}

Camera::~Camera(){
}

void Camera::setCameraX(int x){
	camera.x += x;
}
void Camera::setCameraY(int y){
	camera.y += y;
}

int Camera::getCameraX(){
	return camera.x;
}
int Camera::getCameraY(){
	return camera.y;
}

SDL_Rect* Camera::getRect(){
	return &camera;
}
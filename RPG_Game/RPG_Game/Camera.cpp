#include "Camera.h"

Camera::Camera(){
	//camera.w = 800;
	//camera.h = 600;
	x = 0;
	y = 0;
}

Camera::~Camera(){
}

void Camera::setCameraX(int X){
	x += X;
}
void Camera::setCameraY(int Y){
	y += Y;
}

int Camera::getCameraX(){
	return x;
}
int Camera::getCameraY(){
	return y;
}

/*SDL_Rect* Camera::getRect(){
	return &camera;
}*/
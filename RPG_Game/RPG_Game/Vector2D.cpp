#include "Vector2D.h"

Vector2D::Vector2D(){
	x = 1;
	y = 1;
}

Vector2D::Vector2D(int X, int Y){
	x = X;
	y = Y;
}

Vector2D::~Vector2D(){

}

float Vector2D::magnitude(){
	return sqrt((x * x) + (y * y));
}
void Vector2D::normalize(){
	x = x / magnitude();
	y = y / magnitude();
}

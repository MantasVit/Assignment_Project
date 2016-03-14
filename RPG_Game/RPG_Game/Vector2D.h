#pragma once

#include <iostream>

class Vector2D{
	int x, y;
public:
	Vector2D();
	Vector2D(int X, int Y);
	~Vector2D();
	float magnitude();
	void normalize();
};


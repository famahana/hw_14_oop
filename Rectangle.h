#pragma once
#include "Shape.h"

class Rectangle :public Shape
{
private:
	int width;
	int height;
public:
	Rectangle(int w, int h);
	int Area();
};

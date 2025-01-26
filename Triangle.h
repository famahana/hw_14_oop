#pragma once

#include "Shape.h"

class Triangle : public Shape
{
private:
	int base;
	int height;
public:
	Triangle(int b, int h);
	int Area();
};
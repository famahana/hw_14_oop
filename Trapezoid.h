#pragma once
#include "Shape.h"

class Trapezoid :public Shape
{
private:
	int base1;
	int base2;
	int height;
public:
	Trapezoid(int b1, int b2, int h);
	int Area();
};

#pragma once
#include "Shape.h"


class Circle :public Shape
{
private:
	int radius;
public:
	Circle(int r);
	int Area();
};

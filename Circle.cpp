#include "Circle.h"
#include <math.h>

Circle::Circle(int r):radius(r){}

int Circle::Area()
{
	return  radius * radius;
}
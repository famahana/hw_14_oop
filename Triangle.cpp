#include "Triangle.h"

Triangle::Triangle(int b,int h):base(b),height(h){}

int Triangle::Area()
{
	return 0.5 * base * height;
}
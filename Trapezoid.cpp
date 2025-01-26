#include "Trapezoid.h"

Trapezoid::Trapezoid(int b1, int b2, int h) :base1(b1), base2(b2), height(h){}

int  Trapezoid::Area()
{
		return 0.5 * (base1 + base2) * height;
}
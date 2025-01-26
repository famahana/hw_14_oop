#include "Rectangle.h"

Rectangle::Rectangle(int w,int h):width(w),height(h){}

int Rectangle::Area()
{
	return width * height;
}
#include <iostream>
#include "Rectangle.h"
#include "Circle.h"
#include "Triangle.h"
#include "Trapezoid.h"
using namespace std;

int main()
{
	const int N = 4;
	Shape* shapes[N];
	shapes[0] = new Rectangle(6, 10);
	shapes[1] = new Circle(8);
	shapes[2] = new Triangle(5, 9);
	shapes[3] = new Trapezoid(2, 8, 3);
	for (int i = 0; i < N; i++)
	{
		cout << "Area: " << shapes[i]->Area() << endl;
	}
	for (int i = 0; i < N; i++)
	{
		delete shapes[i];
	}

	return 0;
}
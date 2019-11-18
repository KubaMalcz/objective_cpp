#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <math.h>
//#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"

using namespace std;


int main()
{
	cout << "Zadanie 1" << endl;
	Point p1(2, 4), p2(2, 2), p3(4,6);
	cout << p1.Length(p2) << endl << endl;

	Circle kolo(p1,3);
	Rectangle prostokat(p1, p2, 4);
	Triangle trojkat(p1, p2, p3);
	cout << "Pole kola to: " << kolo.Area() << endl;
	cout << "Pole prostokata to: " << prostokat.Area() << endl;
	cout << "Pole trojkata to: " << trojkat.Area() << endl;

	cout << endl;

	Shape* tabp[3];
	tabp[0] = new Circle(p2,5);
	tabp[1] = new Triangle(p2,p3,p1);
	tabp[2] = new Rectangle(p3,p1,7);
	int count = 0;
	for (int I = 0; I < 3; ++I)
	{
		tabp[I]->PrintName();
		cout << tabp[I]->Area() << endl;

		if (dynamic_cast<Circle*>(tabp[I]))
		{
			++count;
		}
	}
	cout << "Liczba obiektow Circle: " << count << endl;
	

	cout << endl << "Zadanie 2" << endl;
	Point pa(10, 20), pb(30, 40);
	cout << "Length()" << endl;
	cout << pa.Length(pb) << endl;
	cout << "Length2()" << endl;
	cout << pa.Length2(pb) << endl;

	return 0;
}
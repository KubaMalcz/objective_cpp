#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <math.h>
#include "Triangle.h"

using namespace std;

Triangle::Triangle(const Point& a, const Point& b, const Point& c) {
	p1 = a;
	p2 = b;
	p3 = c;
}

Triangle::~Triangle() {}

double Triangle::Area() {
	return 0.5 * abs(p1.x * p2.y + p2.x * p3.y + p3.x + p1.y + p3.x * p2.y + p1.x * p3.y + p2.x * p1.y);
}

void Triangle::PrintName() {
	cout << "class Triangle\n";
}

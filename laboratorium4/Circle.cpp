#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include "Circle.h"

using namespace std;


Circle::Circle(const Point& p, const double& a) {
	center = p;
	r = a;
}

Circle::~Circle() {}

double Circle::Area() {
	return M_PI * r * r;
}

void Circle::PrintName() {
	cout << "class Circle\n";
}

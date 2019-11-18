#include <iostream>
#include <cmath>
#include <math.h>
#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle(const Point& p1, const Point& p2, const double& a) {
	ld = p1;
	rd = p2;
	l = a;
}

Rectangle::~Rectangle() {}

double Rectangle::Area() {
	return ld.Length(rd) * l;
}

void Rectangle::PrintName() {
	cout << "class Rectangle\n";
}

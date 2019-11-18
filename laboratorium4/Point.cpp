#include <iostream>
#include "Point.h"
using namespace std;


Point::Point() {
	x = 0;
	y = 0;
}

Point::Point(const double& a, const double& b) {
	x = a;
	y = b;
}

Point::Point(const Point& p)
{
	x = p.x;
	y = p.y;
	cout << "Point: Kontruktor kopiujacy" << endl;
}

Point::~Point() {}

double Point::Length(const Point& p2) {
	return sqrt((p2.x - x) * (p2.x - x) + (p2.y - y) * (p2.y - y));
}

double Point::Length2(const Point p)
{
	return sqrt((x - p.x) * (x - p.x) + (y - p.y) * (y - p.y));
}

Point& Point::operator=(const Point& p3) {
	x = p3.x;
	y = p3.y;
	return *this;
}

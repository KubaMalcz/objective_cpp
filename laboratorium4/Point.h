#pragma once

#include <iostream>

using namespace std;

class Point {
public:
	Point();

	Point(const double& a, const double& b);
	
	Point(const Point& p);

	~Point();

	double Length(const Point& p2);

	double Length2(const Point p);

	Point& operator=(const Point& p3);

	double x, y;

};
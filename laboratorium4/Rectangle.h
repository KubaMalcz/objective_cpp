#pragma once

#include <iostream>
#include <cmath>
#include <math.h>
#include "Circle.h"

using namespace std;

class Rectangle : public Shape {
public:
	Rectangle(const Point& p1, const Point& p2, const double& a);

	virtual ~Rectangle();

	virtual double Area();

	virtual void PrintName();
private:
	Point ld, rd;
	double l;
};
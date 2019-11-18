#pragma once

#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <math.h>
#include "Shape.h"

using namespace std;

class Triangle : public Shape {
public:
	Triangle(const Point& a, const Point& b, const Point& c);

	virtual ~Triangle();

	virtual double Area();

	virtual void PrintName();
private:
	Point p1, p2, p3;
};
#pragma once

#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include "Shape.h"

using namespace std;

class Circle : public Shape {
public:
	Circle(const Point& p, const double& a);

	virtual ~Circle();

	virtual double Area();

	virtual void PrintName();

private:
	Point center;
	double r;
};

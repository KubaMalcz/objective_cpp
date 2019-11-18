#pragma once

#include <iostream>
#include "Point.h"

using namespace std;

class Shape {
public:
	virtual ~Shape();

	virtual void PrintName();

	virtual double Area() = 0;
};
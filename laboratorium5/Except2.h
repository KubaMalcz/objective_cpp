#pragma once

#include <iostream>
#include <string>
#include <exception>
#include "Except.h"

using namespace std;

class Except2 : public Except {
public:
	Except2(const int& num);
	virtual void PrintInfo();
private:
	int line_nr;
};
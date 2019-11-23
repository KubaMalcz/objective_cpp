#pragma once

#include <iostream>
#include <string>
#include <exception>
#include "Except.h"

using namespace std;

class Except1 : public Except {
public:
	virtual void PrintInfo();
};
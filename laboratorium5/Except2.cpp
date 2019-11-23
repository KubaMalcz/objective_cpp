#pragma once

#include <iostream>
#include <string>
#include <exception>
#include "Except.h"
#include "Except2.h"

using namespace std;

void Except2::PrintInfo() {
	cout << "Wyjatek w linii " << line_nr << endl;
}

Except2::Except2(const int& num) {
	line_nr = num;
}
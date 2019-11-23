#pragma once

#include <iostream>
#include <string>
#include <exception>
#include "Except.h"
#include "Except1.h"

using namespace std;

void Except1::PrintInfo() {
	cout << "Oto nasz wyjatek" << endl;
}
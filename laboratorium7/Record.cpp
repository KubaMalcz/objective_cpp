#pragma once

#include <iostream>
#include "Record.h"

using namespace std;

Record::Record() {
	mName = "";
};

Record::Record(const char c[]) {
	mName = c;
};

ostream& operator<<(ostream& o, const Record& w) {
	o << w.mName << endl;
	return o;
};
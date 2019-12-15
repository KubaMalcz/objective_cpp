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

bool operator<(const Record& r1, const Record& r2) {
	if (r1.mName < r2.mName)
		return true;
	else
		return false;
};
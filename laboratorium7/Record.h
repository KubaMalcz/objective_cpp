#pragma once

#include <iostream>

using namespace std;

class Record
{
public:
    string mName;
    string mPhone;
    int     mAge;
    Record();
    Record(const char c[]);
    ~Record() {};
    friend ostream& operator<<(ostream& o, const Record& w);
	friend bool operator<(const Record& r1, const Record& r2);
};

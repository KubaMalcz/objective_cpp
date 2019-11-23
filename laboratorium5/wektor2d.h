#pragma once

#include <iostream>
#include <stdio.h>

using namespace std;

template <class T>
class wektor2d {

public:
	wektor2d();
	wektor2d(const T& xx, const T& yy);
	wektor2d(const wektor2d& v);
	//~wektor2d();

	wektor2d& operator+=(const wektor2d& v2d_2);
	wektor2d& operator=(const wektor2d& v2d_3);
	
	void SetX(const T& xx);
	double GetX();
	void Drukuj();
	double GetY();

private:
	T x; 
	T y;
	double MAX_VAL = 100;
	int static indx;
	int nr = indx + 1;

	friend wektor2d operator+(const wektor2d& ex, const wektor2d& ey);
	friend ostream& operator<<(ostream& o, const wektor2d& w);
	friend bool operator<(const wektor2d& a, const wektor2d& b);
	friend bool operator>(const wektor2d& a, const wektor2d& b);
	friend bool operator==(const wektor2d& a, const wektor2d& b);
};

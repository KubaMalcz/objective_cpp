#pragma once

#include <iostream>
#include <stdio.h>

using namespace std;

template <class T>
class wektor2d {

public:
	wektor2d();
	wektor2d(const T& xx, const T& yy);
	wektor2d(const wektor2d<T>& v);
	~wektor2d();

	wektor2d<T>& operator+=(const wektor2d<T>& v2d_2);
	wektor2d<T>& operator=(const wektor2d<T>& v2d_3);

	void SetX(const T& xx);
	T GetX() const;
	void Drukuj();
	T GetY() const;
	T length_kw();

private:
	T x;
	T y;
	double MAX_VAL = 100;
	int static indx;
	int nr = indx + 1;

	//template<class Z>
	//friend wektor2d<Z> operator+(const wektor2d<Z>& ex, const wektor2d<Z>& ey);
	

	//friend ostream& operator<<(ostream& o, const wektor2d<T>& w);

	template<class T2>
	friend ostream& operator<<(ostream& o, const wektor2d<T2>& w);

	//template <>
	//friend ostream& operator<<(ostream& o, const wektor2d<T>& w);
	//friend bool operator<(const wektor2d& a, const wektor2d& b);
	template<class T2>
	friend bool operator>(const wektor2d<T2>& a, const wektor2d<T2>& b);
	//friend bool operator==(const wektor2d& a, const wektor2d& b);
};






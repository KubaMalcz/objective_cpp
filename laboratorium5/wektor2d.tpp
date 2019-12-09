#pragma once

#include <iostream>
#include <stdio.h>
#include "wektor2d.h"

using namespace std;

template <class T>
wektor2d<T>::wektor2d() : x(0), y(0)
{
	//cout << "Konstruktor defoultowy " << nr << ": [" << x << ", " << y << "]" << endl;
	indx += 1;
}

template <class T>
wektor2d<T>::wektor2d(const T& xx, const T& yy)
{
	x = xx;
	y = yy;
	//cout << "konstruktor parametryczny " << nr << ": [" << x << ", " << y << "]" << endl;
	indx += 1;
}

template <class T>
wektor2d<T>::wektor2d(const wektor2d& v)
{
	x = v.x;
	y = v.y;
	//cout << "konstruktor kopiujacy " << nr << ": [" << x << ", " << y << "]" << endl;
	indx += 1;
}

template <class T>
wektor2d<T>::~wektor2d()
{
	//cout << "destruktor " << nr << ": [" << x << ", " << y << "]" << endl;
}

template <class T>
void wektor2d<T>::Drukuj()
{
	cout << "wektor [" << x << ", " << y << "]" << endl;
}

template <class T>
wektor2d<T>& wektor2d<T>::operator+=(const wektor2d<T>& v2d_2)
{
	x = x + v2d_2.x;
	y = y + v2d_2.y;
	//cout << "Dodawanie jeden parametr" << endl;
	return *this;
}

template <class T>
wektor2d<T>& wektor2d<T>::operator=(const wektor2d& v2d_3)
{
	x = v2d_3.x;
	y = v2d_3.y;
	//cout << "Operator '='" << endl;
	return *this;
}

template <class T>
void wektor2d<T>::SetX(const T& xx)
{
	x = xx;
}

template <class T>
T wektor2d<T>::GetX() const
{
	return x;
}

template <class T>
T wektor2d<T>::GetY() const
{
	return y;
}
//
//template <class T>
//wektor2d<T> operator+(const wektor2d<T>& a, const wektor2d<T>& b)
//{
//	wektor2d<T> temp;
//	temp.x = a.x + b.x;
//	temp.y = a.y + b.y;
//	cout << "Dodawanie dwa parametry" << endl;
//	return temp;
//};




template <class T>
T wektor2d<T>::length_kw()
{
	return x * x + y * y;
};
//
//template <class T, class Y>
//bool operator<(const wektor2d<T>& a, const wektor2d<Y>& b)
//{
//	T l1;
//	Y l2;
//	l1 = a.x * a.x + a.y * a.y;
//	l2 = b.x * b.x + b.y * b.y;
//	if (l1 < l2) {
//		return true;
//	}
//	else
//	{
//		return false;
//	};
//};

template <class T2>
bool operator>(const wektor2d<T2>& a, const wektor2d<T2>& b)
{
	T2 l1, l2;
	l1 = a.x * a.x + a.y * a.y;
	l2 = b.x * b.x + b.y * b.y;
	if (l1 > l2) {
		return true;
	}
	else
	{
		return false;
	};
};
//
//template <class T>
//bool operator==(const wektor2d<T>& a, const wektor2d<T>& b)
//{
//	double l1, l2;
//	l1 = a.x * a.x + a.y * a.y;
//	l2 = b.x * b.x + b.y * b.y;
//	if (l1 = l2) {
//		return true;
//	}
//	else
//	{
//		return false;
//	};
//};


template<class T2>
inline ostream& operator<<(ostream& o, const wektor2d<T2>& w) {
	o << "Wektor int [" << w.x << ", " << w.y << "]" << endl;
	return o;
};

//template<class T>
//wektor2d<T> mymax(wektor2d<T> w1, wektor2d<T> w2) {
//	wektor2d<T> R;
//	if (w1.length_kw() > w2.length_kw()) return R = w1;
//	else return R = w2;
//}

template <class T>
int wektor2d<T>::indx = 0;
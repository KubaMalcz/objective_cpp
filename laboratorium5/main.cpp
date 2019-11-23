#include <iostream>
#include <string>
#include <exception>
#include <stdio.h>
#include "Except.h"
#include "Except1.h"
#include "Except2.h"
//#include "wektor2d.h"

using namespace std;

//###############################################

using namespace std;

template <class T>
class wektor2d {

public:
	wektor2d();
	wektor2d(const T& xx, const T& yy);
	wektor2d(const wektor2d& v);
	~wektor2d();

	wektor2d& operator+=(const wektor2d& v2d_2);
	wektor2d& operator=(const wektor2d& v2d_3);

	void SetX(const T& xx);
	double GetX();
	void Drukuj();
	double GetY();
	T length_kw();

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
wektor2d<T>& wektor2d<T>::operator+=(const wektor2d& v2d_2)
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
double wektor2d<T>::GetX()
{
	return x;
}

template <class T>
double wektor2d<T>::GetY()
{
	return y;
}

template <class T>
wektor2d<T> operator+(const wektor2d<T>& a, const wektor2d<T>& b)
{
	wektor2d<T> temp;
	temp.x = a.x + b.x;
	temp.y = a.y + b.y;
	cout << "Dodawanie dwa parametry" << endl;
	return temp;
};

template <class T>
ostream& operator<<(ostream& o, const wektor2d<T>& w) {
	o << "wektor [" << w.x << ", " << w.y << "]" << endl;
	return o;
};

template <class T>
T wektor2d<T>::length_kw()
{
	return x * x + y * y;
};

template <class T, class Y>
bool operator<(const wektor2d<T>& a, const wektor2d<Y>& b)
{
	T l1;
	Y l2;
	l1 = a.x * a.x + a.y * a.y;
	l2 = b.x * b.x + b.y * b.y;
	if (l1 < l2) {
		return true;
	}
	else
	{
		return false;
	};
};

template <class T, class Y>
bool operator>(const wektor2d<T>& a, const wektor2d<Y>& b)
{
	T l1;
	Y l2;
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

template <class T>
bool operator==(const wektor2d<T>& a, const wektor2d<T>& b)
{
	double l1, l2;
	l1 = a.x * a.x + a.y * a.y;
	l2 = b.x * b.x + b.y * b.y;
	if (l1 = l2) {
		return true;
	}
	else
	{
		return false;
	};
};

template<class T>
wektor2d<T> mymax(wektor2d<T> w1, wektor2d<T> w2) {
	wektor2d<T> R;
	if (w1.length_kw() > w2.length_kw()) return R = w1;
	else return R = w2;
}

template <class T>
int wektor2d<T>::indx = 0;

//################################################

template <class T, class Y>
T mymax(T x, Y y)
{
	if (x > y) return x;
	else return y;
}

template <class T, class Y>
T mymin(T x, Y y)
{
	if (x > y) return y;
	else return x;
}

void Wyjatek_double() {
	throw 2.14;
}

void Wyjatek_str() {
	Wyjatek_double();
	throw string("To jest wyjatek!");
}

void Wyjatek_int() {
	throw 1;
}

//typedef wektor2d<double> wektor2d_double;

int main() {
	
	try
	{
		cout << "ZADANIE 2" << endl;
		cout << mymax(1., 2) << endl;

		wektor2d<int> w1(1, 3), w2(3, 5);
		wektor2d<int> w3 = mymax<int>(w1, w2);
		w3.Drukuj();
		cout << endl;
		
		wektor2d<double> wt1(10., 20.), wt2(10., 40.);
		wektor2d<double> wt4 = mymax(wt1, wt2);
		//Wyjatek_str();
		//Wyjatek_int();
		//throw Except1();
		//throw Except2(__LINE__);
		//throw true;
	}

	catch (string s)
	{
		cout << s << endl;
	}
	catch (int e)
	{
		cout << e << endl;
	}
	catch (double e)
	{
		cout << e << endl;
	}
	catch (Except & e) 
	{
		e.PrintInfo();
	}
	catch (...) 
	{
		cout << "Nieznany wyjatek" << endl;
	}

	return 0;
}

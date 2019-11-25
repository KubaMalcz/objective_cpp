#include <iostream>
#include <string>
#include <exception>
#include <stdio.h>
#include "Except.h"
#include "Except1.h"
#include "Except2.h"
#include "wektor2d.h"
#include "wektor2d.cpp"

using namespace std;

//###############################################

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
		wektor2d<int> w3 = mymax(w1, w2);
		w3.Drukuj();
		//w3 = w1 + w2;
		//w3.Drukuj();
		cout << endl;
		cout << w3;
		
		wektor2d<double> wt1(10.2, 20.), wt2(10., 40.4);
		wektor2d<double> wt4 = mymax(wt1, wt2);
		cout << wt4;
		cout << endl;
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

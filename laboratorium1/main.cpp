#include <iostream>
#include "pojemnik.h"
//#include "wektor2d.h"
using namespace std;



int main(){
	
	cout << "ZADANIE 1:" << endl;
	wektor2d v1(10, 20);
	wektor2d v2 = v1;
	wektor2d v3(v1);
	wektor2d v4;
	v1.Drukuj();
	v2.Drukuj();
	v3.Drukuj();
	v4.Drukuj();

	cout << endl << "ZADANIE 2:" << endl;
	v4 = v1 + v2;
	v4.Drukuj();
	v3 += v3;
	v3.Drukuj();

	cout << endl << "ZADANIE 3:" << endl;
	v4.SetX(50);
	v4.Drukuj();
	wektor2d v5(v4.GetY(), v3.GetX());
	v5.Drukuj();


	//########################################################

	cout << endl << endl << "LABORATORIUM 2:" << endl << endl;
	pojemnik poj;
	poj.dodaj(v1);
	poj.dodaj(v2);
	poj.dodaj(wektor2d(3, 2));
	poj.dodaj(wektor2d(8, 4));

	cout << endl << "ZADANIE 2:" << endl;
	poj.DrukujWszystko();

	cout << endl << "ZADANIE 3:" << endl;
	cout << "Suma wektorow to: " << endl;
	poj.Suma().Drukuj();
	cout << endl;

	cout << endl << "ZADANIE 4:" << endl;
	cout << v1;
	cout << endl;
	cout << v1 << v2;
	poj.DrukujWszystko2();

	cout << endl << "ZADANIE 5:" << endl;
	poj.Max().Drukuj();

	system("PAUSE");
	return 0;
}

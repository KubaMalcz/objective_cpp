#include <iostream>
#include "A.h"
#include "Autobus.h"
using namespace std;


int main()
{
    A *ptr;
    ptr = new A[5];
    delete [] ptr; // co będzie gdy usunie się nawiasy [] ?

	for (int i = 0; i < 5; ++i) ptr[i].mattr = i + 1;

	for (int i = 0; i < 5; ++i) cout << " element " << i << " attr = " << ptr[i].mattr << endl;


	cout << endl << endl << "Cwiczenie 2" << endl;
	Pojazd poj;
	cout << "Przebieg to: " << poj.GetPrzebieg() << endl;

	cout << endl << endl << "Cwiczenie 3" << endl;
	Autobus bus1(2, 3);
	Autobus  bus;
	bus = 3;

	cout << endl << endl << "Koniec" << endl;

    return 0;
}
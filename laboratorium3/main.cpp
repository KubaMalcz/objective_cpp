#include <iostream>
#include "A.h"
#include "Autobus.h"
using namespace std;


int main()
{
    A *ptr;
    ptr = new A[5];

	for (int i = 0; i < 5; ++i) ptr[i].mattr = i + 1;

	//delete [] ptr; // co będzie gdy usunie się nawiasy [] ?

	for (int i = 0; i < 5; ++i) cout << " element " << i << " attr = " << ptr[i].mattr << endl;

	
	
	for (int i = 0; i < 5; ++i) ptr[i].attr = i + 1;

	delete[] ptr; // co będzie gdy usunie się nawiasy [] ?

	for (int i = 0; i < 5; ++i) cout << " element " << i << " attr = " << ptr[i].attr << endl;



	cout << endl << endl << "Cwiczenie 2" << endl;
	Pojazd poj;
	cout << "Przebieg to: " << poj.GetPrzebieg() << endl;

	cout << endl << endl << "Cwiczenie 3" << endl;
	Autobus bus1(2, 3);
	Autobus  bus;
	//bus = 3;
	cout << "Liczba pasazerow to: " << bus1.GetLiPasazerow() << endl;
	cout << "Przebieg to: " << bus1.GetPrzebieg() << endl;

	cout << endl << endl << "Cwiczenie 4" << endl;
	Autobus  bus2(3);
	if (bus1 == bus2) {
		cout << "Jestem busem o przebiegu 3";
	}

	cout << endl << endl << "Koniec" << endl;

    return 0;
}
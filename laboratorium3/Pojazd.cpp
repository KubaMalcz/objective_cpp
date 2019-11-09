#include <iostream>
#include "Pojazd.h"
using namespace std;



Pojazd::Pojazd() : przebieg(0) {
	cout << "konstruktor defoultowy " << indx + 1 << endl;
	nr = indx + 1;
	indx += 1;
};

Pojazd::Pojazd(const int& n) : przebieg(n) {
	cout << "konstruktor parametryczny " << indx + 1 << endl;
	nr = indx + 1;
	indx += 1;
};

Pojazd::~Pojazd() {
	cout << "Destruktor " << nr << endl;
};

int Pojazd::GetPrzebieg() {
	return przebieg;
};

int Pojazd::indx = 0;
#include <iostream>
#include "Autobus.h"
using namespace std;


Autobus::Autobus() : l_pasazerow(0) {
	cout << "konstruktor domyslny autobus " << indx2 + 1 << endl;
	nr2 = indx2 + 1;
	indx2 += 1;
};

Autobus::Autobus(const int& m) : l_pasazerow(m) {
	cout << "konstruktor parametryczny autobus " << indx2 + 1 << endl;
	nr2 = indx2 + 1;
	indx2 += 1;
};

Autobus::Autobus(const int& i, const int& lp) : Pojazd() {
	przebieg = i;
	l_pasazerow = lp;
	cout << "konstruktor parametryczny autobus przebieg " << indx2 + 1 << endl;
	nr2 = indx2 + 1;
	indx2 += 1;
};

Autobus::~Autobus() {
	cout << "Destruktor autobus " << nr2 << endl;
};

int Autobus::GetLiPasazerow() {
	return l_pasazerow;
};

bool operator==(const Autobus& a, const Autobus& b) {
	if (a.l_pasazerow == b.l_pasazerow) {
		return true;
	}
	else
	{
		return false;
	};
}

int Autobus::indx2 = 0;
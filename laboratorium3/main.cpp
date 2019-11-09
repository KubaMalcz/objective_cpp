#include <iostream>
using namespace std;

class A
{
public:

	A() { cout << "konstruktor A\n"; }
    ~A()    { cout << "destruktor A\n";}

	int mattr;

};

class Pojazd
{
public:

	Pojazd() : przebieg(0) {
		cout << "konstruktor defoultowy " << indx + 1 << endl;
		nr = indx+1;
		indx += 1;
	}

	Pojazd(const int& n) : przebieg(n) {
		cout << "konstruktor parametryczny " << indx + 1 << endl;
		nr = indx+1;
		indx += 1;
	}

	virtual ~Pojazd() {
		cout << "Destruktor " << nr << endl;
	}

	int GetPrzebieg() {
		return przebieg;
	}

	int przebieg;

private:
	int nr;
	int static indx;
	
};

int Pojazd::indx = 0;


class Autobus : public Pojazd {
public:
	
	Autobus() : l_pasazerow(0) {
		cout << "konstruktor domyslny autobus " << indx2 + 1 << endl;
		nr2 = indx2 + 1;
		indx2 += 1;
	}

	Autobus(const int& m) : l_pasazerow(m) {
		cout << "konstruktor parametryczny autobus " << indx2 + 1 << endl;
		nr2 = indx2 + 1;
		indx2 += 1;
	}

	Autobus(const int& i, const int& lp) : Pojazd () {
		przebieg = i;
		l_pasazerow = lp;
		cout << "konstruktor parametryczny autobus przebieg " << indx2 + 1 << endl;
		nr2 = indx2 + 1;
		indx2 += 1;
	}

	virtual ~Autobus() {
		cout << "Destruktor autobus " << nr2 << endl;
	}

	int GetLiPasazerow() {
		return l_pasazerow;
	}

private:
	int l_pasazerow, nr2;
	int static indx2;

};

int Autobus::indx2 = 0;

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
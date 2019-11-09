#include <iostream>
#include "Pojazd.h"
using namespace std;


class Autobus : public Pojazd {
public:

	Autobus();

	Autobus(const int& m);

	Autobus(const int& i, const int& lp);

	virtual ~Autobus();

	int GetLiPasazerow();

private:
	int l_pasazerow, nr2;
	int static indx2;

};


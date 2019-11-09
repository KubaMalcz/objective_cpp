#include <iostream>
using namespace std;


class Pojazd
{
public:

	Pojazd();

	Pojazd(const int& n);

	virtual ~Pojazd();

	int GetPrzebieg();
	int przebieg;

private:
	int nr;
	int static indx;

};


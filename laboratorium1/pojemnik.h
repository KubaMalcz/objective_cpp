#include <iostream>
#include "wektor2d.h"

using namespace std;

class pojemnik {
public:

	pojemnik() : msize(0), mdata(NULL) {
		cout << "Konstruktor domyslny" << endl;
	}

	~pojemnik() {
		cout << "Destruktor" << endl;
		delete[] mdata;
	}

	void dodaj(const wektor2d& v) {
		wektor2d* temp1 = new wektor2d[msize + 1];
		for (int i = 0; i < msize; ++i)
		{
			temp1[i] = mdata[i];
		}
		temp1[msize] = v;
		delete[]mdata;
		mdata = new wektor2d[msize + 1];
		/*for (int k = 0; k++; k < msize+1)
		{
			mdata[k] = temp1[k];
		}*/
		msize++;
		mdata = temp1;
		cout << "Dodano wektora";
		cout << " do pojemnika" << endl;
	}

	void DrukujWszystko() {
		for (int i = 0; i < msize; ++i) {
			cout << "Drukuj" << i;
			mdata[i].Drukuj();
		}
	}

	void DrukujWszystko2() {
		for (int i = 0; i < msize; ++i) {
			cout << "Drukuj" << mdata[i];
		}
	}

	wektor2d Suma() {
		wektor2d temp2(0, 0);
		for (int i = 0; i < msize; ++i) {
			temp2 = temp2 + mdata[i];
		}
		return temp2;
	}

	wektor2d Max() {
		wektor2d temp2(0, 0);
		for (int i = 0; i < msize; ++i) {
			if (temp2 < mdata[i]) {
				temp2 = mdata[i];
			};
		}
		return temp2;
	}

private:
	int msize;
	wektor2d* mdata;

};




#include <iostream>
#include "wektor2d.h"

using namespace std;

class pojemnik {
public:

	pojemnik(){
		msize = 1;
		mdata = new wektor2d[msize];
		cout << "Konstruktor domyslny" << endl;
	}

	~pojemnik() {
		cout << "Destruktor" << endl;
		delete[] mdata;
	}

	void dodaj(const wektor2d& v) {
		wektor2d* temp1;
		msize += 1;
		temp1 = new wektor2d[msize];
		for (int i = 0; i++; i < msize - 1)
		{
			temp1[i] = mdata[i];
		}
		temp1[msize] = v;
		delete[]mdata;
		mdata = new wektor2d[msize];
		mdata = temp1;
		cout << "Dodano wektor"; 
		cout << " do pojemnika" << endl;
	}
	
private:
	int msize;
	wektor2d* mdata;

};


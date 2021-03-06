#include <iostream>
using namespace std;

class wektor2d {

public:
	wektor2d() : x(0), y(0)
	{
		//cout << "Konstruktor defoultowy " << nr << ": [" << x << ", " << y << "]" << endl;
		indx += 1;
	}

	wektor2d(const double& xx, const double& yy)
	{
		x = xx;
		y = yy;
		//cout << "konstruktor parametryczny " << nr << ": [" << x << ", " << y << "]" << endl;
		indx += 1;
	}

	/*
	wektor2d(const wektor2d& v) : x(v.x), y(v.y)
	{
		cout << "konstruktor kopiujacy " << nr << ": [" << x << ", " << y << "]" << endl;
		indx += 1;
	}
	*/

	wektor2d(const wektor2d& v)
	{
		x = v.x;
		y = v.y;
		//cout << "konstruktor kopiujacy " << nr << ": [" << x << ", " << y << "]" << endl;
		indx += 1;
	}

	~wektor2d()
	{
		//cout << "destruktor " << nr << ": [" << x << ", " << y << "]" << endl;
	}

	void Drukuj()
	{
		cout << "wektor [" << x << ", " << y << "]" << endl;
	}

	wektor2d& operator+=(const wektor2d& v2d_2)
	{
		x = x + v2d_2.x;
		y = y + v2d_2.y;
		//cout << "Dodawanie jeden parametr" << endl;
		return *this;
	}

	wektor2d& operator=(const wektor2d& v2d_3)
	{
		x = v2d_3.x;
		y = v2d_3.y;
		//cout << "Operator '='" << endl;
		return *this;
	}

	void SetX(const double& xx)
	{
		if (xx >= 100) {
			exit(0);
		}
		else {
			x = xx;
		}

	}

	double GetX()
	{
		return x;
	}

	double GetY()
	{
		return y;
	}

private:
	double x, y, MAX_VAL = 100;
	int static indx;
	int nr = indx + 1;

	friend wektor2d operator+(const wektor2d& ex, const wektor2d& ey);
	friend ostream& operator<<(ostream& o, const wektor2d& w);
	friend bool operator<(const wektor2d& a, const wektor2d& b);
	friend bool operator>(const wektor2d& a, const wektor2d& b);
	friend bool operator==(const wektor2d& a, const wektor2d& b);

};

wektor2d operator+(const wektor2d& a, const wektor2d& b)
{
	wektor2d temp;
	temp.x = a.x + b.x;
	temp.y = a.y + b.y;
	//cout << "Dodawanie dwa parametry" << endl;
	return temp;
};

ostream& operator<<(ostream& o, const wektor2d& w) {
	o << "wektor [" << w.x << ", " << w.y << "]" << endl;
	return o;
};

bool operator<(const wektor2d& a, const wektor2d& b)
{
	double l1, l2;
	l1 = a.x * a.x + a.y * a.y;
	l2 = b.x * b.x + b.y * b.y;
	if (l1 < l2) {
		return true;
	}
	else
	{
		return false;
	};
};

bool operator>(const wektor2d& a, const wektor2d& b)
{
	double l1, l2;
	l1 = a.x * a.x + a.y * a.y;
	l2 = b.x * b.x + b.y * b.y;
	if (l2 > l1) {
		return true;
	}
	else
	{
		return false;
	};
};

bool operator==(const wektor2d& a, const wektor2d& b)
{
	double l1, l2;
	l1 = a.x * a.x + a.y * a.y;
	l2 = b.x * b.x + b.y * b.y;
	if (l1 = l2) {
		return true;
	}
	else
	{
		return false;
	};
};

int wektor2d::indx = 0;

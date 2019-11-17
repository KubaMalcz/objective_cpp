#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

class Point {
public:
	Point() {
		x = 0;
		y = 0;
	}

	Point(const double& a, const double& b){
		x = a;
		y = b;
	}

	Point(const Point& p)
	{
		x = p.x;
		y = p.y;
		cout << "Point: Kontruktor kopiuj¹cy" << endl;
	}

	~Point(){}

	double Length(const Point& p2) {
		return sqrt((p2.x - x) * (p2.x - x) + (p2.y - y) * (p2.y - y));
	}

	double Length2(const Point p)
	{
		return sqrt((x - p.x) * (x - p.x) + (y - p.y) * (y - p.y));
	}

	Point& operator=(const Point& p3) {
		x = p3.x;
		y = p3.y;
		return *this;
	}

	double x, y;

}; 


class Shape {
public:
	virtual ~Shape() {}
	
	virtual void PrintName()
	{
		cout << "class Shape\n";
	}

	virtual double Area() = 0;
};

class Circle : public Shape {
public:
	Circle(const Point& p, const double& a ){
		center = p;
		r = a;
	}

	virtual ~Circle() {}

	virtual double Area() {
		return M_PI * r * r;
	}

	virtual void PrintName() {
		cout << "class Circle\n";
	}

private:
	Point center;
	double r;
};

class Rectangle : public Shape {
public:
	Rectangle(const Point& p1, const Point& p2, const double& a) {
		ld = p1;
		rd = p2;
		l = a;
	}

	virtual ~Rectangle() {}

	virtual double Area() {
		return ld.Length(rd)*l;
	}

	virtual void PrintName() {
		cout << "class Rectangle\n";
	}


private:
	Point ld, rd;
	double l;
};


class Triangle : public Shape {
public:
	Triangle(const Point& a, const Point& b, const Point& c) {
		p1 = a;
		p2 = b;
		p3 = c;
	}

	virtual ~Triangle() {}

	virtual double Area() {
		return 0.5 * abs(p1.x*p2.y+p2.x*p3.y+p3.x+p1.y+p3.x*p2.y+p1.x*p3.y+p2.x*p1.y);
	}

	virtual void PrintName() {
		cout << "class Triangle\n";
	}

private:
	Point p1, p2, p3;
};


int main()
{
	cout << "Zadanie 1" << endl;
	Point p1(2, 4), p2(2, 2), p3(4,6);
	cout << p1.Length(p2) << endl << endl;

	Circle kolo(p1,3);
	Rectangle prostokat(p1, p2, 4);
	Triangle trojkat(p1, p2, p3);
	cout << "Pole kola to: " << kolo.Area() << endl;
	cout << "Pole prostokata to: " << prostokat.Area() << endl;
	cout << "Pole trojkata to: " << trojkat.Area() << endl;

	cout << endl;

	Shape* tabp[3];
	tabp[0] = new Circle(p2,5);
	tabp[1] = new Triangle(p2,p3,p1);
	tabp[2] = new Rectangle(p3,p1,7);
	int count = 0;
	for (int I = 0; I < 3; ++I)
	{
		tabp[I]->PrintName();
		cout << tabp[I]->Area() << endl;

		if (dynamic_cast<Circle*>(tabp[I]))
		{
			++count;
		}
	}
	cout << "Liczba obiektow Circle: " << count << endl;
	

	cout << endl << "Zadanie 2" << endl;
	Point pa(10, 20), pb(30, 40);
	cout << "Length()" << endl;
	cout << pa.Length(pb) << endl;
	cout << "Length2()" << endl;
	cout << pa.Length2(pb) << endl;

	return 0;
}
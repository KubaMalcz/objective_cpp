#include <iostream>
#include<conio.h>
#include<math.h>

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

	~Point(){}

	double Length(const Point& p2) {
		return sqrt((p2.x - x) * (p2.x - x) + (p2.y - y) * (p2.y - y));
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
	void PrintName()
	{
		cout << "class Shape\n";
	}
};

class Circle : public Shape {
public:
	Circle(const Point& p, const double& a ){
		center = p;
		r = a;
	}

	double Area() {
		return M_PI * r * r;
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

	double Area() {
		return ld.Length(rd)*l;
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

	double Area() {
		return 0.5 * abs(p1.x*p2.y+p2.x*p3.y+p3.x+p1.y+p3.x*p2.y+p1.x*p3.y+p2.x*p1.y);
	}

private:
	Point p1, p2, p3;
};


int main()
{
	Point p1(2, 4), p2(2, 2);
	cout << p1.Length(p2);

	return 0;
}
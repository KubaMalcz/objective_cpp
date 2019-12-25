#pragma once
#include<iostream>

using namespace std;

class Person {
public:
	Person(const char Name[],
		const char Surname[],
		const char City[],
		const char Street[],
		const char Postcode[],
		const char HomeNumber[],
		const char FlatNumber[],
		const int& PhoneNumber);
	~Person();
	void DisplayData();
	int GetId();
private:
	string Name, Surname, City, Street, Postcode, HomeNumber, FlatNumber;
	int PhoneNumber;
	int static indx;
	int Id = indx + 1;

};

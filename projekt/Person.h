#pragma once

#include<iostream>
#include<fstream>

using namespace std;

class Person {
public:
	Person();
	Person(const char Name[],
		const char Surname[],
		const char City[],
		const char Street[],
		const char Postcode[],
		const char HomeNumber[],
		const char FlatNumber[],
		const char PhoneNumber[]);
	~Person();
	void DisplayData();
	int GetId();
	void Save(ofstream& of);
	void Load(ifstream& inf);
private:
	string Name, Surname, City, Street, Postcode, HomeNumber, FlatNumber, PhoneNumber;
	int static indx;
	int Id = indx + 1;

};

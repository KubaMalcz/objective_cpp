#pragma once

#include<iostream>
#include<fstream>

#include"DatabaseRecord.h"

using namespace std;

class Person : public DatabaseRecord {
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
	virtual ~Person();
	virtual void DisplayData();
	virtual void DisplayDataV1();	// Display only Id name and surname
	virtual int GetId();
	virtual void Save(ofstream& of);
	virtual void Load(ifstream& inf);
	void SetIndx(const int& new_value);

	bool operator == (const int& Idik);

private:
	string Name, Surname, City, Street, Postcode, HomeNumber, FlatNumber, PhoneNumber;
	int static indx;
	int Id = indx + 1;

};

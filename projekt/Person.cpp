#pragma once

#include<iostream>
#include"Person.h"

using namespace std;

Person::Person(const char Nam[],
	const char Surnam[],
	const char Cit[],
	const char Str[],
	const char Postco[],
	const char HomeNum[],
	const char FlatNum[],
	const int& PhoneNum) {
	Name = Nam;
	Surname = Surnam;
	City = Cit;
	Street = Str;
	Postcode = Postco;
	HomeNumber = HomeNum;
	FlatNumber = FlatNum;
	PhoneNumber = PhoneNum;
	indx += 1;
};

Person::~Person() {};

void Person::DisplayData() {
	cout << "Record Id: " << Id << endl;
	cout << "Name and Surname: " << Name << " " << Surname << endl;
	cout << "City: " << City << endl;
	cout << "Adress: " << Street << " " << HomeNumber << "/" << FlatNumber << endl;
	cout << "Post code: " << Postcode << endl;
	cout << "Phone number: " << PhoneNumber << endl;
}

int Person::GetId() {
	return Id;
}

int Person::indx = 0;
#pragma once

#include<iostream>
#include<fstream>
#include"Person.h"

using namespace std;

Person::Person() {
	indx += 1;
};

Person::Person(const char Nam[],
	const char Surnam[],
	const char Cit[],
	const char Str[],
	const char Postco[],
	const char HomeNum[],
	const char FlatNum[],
	const char PhoneNum[]) {
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
};

void Person::DisplayDataV1() {
	cout << Id << " \t " << Name << " \t " << Surname << endl;
};

int Person::GetId() {
	return Id;
};

void Person::Save(ofstream& of)
{
	size_t size;
	
	of.write((char*)&Id, sizeof(Id));
	size = Name.size();
	of.write((char*)&size, sizeof(size));
	of.write((char*)Name.c_str(), size);
	size = Surname.size();
	of.write((char*)&size, sizeof(size));
	of.write((char*)Surname.c_str(), size);
	size = City.size();
	of.write((char*)&size, sizeof(size));
	of.write((char*)City.c_str(), size);
	size = Street.size();
	of.write((char*)&size, sizeof(size));
	of.write((char*)Street.c_str(), size);
	size = Postcode.size();
	of.write((char*)&size, sizeof(size));
	of.write((char*)Postcode.c_str(), size);
	size = HomeNumber.size();
	of.write((char*)&size, sizeof(size));
	of.write((char*)HomeNumber.c_str(), size);
	size = FlatNumber.size();
	of.write((char*)&size, sizeof(size));
	of.write((char*)FlatNumber.c_str(), size);
	size = PhoneNumber.size();
	of.write((char*)&size, sizeof(size));
	of.write((char*)PhoneNumber.c_str(), size);
};

void Person::Load(ifstream& inf)
{
	size_t size;
	char* data;

	inf.read((char*)&Id, sizeof(Id));

	inf.read((char*)&size, sizeof(size));
	data = new char[size + 1];
	inf.read(data, size);
	data[size] = '\0';
	Name = data;
	delete[] data;

	inf.read((char*)&size, sizeof(size));
	data = new char[size + 1];
	inf.read(data, size);
	data[size] = '\0';
	Surname = data;
	delete[] data;
	
	inf.read((char*)&size, sizeof(size));
	data = new char[size + 1];
	inf.read(data, size);
	data[size] = '\0';
	City = data;
	delete[] data;

	inf.read((char*)&size, sizeof(size));
	data = new char[size + 1];
	inf.read(data, size);
	data[size] = '\0';
	Street = data;
	delete[] data;

	inf.read((char*)&size, sizeof(size));
	data = new char[size + 1];
	inf.read(data, size);
	data[size] = '\0';
	Postcode = data;
	delete[] data;

	inf.read((char*)&size, sizeof(size));
	data = new char[size + 1];
	inf.read(data, size);
	data[size] = '\0';
	HomeNumber = data;
	delete[] data;
	
	inf.read((char*)&size, sizeof(size));
	data = new char[size + 1];
	inf.read(data, size);
	data[size] = '\0';
	FlatNumber = data;
	delete[] data;
	
	inf.read((char*)&size, sizeof(size));
	data = new char[size + 1];
	inf.read(data, size);
	data[size] = '\0';
	PhoneNumber = data;
	delete[] data;
	
};

void Person::SetIndx(const int& new_value) {
	indx = new_value;
};

bool Person::operator == (const int &Idik) {
	if (Idik == Id)
	{
		return true;
	}
};

int Person::indx = 0;
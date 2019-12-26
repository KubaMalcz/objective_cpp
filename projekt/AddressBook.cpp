#pragma once
#include<iostream>
#include<vector>
#include<algorithm>
#include<fstream>
#include"Person.h"
#include"AddressBook.h"

using namespace std;

AddressBook::AddressBook() {
	cout << "Book created" << endl;
};

AddressBook::~AddressBook() {
	Book.clear();
};

void AddressBook::AddRecord() {
	char Name[100], Surname[100], City[100], Street[100], Postcode[100], HomeNumber[100], FlatNumber[100], PhoneNumber[100];
	cout << "Name: ";
	cin >> Name; 
	cout << "Surname: "; 
	cin >> Surname;
	cout << "City: ";
	cin >> City;
	cout << "Street: "; 
	cin >> Street;
	cout << "Home number: ";
	cin >> HomeNumber; 
	cout << "Flat number: "; 
	cin >> FlatNumber;
	cout << "Post code: "; 
	cin >> Postcode;
	cout << "Phone number: ";
	cin >> PhoneNumber;
	Person Per(Name, Surname, City, Street, Postcode, HomeNumber, FlatNumber, PhoneNumber);
	Book.push_back(Per);
};

void AddressBook::DisplayData(int id) {
	auto itr = Book.begin();
	while (itr != Book.end()) {
		if (itr->GetId() == id)
			itr->DisplayData();
		++itr;
	}
};

/*
void AddressBook::WriteToFile() {
	ofstream outfile;
	outfile.open("Baza.dat", ios::binary | ios::out);
	auto itr = Book.begin();
	while (itr != Book.end()) {
		outfile.write(itr, sizeof(itr));
		++itr;
	}
	outfile.close();
}*/
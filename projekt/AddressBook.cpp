#pragma once

#include<iostream>
#include<vector>
#include<algorithm>
#include<fstream>
#include<string>

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
	cin.ignore();
	cin.getline(Name,100); 
	cout << "Surname: "; 
	cin.getline(Surname, 100);
	cout << "City: ";
	cin.getline(City, 100);
	cout << "Street: "; 
	cin.getline(Street, 100);
	cout << "Home number: ";
	cin.getline(HomeNumber, 100);
	cout << "Flat number: "; 
	cin.getline(FlatNumber, 100);
	cout << "Post code: "; 
	cin.getline(Postcode, 100);
	cout << "Phone number: ";
	cin.getline(PhoneNumber, 100);
	Person* Per = new Person (Name, Surname, City, Street, Postcode, HomeNumber, FlatNumber, PhoneNumber);
	Book.push_back(Per);
};

void AddressBook::AddRecord(Person* P) {
	Book.push_back(P);
};

void AddressBook::RemoveRecord(int record_id) {
	auto itr = Book.begin();
	while (itr != Book.end()) {
		if ((*itr)->GetId() == record_id) {
			itr = Book.erase(itr);
			break;
		}
		++itr;
	}
};

void AddressBook::DisplayData() {
	cout << "Id \t Name \t Surname" << endl << "------------------------------------------" << endl;
	auto itr = Book.begin();
	while (itr != Book.end()) {
		(*itr)->DisplayDataV1();
		++itr;
	}
};

void AddressBook::DisplayData(int id) {
	auto itr = Book.begin();
	while (itr != Book.end()) {
		if ((*itr)->GetId() == id)
			(*itr)->DisplayData();
		++itr;
	}
};


void AddressBook::WriteToFile() {
	ofstream outfile;
	outfile.open("Baza.dat", ios::binary | ios::out);
	size_t size;
	int num_of_elemnts = Book.size();;
	outfile.write((char*)&num_of_elemnts, sizeof(num_of_elemnts));
	auto itr = Book.begin();
	while (itr != Book.end()) {
		(*itr)->Save(outfile);
		++itr;
	}
	outfile.close();
}

void AddressBook::ReadFromFile() {
	ifstream infile;
	infile.open("Baza.dat", ios::binary | ios::in);

	size_t size;
	int records_count=0;

	infile.read((char*)&records_count, sizeof(records_count));

	Person* P = new Person[records_count];
	for (int i=0; i<records_count; ++i) {
		P[i].Load(infile);
		Book.push_back(&P[i]);
	}
	infile.close();
}

int AddressBook::MaxIndx() {
	int id = 0;
	auto itr = Book.begin();
	while (itr != Book.end()) {
		if ((*itr)->GetId() > id)
			id = (*itr)->GetId();
		++itr;
	}
	return id;
};

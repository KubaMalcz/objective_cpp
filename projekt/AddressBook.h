#pragma once
#include<iostream>
#include<list>
#include"Person.h"

using namespace std;

class AddressBook {
public:
	AddressBook();
	~AddressBook();
	void AddRecord();
	//void RemoveRecord();
	void DisplayData(int id);
	void WriteToFile();
private:
	list<Person> Book;
};
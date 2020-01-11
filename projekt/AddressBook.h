#pragma once

#include<iostream>
#include<list>
#include<fstream>

//#include"DatabaseRecord.h"
#include"Person.h"

using namespace std;

class AddressBook {
public:
	AddressBook();
	~AddressBook();
	void AddRecord();
	void AddRecord(Person P);
	void RemoveRecord(int record_id);
	void DisplayData();
	void DisplayData(int id); //display data for selected record
	void WriteToFile();
	void ReadFromFile();
	int MaxIndx(); //return max index value in DB
private:
	list<Person> Book;
};
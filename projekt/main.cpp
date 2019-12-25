#include<iostream>
#include"Person.h"
#include"AddressBook.h"

using namespace std;


int main() {

	Person P1("Jakub", "Malczenko", "Sochaczew", "Skierniewicka", "96-513", "21B", "2", 759123412);
	P1.DisplayData();
	cout << endl;

	AddressBook B1;
	B1.AddRecord();

	return 0;
}
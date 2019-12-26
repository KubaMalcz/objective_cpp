#include<iostream>
#include"Person.h"
#include"AddressBook.h"

using namespace std;


int main() {

	Person P1("Jakub", "Malczenko", "Sochaczew", "Skierniewicka", "96-513", "21B", "2", "759123412");
	P1.DisplayData();
	cout << endl;

	//AddressBook B1;
	//B1.AddRecord();

	ofstream myfile;
	myfile.open("silly.dat", ios::binary | ios::out);
	P1.Save(myfile);
	myfile.close();

	Person P2;

	ifstream myfile2;
	myfile2.open("silly.dat", ios::binary | ios::in);
	P2.Load(myfile2);
	myfile2.close();

	P2.DisplayData();

	return 0;
}
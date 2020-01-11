#include<iostream>
#include<stdlib.h>
#include<conio.h>

#include"Person.h"
#include"DatabaseRecord.h"
#include"AddressBook.h"
#include"fill_db.h"

using namespace std;


int main() {
	//Create_People();
	
	
	//Reading database from file
	AddressBook B1;
	B1.ReadFromFile();

	//Setting actual index
	Person P1;
	P1.SetIndx(B1.MaxIndx());

	int command = 0;
	int Id_num = 0;

	try {
		while (command != 1) {
			system("cls");
			cout << "######    Adress Book    ######" << endl;
			cout << "1 - exit" << endl;
			cout << "2 - display people in the book" << endl;
			cout << "3 - get detailed information" << endl;
			cout << "4 - add new record" << endl;
			cout << "5 - remove record" << endl;
			cout << "Waiting for command: ";

			cin >> command;
			if (!cin) throw "Unknown";

			switch (command) {
			case 1:
				break;
			case 2:
				system("cls");
				B1.DisplayData();
				system("pause");
				break;
			case 3:
				system("cls");
				cout << "Enter record id: ";
				cin >> Id_num;
				system("cls");
				B1.DisplayData(Id_num);
				system("pause");
				Id_num = 0;
				break;
			case 4:
				system("cls");
				B1.AddRecord();
				break;
			case 5:
				system("cls");
				cout << "Enter record id: ";
				cin >> Id_num;
				cout << "Below record has been deleted: " << endl;
				B1.DisplayData(Id_num);
				B1.RemoveRecord(Id_num);
				system("pause");
				Id_num = 0;
				break;
			default:
				throw command;
			}
		}
	}
	catch (int com) {
		system("cls");
		cout << "Command: '" << com << "' is incorrect. Emergancy exit!" << endl;
		cout << "Database saved.";
	}
	catch (...) {
		system("cls");
		cout << "Incorrect command. Emergancy exit!" << endl;
		cout << "Database saved.";
	}

	//Writing database into file
	B1.WriteToFile();
	

	return 0;
}
#include <iostream>
#include <vector>
#include <list>

using namespace std;


int main()
{
	vector<int> tab;

	int d;
	for (int i = 0; i < 10; ++i) {
		d = rand() % 1000;
		tab.push_back(d);
	}
	cout << tab.size() << endl << endl;
	//tab.insert(tab.end(), d);
	//cout << tab.size() << endl;

	cout << "Lista skladnikow wektora:" << endl;
	vector<int>::iterator   itr;
	for (itr = tab.begin(); itr != tab.end(); ++itr)
		cout << *itr << endl;

	cout << "Lista skladnikow wektora od konca:" << endl;
	vector<int>::reverse_iterator   ritr;
	for (ritr = tab.rbegin(); ritr != tab.rend(); ++ritr)
		cout << *ritr << endl;

	cout << "Rozmiar przed czyszczeniem: " << tab.size() << endl;
	cout << "Tablica pusta: " << tab.empty() << endl;
	tab.clear();
	cout << "Rozmiar po czyszczeniu: " << tab.size() << endl;
	cout << "Tablica pusta: " << tab.empty() << endl;


	//####################################################
	//To samo tylko z lista
	//####################################################
	cout << endl << endl << "Teraz to samo z lista" << endl;
	list<int> lista;

	for (int i = 0; i < 10; ++i) {
		d = rand() % 1000;
		lista.push_back(d);
	}
	cout << lista.size() << endl << endl;
	//tab.insert(tab.end(), d);
	//cout << tab.size() << endl;

	cout << "Lista skladnikow wektora:" << endl;
	list<int>::iterator   itr2;
	for (itr2 = lista.begin(); itr2 != lista.end(); ++itr2)
		cout << *itr2 << endl;

	cout << "Lista skladnikow wektora od konca:" << endl;
	list<int>::reverse_iterator   ritr2;
	for (ritr2 = lista.rbegin(); ritr2 != lista.rend(); ++ritr2)
		cout << *ritr2 << endl;

	cout << "Rozmiar przed czyszczeniem: " << lista.size() << endl;
	cout << "Tablica pusta: " << lista.empty() << endl;
	lista.clear();
	cout << "Rozmiar po czyszczeniu: " << lista.size() << endl;
	cout << "Tablica pusta: " << lista.empty() << endl;

	//####################################################
	//	Zadanie 2
	//####################################################

	cout << endl << endl << "ZADANIE 2" << endl;

	return 0;
}
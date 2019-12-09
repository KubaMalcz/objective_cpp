#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <functional>
#include <ctime>
#include "wektor2d.h"

using namespace std;


int main()
{
	srand(time(0));
	vector<int> tab;

	int d;
	for (int i = 0; i < 10; ++i) {
		d = rand() % 1000;
		tab.push_back(d);
	}
	cout << tab.size() << endl << endl;
	//tab.insert(tab.end(), d);
	//cout << tab.size() << endl;

	//zamiast push_back powinno sie uzywac mplace_back - efekt ten sam ale zasada dzialania sprawia ze jest szybsza

	cout << "Lista skladnikow wektora:" << endl;
	vector<int>::iterator itr;
	for (itr = tab.begin(); itr != tab.end(); ++itr)
		cout << *itr << endl;

	cout << "Lista skladnikow wektora od konca:" << endl;
	vector<int>::reverse_iterator ritr;
	for (ritr = tab.rbegin(); ritr != tab.rend(); ++ritr)
		cout << *ritr << endl;


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
	list<int>::iterator itr2;
	for (itr2 = lista.begin(); itr2 != lista.end(); ++itr2)
		cout << *itr2 << endl;

	cout << "Lista skladnikow wektora od konca:" << endl;
	list<int>::reverse_iterator ritr2;
	for (ritr2 = lista.rbegin(); ritr2 != lista.rend(); ++ritr2)
		cout << *ritr2 << endl;


	

	//####################################################
	//	Zadanie 2
	//####################################################

	cout << endl << endl << "ZADANIE 2" << endl;

	//Tablica typu wektor
	cout << endl << "Posortowana tablica: " << endl;
	sort(tab.begin(), tab.end());
	// Posortuj malej¹co i wydrukuj zawartoœæ tablicy tab:
	vector<int>::iterator itr3;
	for (itr3 = tab.begin(); itr3 != tab.end(); ++itr3)
		cout << *itr3 << endl;
	cout << endl << "Odwrotnie posortowana tablica: " << endl;
	sort(tab.begin(), tab.end(), greater<int>());
	vector<int>::iterator itr4;
	for (itr4 = tab.begin(); itr4 != tab.end(); ++itr4)
		cout << *itr4 << endl;

	//### Lista ###
	cout << endl << "Posortowana lista: " << endl;
	list<int>::iterator itr5;
	lista.sort();
	for (itr5 = lista.begin(); itr5 != lista.end(); ++itr5)
		cout << *itr5 << endl;
	cout << endl << "Odwrotnie posortowana lista: " << endl;
	lista.reverse();
	list<int>::iterator itr6;
	for (itr6 = lista.begin(); itr6 != lista.end(); ++itr6)
		cout << *itr6 << endl;


	int maksymalny = *max_element(tab.begin(), tab.end());
	cout << "Najwiekszy element: " << maksymalny << endl;
	int minimalny = *min_element(tab.begin(), tab.end());
	cout << "Najmniejszy element: " << minimalny << endl;

	// Dla tablicy
	int arr[] = { 100, 200, -100, 300, 400 };
	int result_max = *max_element(arr + 0, arr + 5);
	cout << "Najwiekszy element tablicy: " << result_max << endl;
	int result_min = *min_element(arr + 0, arr + 5);
	cout << "Najmniejszy element tablicy: " << result_min << endl;


	cout << endl << "TABLICA" << endl;
	cout << "Rozmiar przed czyszczeniem: " << tab.size() << endl;
	cout << "Tablica pusta: " << tab.empty() << endl;
	tab.clear();
	cout << "Rozmiar po czyszczeniu: " << tab.size() << endl;
	cout << "Tablica pusta: " << tab.empty() << endl;

	cout << endl << "LISTA" << endl;
	cout << "Rozmiar przed czyszczeniem: " << lista.size() << endl;
	cout << "Tablica pusta: " << lista.empty() << endl;
	lista.clear();
	cout << "Rozmiar po czyszczeniu: " << lista.size() << endl;
	cout << "Tablica pusta: " << lista.empty() << endl;


	//#################
	//ZADANIE 2 Wektory 
	cout << endl << endl << "ZADANIE 2; Na wektorach" << endl;
	
	vector<wektor2d> tab_w;

	wektor2d wekt;
	for (int i = 0; i < 10; ++i) {
		wekt = wektor2d(rand() % 1000, rand() % 1000);
		tab_w.push_back(wekt);
	}

	vector<wektor2d>::iterator itr7;
	for (itr7 = tab_w.begin(); itr7 != tab_w.end(); ++itr7)
		cout << *itr7;
	sort(tab_w.begin(), tab_w.end());
	// Posortuj malej¹co i wydrukuj zawartoœæ tablicy tab:
	cout << endl << "Segregowane rosnaco" << endl;
	vector<wektor2d>::iterator itr8;
	for (itr8 = tab_w.begin(); itr8 != tab_w.end(); ++itr8)
		cout << *itr8;

	return 0;
}
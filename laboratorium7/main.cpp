#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include "Record.h"

//#include "Person.h"

using namespace std;


class Print
{
public:
    void operator() (const Record& rec)
    {
        cout << rec;
    }
};

class Printfile 
{
public:
    ofstream oft;
    Printfile() : oft("record_tab.txt"){}

    /*Printfile(ofstream file) : oft(file) {
    }*/

    void operator() (const Record& rec)
    {
        oft << rec;
    }
};


int main(){
    
    /*
    srand(0);  // initialize random seed

    auto katie = make_shared<Person>("Katie");
    auto john = make_shared<Person>("John");
    auto alice = make_shared<Person>("Alice");

    auto bob = make_shared<Person>("Bob");
    auto another_person_called_bob = std::make_shared<Person>("Bob");

    katie->AddFriend(alice);
    katie->AddFriend(bob);

    john->AddFriend(bob);
    john->AddFriend(bob);  // try to insert duplicate object
    john->AddFriend(another_person_called_bob);  // try to insert duplicate name

    katie->AddFriend(john);  // create a cyclic reference
    john->AddFriend(katie);  // create a cyclic reference

    cout << "----------------------------" << endl;
    katie->PrintFriends();
    john->PrintFriends();
    cout << "----------------------------" << endl;
    return EXIT_SUCCESS;
    */

    vector<Record> record_tab;

    if (1 == 1){
        record_tab.push_back(Record("Nowak"));
        record_tab.push_back(Record("Kowalski"));
        record_tab.push_back(Record("Noman"));
        record_tab.push_back(Record("Najman"));
        record_tab.push_back(Record("Nikolicz"));
        record_tab.push_back(Record("Koper"));
        record_tab.push_back(Record("Adams"));
        record_tab.push_back(Record("Czech"));
        record_tab.push_back(Record("Nowak"));
        record_tab.push_back(Record("Nowak"));
		record_tab.push_back(Record("Primas"));
		record_tab.push_back(Record("Zenon"));
    }

    vector<Record> copy_of_record_tab;
    copy_of_record_tab.resize(record_tab.size());
    copy(record_tab.begin(), record_tab.end(), copy_of_record_tab.begin());

    //Write to consol
    for_each(record_tab.begin(), record_tab.end(), Print());

    //Write lines to file
	Printfile printFile = Printfile();
    for_each(record_tab.begin(), record_tab.end(), printFile);
    
	//ZADANIE 8
	cout << endl << "Zadanie 8" << endl;
	sort(record_tab.begin(), record_tab.end());

	pair<vector<Record>::iterator, vector<Record>::iterator> p1 = equal_range(record_tab.begin(), record_tab.end(), "Nowak");

	for_each(p1.first, p1.second, Print());


	//ZADANIE 9
	cout << endl << "Zadanie 9" << endl;
	vector<Record>::iterator itr1;
	itr1 = lower_bound(record_tab.begin(), record_tab.end(), "N");
	vector<Record>::iterator itr2;
	itr2 = lower_bound(record_tab.begin(), record_tab.end(), "O");

	for_each(itr1, itr2, Print());


	return 0;
}
#pragma once

#include<iostream>
#include<fstream>

using namespace std;

class DatabaseRecord {
public:
	virtual ~DatabaseRecord();
	virtual void DisplayData() {};
	virtual void DisplayDataV1() {};	// Display only Id name and surname
	int GetId();
	virtual void Save(ofstream& of) {};
	virtual void Load(ifstream& inf) {};
	void SetIndx(const int& new_value);
	void SetId(const int& new_value);

	bool operator == (const int& Idik);
private:
	int static indx;
	int Id = indx + 1;
};

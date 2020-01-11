#pragma once

#include<iostream>
#include<fstream>

using namespace std;

class DatabaseRecord {
public:
	virtual ~DatabaseRecord();
	virtual void DisplayData() = 0;
	virtual void DisplayDataV1() = 0;	// Display only Id name and surname
	virtual int GetId() = 0;
	virtual void Save(ofstream& of) = 0;
	virtual void Load(ifstream& inf) = 0;
	void SetIndx(const int& new_value);
	void SetId(const int& new_value);

	bool operator == (const int& Idik);
private:
	int static indx;
	int Id = indx + 1;
};

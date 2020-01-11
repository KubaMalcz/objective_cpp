#pragma once

#include<iostream>
#include<fstream>

#include"DatabaseRecord.h"

using namespace std;

DatabaseRecord::~DatabaseRecord() {};

int DatabaseRecord::GetId() {
	return Id;
};

void DatabaseRecord::SetIndx(const int& new_value) {
	indx = new_value;
};

void DatabaseRecord::SetId(const int& new_value) {
	Id = new_value;
};

bool DatabaseRecord::operator == (const int& Idik) {
	if (Idik == Id)
	{
		return true;
	}
};

int DatabaseRecord::indx = 0;

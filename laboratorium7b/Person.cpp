#include <memory>
#include <iostream>
#include <map>
#include <algorithm>
#include "Person.h"

using namespace std;

Person::Person(string _name) {
	cout << _name << " (uuid:" << uuid << ") created" << endl;
	name = _name;
};

Person::~Person() {
	cout << name << " (uuid:" << uuid << ") died" << endl;
};

void Person::AddFriend(shared_ptr<Person>& p) {
	auto ptr = friends.insert(pair<int, shared_ptr<Person>&>(p->uuid, p));
	if (!ptr.second) 
		cout << "Person with uuid " << p->uuid << " and name " << p->name << " is already a friend of " << name << endl;
};


void Person::PrintFriends() {
	cout << name << " has following friends" << endl;
	for (auto& _friend : friends) {
		if (auto sptr = _friend.second.lock()) {
			cout << "	" << sptr->name << " (uuid: " << sptr -> uuid << ")" << endl;
		}
		else
		{
			cout << "Unable to reach uuid: " << _friend.first << endl;
		}
	}
};

void Person::ClearUnreachableFriends() {
	auto itr = friends.begin();
	while (itr != friends.end()) {
		if (!itr->second.lock()) {
			itr = friends.erase(itr);
		}
		else
		{
			++itr;
		}
	}
};
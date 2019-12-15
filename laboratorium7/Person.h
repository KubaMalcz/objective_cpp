#pragma once;
#include <memory>
#include <iostream>
#include <map>

using namespace std;
/*
class Person
{
    string m_name;
    const int uuid; // for simplicity an int is used instead boost::uuid
    map< int, weak_ptr<Person> > m_friends;

public:
    explicit Person(string name); // for simplicity use rand() instead of instead boost::uuid to initialize the uuid
    ~Person();
    void AddFriend(shared_ptr<Person> &p);
    void PrintFriends();
};
*/
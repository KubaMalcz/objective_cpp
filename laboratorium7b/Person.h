#include <memory>
#include <iostream>
#include <map>

using namespace std;

class Person
{
    string name;
    const int uuid = rand(); // for simplicity an int is used instead boost::uuid
    map< int, weak_ptr<Person> > friends;
public:
    explicit Person(string _name); // for simplicity use rand() instead of instead boost::uuid to initialize the uuid
    ~Person();
    void AddFriend(shared_ptr<Person> &p);
    void PrintFriends();
	void ClearUnreachableFriends();
};

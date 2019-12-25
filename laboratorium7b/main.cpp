#include <iostream>
#include "Person.h"

using namespace std;


int main()
{
	srand(0);  // initialize random seed

	auto katie = make_shared<Person>("Katie");
	auto john = make_shared<Person>("John");
	auto alice = make_shared<Person>("Alice");
	
	auto bob = make_shared<Person>("Bob");
	auto another_person_called_bob = make_shared<Person>("Bob");

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
	
	//######### MORE PRACTISE #########
	cout << "-----------------------------------------" << endl;
	{
		auto thomas = make_shared<Person>("Thomas");
		john->AddFriend(thomas);
		john->PrintFriends();
	} // thomas died when he went out of scope
	john->PrintFriends();
	john->ClearUnreachableFriends();
	john->PrintFriends();
	cout << "-----------------------------------------" << endl;

	return EXIT_SUCCESS;
	
}
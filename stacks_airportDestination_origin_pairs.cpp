
#include <iostream>
#include <string>
#include <stack>
#include <list>



using namespace std;

const int AIRPORT_COUNT = 12;
string airports[AIRPORT_COUNT] = { "DAL","ABQ","DEN","MSY","HOU","SAT","CRP","MID","OKC","OMA","MDW","TUS" };

int main()
{
	// define stack (or queue ) here
	stack<string, list<string>> iStack; // definition of a stack of strings implemented as a list


	string origin;
	string dest;
	string citypair;

	int destination = 0;
	int current = 0;
	int pushCount = 0;
	int popCount = 0;

	cout << "Loading the CONTAINER ..." << endl;
	//TODO LOAD THE STACK ( or queue) HERE
	// Create all the possible Airport combinations that could exist from the list provided.
	// i.e  DALABQ, DALDEN, ...., ABQDAL, ABQDEN ...
	// DO NOT Load SameSame - DALDAL, ABQABQ, etc ..
	
	while (current < AIRPORT_COUNT) 
	{
		while (destination < AIRPORT_COUNT)
		{
			if (current == destination) // if current and destination have the same index
			{
				destination++; // skip that destination to avoid duplicate
				continue;
			}
			origin = airports[current]; // get origin
			dest = airports[destination]; // get destination
			citypair = origin + dest; // concatenate two strings
			
			//if (current < AIRPORT_COUNT && destination < AIRPORT_COUNT)
			{
				// push citypair onto the stack
				cout << "Pushing " << citypair << endl;
				iStack.push(citypair);
				destination++;
				pushCount++;
			}
		}
		destination = 0;
		current++;
	}
	

	cout << "Getting data from the CONTAINER ..." << endl;
	//TODO Retrieve data from the STACK/QUEUE here 	
	while (! iStack.empty()) // while number of elements popped off is less than or equal to number of elements pushed.
	{
		cout << "Popping " << iStack.top() << endl; // displaying top of the stack
		iStack.pop(); // popping off top of stack one at a time.
		popCount++;
	}

	cout << "Popped : " << popCount << endl;
	cout << "Pushed : " << pushCount << endl;
	return 0;
}

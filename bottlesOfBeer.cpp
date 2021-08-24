#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int numberOfBeers;

int main()
{
	cout << "Please enter the number of beers on the wall you would like to start from"<< endl; // gets numberOfBeers
	cout << "The number you enter must be within a range from 1-100"<< endl; // gives specs for entered number

	cin >> numberOfBeers; // stores number entered as numberOfBeers

	while (numberOfBeers <= 0 || numberOfBeers > 100)
	{
		cout << "The number of beers you entered does not follow the directions." << endl;
		cout << "Please enter the number of beers on the wall you would like to start from" << endl; // gets numberOfBeers
		cout << "The number you enter must be within a range from 1-100" << endl; // gives specs for entered number

		cin >> numberOfBeers;
	}


	cout << "The number of beers you wish to start with is " << numberOfBeers << endl; // displays numberOfBeers

	while (numberOfBeers > 2)
	{
		cout << numberOfBeers << " bottles of beer on the wall." << numberOfBeers << " bottles of beer. Take 1" << endl;
		cout << "down, pass it around." << (numberOfBeers -= 1) << " bottles of beer on the wall."<< endl;
	}

	while (numberOfBeers == 2)
	{
		cout << numberOfBeers << " bottles of beer on the wall." << numberOfBeers << " bottles of beer. Take 1" << endl;
		cout << "down, pass it around." << (numberOfBeers -= 1) << " bottle of beer on the wall." << endl;
	}

	while (numberOfBeers == 1)
	{
		cout << numberOfBeers << " bottle of beer on the wall." << numberOfBeers << " bottle of beer. Take 1" << endl;
		cout << "down, pass it around." << (numberOfBeers -= 1) << " bottles of beer on the wall." << endl;
	}

	return 0;
}

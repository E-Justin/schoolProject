
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdbool>

using namespace std;

int numberOfBeers;
bool status;

string prompt = "Please enter the number of beers on the wall you would like to start from"; // prompts user to enter what number they would like to start the song from
string parameters = "The number you enter must be within a range from 1-100"; // specific directions for the range of numbers to be entered

string lyrics1 = " bottles of beer on the wall "; // plural (bottles)
string lyrics2 = " bottles of beer. Take 1 "; // plural (bottles)
string lyrics3 = " down, pass it around. "; 
string lyrics1Singular = " bottle of beer on the wall "; // singular (bottle)
string lyrics2Singular = " bottle of beer. Take 1 "; // singular (bottle)

string noFollowDirections = "The number of beers you entered does not follow the directions."; // for when the user does not follow the directions


bool bottlesOfBeerOutput(int x)
{
	

	while (x <= 0 || x > 100) // as long as x fits the given parameters in the directions
	{
		cout << noFollowDirections << endl; // lets user know they did not follow the directions
		cout << prompt << endl; // re prompts user
		cout << parameters << endl; // gives parameters again

		cin >> x; 

		status = false;

	}

	while (x > 2) // all bottles are plural because there are at least 2 bottles in each line
	{
		cout << x << lyrics1 << x << lyrics2 << endl;
		cout << lyrics3 << (x -= 1) << lyrics1 << endl; // x is decremented by 1 in the last line

		if (x == 2) // singular (bottle) in last line because there is only one left.
		{
			cout << x << lyrics1 << x << lyrics2 << endl;
			cout << lyrics3 << (x -= 1) << lyrics1Singular << endl; // x is decremented by 1 in the last line

			if (x == 1)// singular (bottle) in first line, plural (bottles) in second
			{
				cout << x << lyrics1Singular << x << lyrics2Singular << endl;
				cout << lyrics3 << (x -= 1) << lyrics1 << endl; // x is decremented by 1 in the last line

				status = true;
			}
		}
	}

	return status;
}

int main()
{

	while (status != true) // loop runs until method runs successfully
	{
		cout << prompt << endl; // first prompt to user
		cout << parameters << endl; // gives directions

		cin >> numberOfBeers; // stores user input

		bottlesOfBeerOutput(numberOfBeers); // method call
	}
	
	

	return 0;

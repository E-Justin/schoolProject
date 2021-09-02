
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdbool>

using namespace std;


/* A lottery ticket buyer purchases 10 tickets a week, always playing the same 10 five-digit “lucky” numbers.Write a program that initializes 
an array or a vector with the lucky numbers and then lets the player enter this week’s winning five-digit number. The program should perform 
a linear search through the list of the player’s numbers and report whether or not one of the tickets is a winner this week. (See the sample 
runs below for examples of the expected output when the user enters a winning or a losing number.) */

int thisWeeksNumbers;
int luckyNumbers[] = {13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121 };

int main()
{
	int thisWeeksNumbers;
	int luckyNumbers[] = { 13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121 };

	cout << "Enter this week's 5-digit winning lottery number:" << endl;
	cin >> thisWeeksNumbers;

	bool found = false;
	int i = 0;
	while (i < (sizeof(luckyNumbers) - 1) && found == false)
	{
		if (luckyNumbers[i] == thisWeeksNumbers)
		{
			found = true;
			cout << "You have a winning ticket. " << endl;
			break;
		}
		i++;
	}
	if (found == false)
	{
		cout << "You did not win this week. " << endl;
	}
	


	return 0;
}

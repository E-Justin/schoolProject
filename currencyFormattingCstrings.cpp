

// justin.ezell059@my.tccd.edu
// Assignment 3
// August 25, 2021
// Programming fundamentals II
// COSC-1437-86003

#include <iomanip>  // input/ output library
#include <string> // to use strings
#include <iostream> // cin and cout..
#include <cstdlib>
#include <cstring>
using namespace std;





int dp; // global variable to hold value to represent decimal


int dollarFormat(string x) // used to find the decimal point
{


	dp = x.find('.'); // find decimal point



	if (dp == -1) // if there is no decimal point entered by the user
	{

		return dp;
	}

	return dp;

}





int main()
{

	char input[15];
	char moneySign[15] = "$"; // hold $ to concatenate input at the end.
	char decimalPoints[17]; // will hold decimal and all digits to the right
	char front[15]; // will hold all characters to the left of the decimal
	char* strPtr = nullptr; // = nullPtr unless a decimal is found


	cout << "Please enter a dollar amount between 0 and 999.99999. " << endl;
	cin >> input;




	dollarFormat(input); // if dp = -1: no decimal

	
	if (dp == -1) // if no decimal
	{
		strcat_s(input, ".00"); // concatenates the decimal and trailing zeros for currency format
	}
	else // if there is a decimal
	{
		
		strPtr = strstr(input, "."); // gets the decimal and everything to the right of the decimal and stores it in strPtr

		if (strPtr != nullptr)
		{

			for (int j = 0; j < 3; j++)																												// this loop may need to go
			{
				strcpy_s(decimalPoints, strPtr); // builds new string with the decimal and only two digits to the right of the decimal.

			}
			if (strlen(strPtr) == 2) // if there is only one number to the right of the decimal
			{
				strcat_s(decimalPoints, "0");
			}
			if (strlen(strPtr) == 1) // if there is a decimal, but no numbers to the right
			{
				strcat_s(decimalPoints, "00");
			}
			if (strlen(strPtr) > 2) // if there are more than 2 digits to the right of the dceimal
			{
				strncpy_s(decimalPoints, strPtr, 3); // copies the first 3 characters of strPtr into decimalPoints

			}
		}

		for (int j = 0; j < dp; j++)
		{
			front[j] = input[j]; // builds new c-string for numbers before the decimal
		}

	}

	if (dp == -1) // if no decimal in input
	{
		strcat_s(moneySign, input);
		cout << moneySign;
	}

	if (dp != -1) // if there is a decimal in input
	{
		cout << "Beginning : " << front << endl;
		cout << "End : " << decimalPoints << endl;

		strcat_s(front, decimalPoints); // concatenates the two strings together, concatenated string is stored in 'front' variable;
		strcat_s(moneySign, front);

		cout << "new string with correct format = " << moneySign;

	}







	return 0;
}

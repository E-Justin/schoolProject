/* Write a method that will have a C++ string passed to it. The string will be an email address and the method will return a bool to indicate that the email address is valid.
Email Validation Rules: ( These rules are not official.)

No whitespace allowed
1 and only 1 @ symbol
Must not start with the @ symbol
At least 1 period after the @ symbol.
Must not start with a period after the @ symbol

Program will prompt for an email address and report if it is valid or not according to the rules posted above. The program will loop and prompt me to continue. */

#include <iomanip>  // input/ output library
#include <string> // to use strings
#include <iostream> // cin and cout..
#include <cstring>
#include <cctype>
using namespace std;

bool validated;


bool emailValidation(string x)
{
	int atSignIndex;
	int length;
	length = x.length();
	
		
	
		
		if (x == "x" || x == "X")
		{
			validated = false;
			return validated;
		}
		if (x.find(" ") < length) // testing for whitespace	
		{
			cout << "***ERROR***" << endl;
			cout << "Your email should not contain whitespace." << endl;
			validated = false;
		}
		if (x.find("@") < length) // testing for first @							
		{
			atSignIndex = x.find("@");
			if (x.find("@", (atSignIndex + 1)) < length) // testing for second @
			{
				cout << "***ERROR***" << endl;
				cout << "Your email cannot contain more than 1 @ " << endl;
				validated = false;
			}
		}
		if (x.find("@") > length) // testing for @ at the beginning of email				// works
		{
			cout << "***ERROR***" << endl;
			cout << "Your email cannot being with @" << endl;
			validated = false;

		}
		if (x.find("@") < length) // finding first @							
		{
			atSignIndex = x.find("@"); // gets index of the @ symbol
			if (x.find(".", atSignIndex + 1) < length) // looks for period after the index of the @
			{
				validated = true; // if at least one period was found after the @
			}
			else
			{
				validated = false; // if there is not at least one period after the @ symbol
				cout << "***ERROR***" << endl;
				cout << "You need a period somewhere after the @ sign " << endl;
			}
		}
		else
		{
			validated = true; // returns true if all tests are passed

		}

		if (validated == true)
		{
			cout << "Your email is valid " << endl;
		}
		else
		{
			cout << "Your email is invalid " << endl;
		}
	
		return validated;
	
}

int main()
{
	string input;

	while (input != "x" && input != "X")
	{
		cout << "Enter an email or press X to exit " << endl;
		getline(cin, input); // gets full line of input (including space if there is one)
		emailValidation(input);
	}

	return 0;
}

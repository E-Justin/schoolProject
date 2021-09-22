
#include <iomanip>  // input/ output library
#include <string> // to use strings
#include <iostream> // cin and cout..

using namespace std;

const int SIZE = 2;
char userInput[SIZE];
char originalInput;



char menu[] = "1. Buy \n2. Sell \n3. Convert \nX. Exit \n";
char validCharacters[] = "123X";

char prompt[] = "Please select a character from the menu ";
char incorrectInput[] = "You did not entere a matching character from the menu ";

char promptForInput(char x[], char validate[])
{
	const char SZ = 2;
	char y[SZ];
	
	cout << prompt << endl;
	cout << menu << endl;
	cin >> y;
	originalInput = y[0];
	y[0] = towupper(y[0]); // changes input to uppercase
	
	
	while (originalInput != 'x' && originalInput != 'X')
	{
		while (strstr(validCharacters, y) == nullptr ) // if user input is not found in the list of valid charactersde
		{
			cout << "The character : " << y << " is not part of the valid characters in the menu " << endl;
			cout << "Please enter a valid character from the menu " << endl;
			cout << "The valid characters are : " << validCharacters << endl;
			cout << prompt << endl;
			cout << menu << endl;
			cin >> y;
			originalInput = y[0];
			y[0] = towupper(y[0]); // changes input to uppercase

		}
		if (strstr(validCharacters, y) != nullptr && originalInput != 'x' && originalInput != 'X') // if user input is a valid character that is not x or X
		{
			cout << prompt << endl;
			cout << menu << endl;
			cin >> y;
			originalInput = y[0];
			
		}
	}

	

	return originalInput;
	
}

int main()
{
	
	promptForInput(menu, validCharacters);
	cout << originalInput;

	return 0;
}



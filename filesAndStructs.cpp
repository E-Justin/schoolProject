
#include <fstream>
#include <iomanip>  // input/ output library
#include <string> // to use strings
#include <iostream> // cin and cout..
#include <cstring>
#include <cctype>
#include <cstdlib>

using namespace std;

int custNum; // to hold largest customer number

const int NAME_SIZE = 20;
const int STREET_SIZE = 30;
const int CITY_SIZE = 20;
const int STATE_CODE_SIZE = 3;

struct Customers
{
	long customerNumber = 0;			// this should increase by 1 for each record written
	char name[NAME_SIZE];
	char streetAddress_1[STREET_SIZE];
	char streetAddress_2[STREET_SIZE];
	char city[CITY_SIZE];
	char state[STATE_CODE_SIZE];
	int zipCode;
	char isDeleted = 'N';
	char newLine = '\n';
};

Customers InputStruct;

int getLargestCustomerNumber(fstream& file)
{
	file.close();
	file.open("Customers.dat", ios::in); // opens file in read mode	


	file.read(reinterpret_cast<char*>(&InputStruct), sizeof(InputStruct)); // read the first record from the file.

	while (!file.eof()) // while not eof, 
	{
		custNum = InputStruct.customerNumber;
		file.read(reinterpret_cast<char*>(&InputStruct), sizeof(InputStruct)); // read the first record from the file.
	}

	cout << "The largest customer number is : " << custNum << endl;
	file.close(); // close file.

	return custNum;

}

Customers selection1Input(Customers& UserStruct, fstream &file) // method used to allow user to input data into a structure
{
	

	cout << "Please enter your name. ";
	cin.getline(UserStruct.name, NAME_SIZE);

	cout << "Please enter your street address_1 ";
	cin.getline(UserStruct.streetAddress_1, STREET_SIZE);

	cout << "Please enter your street address_2 ";
	cin.getline(UserStruct.streetAddress_2, STREET_SIZE);

	cout << "Please enter your city ";
	cin.getline(UserStruct.city, CITY_SIZE);

	cout << "Please enter your state code / abreviation ";
	cin.getline(UserStruct.state, STATE_CODE_SIZE);

	cout << "Please enter your zip code ";
	cin >> UserStruct.zipCode;

	
	


	return UserStruct;
}

// function will open file, read/ display contents of file in a table, then close file when eof is reached.
void displayFileContents(fstream& file)
{
	char again;
	file.open("Customers.dat", ios::in); // opens file in read mode	
	file.read(reinterpret_cast<char*>(&InputStruct), sizeof(InputStruct)); // read the first record from the file.

	while (!file.eof()) // while not eof, display structure
	{
		cout << "Customer NUmber  : " << InputStruct.customerNumber << endl;
		cout << "Name             : " << InputStruct.name << endl;
		cout << "Street Address 1 : " << InputStruct.streetAddress_1 << endl;
		cout << "Street Address 2 : " << InputStruct.streetAddress_1 << endl;
		cout << "City             : " << InputStruct.city << endl;
		cout << "State            : " << InputStruct.state << endl;
		cout << "Zip Code         : " << InputStruct.zipCode << endl;

		cout << "\nPress the Enter key to see the next record.\n";
		cin.get(again);

		file.read(reinterpret_cast<char*>(&InputStruct), sizeof(InputStruct)); // read the first record from the file.

	}
	cout << "No more data in the file " << endl;
	file.close(); // close file.
	return;
}


void menu(fstream& file) // method used to display and use menu
{

	char input = '0';
	int count = 0;

	while (input != 'x' && input != 'X')
	{
		input = '0';
		cout << endl << "~~~~~~~~~~ Menu ~~~~~~~~~~" << endl;
		cout << "1.  Add Data " << endl;								// done
		cout << "2. Update Data " << endl;
		cout << "3. Display all data " << endl;							// done
		cout << "X.  Exit Program ";									// done
		cin >> input;
		cin.ignore();


		if (input != '1' && input != 'x' && input != 'X' && input != '2' && input != '3')
		{
			cout << endl << "***** ERROR ***** " << endl;
			cout << "Invalid Choice " << endl << endl;

		}
		if (input == '1')
		{
			selection1Input(InputStruct, file);
			file.write(reinterpret_cast<char*>(&InputStruct), sizeof(InputStruct));
			InputStruct.customerNumber += 1;
		}
		if (input == '2')
		{
			cout << "What is the customer number that you wish to update? ";
			cin >> InputStruct.customerNumber;
			cout << "Please enter street address 1 ";
			cin.getline(InputStruct.streetAddress_1, STREET_SIZE);
			cout << "Please enter street address 2 ";
			cin.getline(InputStruct.streetAddress_2, STREET_SIZE);
		}
		if (input == '3')
		{
			file.close();
			displayFileContents(file);
		}
		
	}
	if (input == 'x' || input == 'X')
	{
		file.close();
		cout << "Done!" << endl;

	}


	return;
}

int main()
{



	fstream file("Customers.dat");
	file.open("Customers.dat", ios::in |ios::app | ios::binary); // opens file to read and write (append) in binary mode


	if (file.is_open()) // if file opened successfully
	{
		cout << "File opened/ created successfully " << endl;
		

	}
	else // if file failed to open
	{
		cout << "Error opening/ creating the file " << endl;
	}
	

	getLargestCustomerNumber(file);

	menu(file);


	file.close();

	return 0;
}

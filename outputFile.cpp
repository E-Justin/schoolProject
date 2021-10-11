#include <fstream>
#include <iomanip>  // input/ output library
#include <string> // to use strings
#include <iostream> // cin and cout..
#include <cstring>
#include <cctype>
#include <cstdlib>

using namespace std;

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
	char isDeleted ='N';
	char newLine = '\n';
};

Customers InputStruct;

Customers selection1Input(Customers& UserStruct) // method used to allow user to input data into a structure
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

void selection1Output(Customers& UserStruct) // method used to display the information inputted into the structure by the user.
{
	cout << "Name : " << UserStruct.name << endl;
	cout << "Address_1 : " << UserStruct.streetAddress_1 << endl;
	cout << "Address_2 : " << UserStruct.streetAddress_2 << endl;
	cout << "City : " << UserStruct.city << endl;
	cout << "State : " << UserStruct.state << endl;
	cout << "Zip code: " << UserStruct.zipCode << endl;
}
	

void menu(fstream &file) // method used to display and use menu
{

	char input = '0';
	int count = 0;

	while (input != 'x' && input != 'X')
	{
		input = '0';
		cout << endl << "~~~~~~~~~~ Menu ~~~~~~~~~~" << endl;
		cout << "1.  Add Data " << endl;
		cout << "X.  Exit Program ";
		cin >> input;
		cin.ignore();
		

		if (input != '1' && input != 'x' && input != 'X')
		{
			cout << endl <<  "***** ERROR ***** " << endl;
			cout << "Invalid Choice " << endl << endl;

		}
		if (input == '1')
		{
			selection1Input(InputStruct);
			file.write(reinterpret_cast<char*>(&InputStruct), sizeof(InputStruct));
			InputStruct.customerNumber += 1;
		}
		
		count++;
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
	file.open("Customers.dat", ios::out | ios::binary); // opens file in output mode
	cout << "Opening/ creating file if it does not already exist... " << endl;

	if (file.is_open()) // if file opened successfully
	{
		cout << "File opened/ created successfully " << endl;
		menu(file);
		
	}
	else // if file failed to open
	{
		cout << "Error opening/ creating the file " << endl;
	}

	
	
	


	return 0;
}

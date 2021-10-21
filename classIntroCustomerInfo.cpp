
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

class Customer
{
private:
	long customerNumber = 1;
	char name[NAME_SIZE];
	char streetAddress_1[STREET_SIZE];
	char streetAddress_2[STREET_SIZE];
	char city[CITY_SIZE];
	char stateCode[STATE_CODE_SIZE];
	int zipCode;
	char isDeleted = 'N';
	char newLine = '\n';

public:
	//Customer(); // constructor
	//void setCustNum(long);
	bool setName(char[NAME_SIZE]);
	bool setStreetAddress_1(char[STREET_SIZE]);
	bool setStreetAddress_2(char[STREET_SIZE]);
	bool setCity(char[CITY_SIZE]);
	bool setState(char[STATE_CODE_SIZE]);
	bool setZip(int);

	long getCustNum();
	char* getName();
	char* getStreetAddress_1();
	char* getStreetAddress_2();
	char* getCity();
	char* getState();
	int getZip();

};

Customer customer1; // defining/ instantiation of an instance of the Customer class

bool Customer::setName(char n[]) // validates customer name and if it passes, it gets assigned to the name object
{
	int length;
	bool validated;

	length = strlen(n);
	if (length > 0 && length < NAME_SIZE) // if the length of the argument matches the size parameter
	{
		strcpy_s(name, n); // copies argument to name object
		validated = true;
	}
	else
	{
		validated = false;
	}
	return validated;
}

bool Customer::setStreetAddress_1(char add1[])
{
	int length;
	bool validated;

	length = strlen(add1);
	if (length > 0 && length < STREET_SIZE) // if the length of the argument matches the size parameter
	{
		strcpy_s(streetAddress_1, add1); // copies argument to address 1 object
		validated = true;
	}
	else
	{
		validated = false;
	}
	return validated;
}

bool Customer::setStreetAddress_2(char add2[])
{
	int length;
	bool validated;

	length = strlen(add2);
	if (length > 0 && length < STREET_SIZE) // if the length of the argument matches the size parameter
	{
		strcpy_s(streetAddress_2, add2); // copies argument to address 2 object
		validated = true;
	}
	else
	{
		validated = false;
	}
	return validated;
}

bool Customer::setCity(char c[])
{
	int length;
	bool validated;

	length = strlen(c);
	if (length > 0 && length < CITY_SIZE) // if the length of the argument matches the size parameter
	{
		c[0] -= 32;
		strcpy_s(city, c); // copies argument to city object
		validated = true;
	}
	else
	{
		
		validated = false;
	}
	return validated;
}

bool Customer::setState(char state[])
{
	int length;
	bool validated;

	length = strlen(state);
	if (length > 0 && length < STATE_CODE_SIZE) // if the length of the argument matches the size parameter
	{
		state[0] -= 32;
		state[1] -= 32;
		strcpy_s(stateCode, state); // copies argument to city object
		validated = true;
	}
	else
	{
		
		validated = false;
	}
	
	return validated;
}

bool Customer::setZip(int zip)
{
	bool validated;
	if (zip > 0 && zip < 99999) // if the length of the argument matches the size parameter
	{
		zipCode = zip; // copies argument to zipCode object
		validated = true;
	}
	else
	{
		validated = false;
	}
	return validated;
}

char* Customer::getName()
{

	return name;
}

long Customer::getCustNum()
{
	return customerNumber;
}

char* Customer::getStreetAddress_1()
{
	return streetAddress_1;
}

char* Customer::getStreetAddress_2()
{
	return streetAddress_2;
}

char* Customer::getCity()
{
	return city;
}

int Customer::getZip()
{
	return zipCode;
}

char* Customer::getState()
{
	return stateCode;
}


int main()
{
	bool isOK;
	char yourName[35];
	char add1[45];
	char add2[45];
	char city[30];
	char st[5];
	int zip;

	cout << "Customer Number : " << customer1.getCustNum() << endl;

	// ~~~~~~~ begin getting customer name					

	int count = 0;
	do
	{
		cout << "Enter the customer's name (must be less than 20 characters) ";
		if (count > 0) // does not ignore/ clear the for the first attempt
		{

			cin.clear(); // resets the error flag if a newline was not found
			cin.ignore(256, '\n'); // clears out the next 256 chars up to a newline

		}
		cin.getline(yourName, 35);
		isOK = customer1.setName(yourName);
		count++;
	} while (isOK == false);


	cout << "Customer name : " << customer1.getName() << endl;

	// ~~~~~~~ end getting customer name

	// ~~~~~~~ begin getting street address 1					

	count = 0;
	do
	{
		cout << "Enter the customer's address 1 (must be less than 30 characters) ";
		if (count > 0) // does not ignore/ clear the for the first attempt
		{
			cin.clear(); // resets the error flag if a newline was not found
			cin.ignore(256, '\n'); // clears out the next 256 chars up to a newline

		}
		cin.getline(add1, 45);
		isOK = customer1.setStreetAddress_1(add1);
		count++;
	} while (isOK == false);


	cout << "Customer address 1 : " << customer1.getStreetAddress_1() << endl;

	// ~~~~~~~ end getting street address 1

	// ~~~~~~~ begin getting street address 2					

	count = 0;
	do
	{
		cout << "Enter the customer's address 2 (must be less than 30 characters) ";
		if (count > 0) // does not ignore/ clear the for the first attempt
		{
			cin.clear(); // resets the error flag if a newline was not found
			cin.ignore(256, '\n'); // clears out the next 256 chars up to a newline

		}
		cin.getline(add2, 45);
		isOK = customer1.setStreetAddress_2(add2);
		count++;
	} while (isOK == false);


	cout << "Customer address 2 : " << customer1.getStreetAddress_2() << endl;

	// ~~~~~~~ end getting street address 2

	// ~~~~~~~ begin getting city					

	count = 0;
	do
	{
		cout << "Enter the customer's city (must be less than 20 characters) ";
		if (count > 0) // does not ignore/ clear the for the first attempt
		{
			cin.clear(); // resets the error flag if a newline was not found
			cin.ignore(256, '\n'); // clears out the next 256 chars up to a newline

		}
		cin.getline(city, 45);
		isOK = customer1.setCity(city);
		count++;
	} while (isOK == false);

	
	cout << "Customer city : " << customer1.getCity() << endl;

	// ~~~~~~~ end getting street city

	// ~~~~~~~ begin getting state					

	count = 0;
	do
	{
		cout << "Enter the customer's state code (must be 2 characters) ";
		if (count > 0) // does not ignore/ clear the for the first attempt
		{
			cin.clear(); // resets the error flag if a newline was not found
			cin.ignore(256, '\n'); // clears out the next 256 chars up to a newline

		}
		cin.getline(st , 45);
		isOK = customer1.setState(st);
		count++;
	} while (isOK == false);


	cout << "Customer state : " << customer1.getState() << endl;

	// ~~~~~~~ end getting street state

	// ~~~~~~~ begin getting zip code				

	count = 0;
	do
	{
		cout << "Enter the customer's zip code (must be between 0 and 99999) ";
		if (count > 0) // does not ignore/ clear the for the first attempt
		{
			cin.clear(); // resets the error flag if a newline was not found
			cin.ignore(256, '\n'); // clears out the next 256 chars up to a newline

		}
		cin >> zip;
		isOK = customer1.setZip(zip);
		count++;
	} while (isOK == false);


	cout << "Customer zip code : " << customer1.getZip() << endl;

	// ~~~~~~~ end getting zip code

	return 0;
}

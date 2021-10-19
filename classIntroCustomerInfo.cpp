
#include <iomanip>  // input/ output library
#include <string> // to use strings
#include <iostream> // cin and cout..
#include <cstring>
#include <cctype>
#include <cstdlib>
#include <memory> // to use smart pointers
using namespace std;

const int NAME_SIZE = 20;
const int STREET_SIZE = 30;
const int CITY_SIZE = 20;
const int STATE_CODE_SIZE = 3;

bool nameValidated; // to hold t/f if name was validated or not
bool address1Validated;
class Customer
{
private:
	long customerNumber = 1;
	char name[NAME_SIZE];
	char streetAddress_1[STREET_SIZE];
	char streetAddress_2[STREET_SIZE];
	char city[CITY_SIZE];
	int zipCode;
	char isDeleted = 'N';
	char newLine = '\n';

public:
	//Customer(); // constructor
	void setCustNum(long);
	bool setName(char[NAME_SIZE]);
	bool setStreetAddress_1(char[STREET_SIZE]);
	//void setStreetAddress_2(char[STREET_SIZE]);
	//void setCity(char[CITY_SIZE]);
	//void setZip(int);

	long getCustNum();
	char* getName();
	char* getStreetAddress_1();
	//char getStreetAddress_2() const;
	//char getCity() const;
	//int getZip() const;

};

Customer customer1; // defining/ instantiation of an instance of the Customer class

void Customer::setCustNum(long num)
{
	customerNumber = num;
}

bool Customer::setName(char n[]) // validates customer name and if it passes, it gets assigned to the name object
{
	int length;
	length = strlen(n);
	if (length > 0 && length < 20) // if the length of the argument matches the size parameter
	{
		strcpy_s(name, n); // copies argument to name object
		nameValidated = true;
	}
	else
	{
		nameValidated = false;
	}
	return nameValidated;
}

bool Customer::setStreetAddress_1(char address[]) // STREET_SIZE = 30
{
	int length;
	length = strlen(address);
	if (length > 0 && length < 30) // if the length of the argment matches the size parameter
	{
		strcpy_s(streetAddress_1, address); // copies argument to streetAddress_1 object
		address1Validated = true;
	}
	else
	{
		address1Validated = false;
	}


	return address1Validated;
}

long Customer::getCustNum()
{
	return customerNumber;
}

char* Customer::getName()
{
	
	return name;
}

char* Customer::getStreetAddress_1()
{
	return streetAddress_1;
}

int main()
{
	long custNum;								//~~~~~~~~ begin getting customer number
	cout << "Please enter the customer number ";
	cin >> custNum;
	customer1.setCustNum(custNum);
	cout << "Customer number is " << customer1.getCustNum() << endl; // ~~~ end getting customer number
	
	char yourName[25];							// ~~~~~~~ begin getting customer name					
	cout << "Enter the customer's name ";
	cin.ignore();
	cin.getline(yourName, 25);
	customer1.setName(yourName);

	while (nameValidated == false)
	{
		cout << "***ERROR***" << endl;
		cout << "Enter the customer's name ";
		cin.getline(yourName, NAME_SIZE);
		customer1.setName(yourName);
	}
	if (nameValidated == true)
	{
		customer1.setName(yourName);
		cout << "Customer name is " << customer1.getName() << endl;
	}											// ~~~~~~~~~~ end getting customer name

	char address1[35];							// ~~~~~~~ begin getting streetAddress_1					
	cout << "Enter the customer's address 1 ";
	cin.ignore();
	cin.getline(address1, 25);
	customer1.setStreetAddress_1(address1);

	while (address1Validated == false)
	{
		cout << "***ERROR***" << endl;
		cout << "Enter the customer's address 1 ";
		cin.getline(address1, STREET_SIZE);
		customer1.setStreetAddress_1(address1);
	}
	if (address1Validated == true)
	{
		customer1.setStreetAddress_1(address1);
		cout << "Customer address 1 is " << customer1.getStreetAddress_1() << endl;
	}											// ~~~~~~~~~~ end getting streetAddress_1
	
	return 0;
}

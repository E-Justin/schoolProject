
#include <iomanip>  // input/ output library
#include <string> // to use strings
#include <iostream> // cin and cout..
#include <cstring>
#include <cctype>
using namespace std;

struct Sales
{
	int itemNumber;
	string itemName;
	int itemQuantity;
	double totalCost;
	long long cardNumber;
	string userName;
	int expirationDate;
	int securityCode;
	bool isValid = false;
};

Sales person1 =			// for testing purposes only
{
	1001,
	"Foam Padding",
	12,
	123.49,
	123456789,
	"Jon Doe",
	1215,
	123,

};

void displaySalesData(Sales x) // method to display sales info 
{
	cout << "Item Number: " << x.itemNumber << endl;
	cout << "Item Name: " << x.itemName << endl;
	cout << "Item Quantity: " << x.itemQuantity << endl;
	cout << "Total Cost: " << x.totalCost << endl;
	cout << "Card Number: " << x.cardNumber << endl;
	cout << "User name: " << x.userName << endl;
	cout << "Expiration Date MMYY: " << x.expirationDate << endl;
	cout << "Security Code: " << x.securityCode << endl;
	

	return;
}

void preCheck(Sales &x) // passing a strucutre by reference as an argument 
{
	

	if (x.itemNumber == 1001)
	{
		x.isValid = true;
		x.itemName = "Foam Padding";
		// item cost == $8.50
		x.totalCost = (x.itemQuantity * 8.50);
	}
	if (x.itemNumber == 1002)
	{
		x.isValid = true;
		x.itemName = "Box Tape";
		// item cost == $10.11
		x.totalCost = (x.itemQuantity * 10.11);
	}
	if (x.itemNumber == 1003)
	{
		x.isValid = true;
		x.itemName = "Moving Blanket";
		// item cost == $20.00
		x.totalCost = (x.itemQuantity * 20.00);
	}
	if (x.itemNumber == 1004)
	{
		x.isValid = true;
		x.itemName = "Moving Box";
		// item cost == $4.25
		x.totalCost = (x.itemQuantity * 4.25);
	}
}



int main()
{
	
	cout << boolalpha; // step 1

	Sales inputData; //step 2

	cout << "What is the item number?" << endl;  // step 3
	cin >> inputData.itemNumber;
	cout << "What is the item quantity?" << endl;
	cin >> inputData.itemQuantity;

	preCheck(inputData);

	if (inputData.isValid == 0) // if isValid == false
	{
		cout << "Not Valid " << endl;
	}
	else // if isValid == true
	{
		cout << "Valid " << endl;
		cout << "What is your credit card number? " << endl;
		cin >> inputData.cardNumber;
		cout << "What is your user name? " << endl;
		cin.ignore();
		getline(cin, inputData.userName); 
		cout << "What is your credit card's expiration date? " << endl;
		cin >> inputData.expirationDate;
		cout << "What is your credit cards's security code? " << endl;
		cin >> inputData.securityCode;

	}

	displaySalesData(inputData);
	
	return 0;
}

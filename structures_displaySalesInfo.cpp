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
	12345,
	"Lunch Box",
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
	if (x.isValid == 0) // if isValid == false
	{
		cout << "Not Valid " << endl;
	}
	else // if isValid == true
	{
		cout << "Valid " << endl;
	}

	return;
}



int main()
{
	displaySalesData(person1);
	
	
	return 0;
}

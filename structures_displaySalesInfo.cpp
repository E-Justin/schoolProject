
#include <iomanip>  // input/ output library
#include <string> // to use strings
#include <iostream> // cin and cout..
#include <cstring>
#include <cctype>
using namespace std;

struct CreditCardItems
{
	long long cardNumber;
	string userName;
	int expirationDate;
	int securityCode;
};


struct Sales
{
	int itemNumber;
	string itemName;
	int itemQuantity;
	double totalCost;
	CreditCardItems CardInfo; // extra credit
	bool isValid = false;
};




void displaySalesData(Sales x) // method to display sales info 
{
	cout << "Item Number: " << x.itemNumber << endl;
	cout << "Item Name: " << x.itemName << endl;
	cout << "Item Quantity: " << x.itemQuantity << endl;
	cout << "Total Cost: " << x.totalCost << endl;
	cout << "Card Number: " << x.CardInfo.cardNumber << endl;
	cout << "User name: " << x.CardInfo.userName << endl;
	cout << "Expiration Date MMYY: " << x.CardInfo.expirationDate << endl;
	cout << "Security Code: " << x.CardInfo.securityCode << endl;
	

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
	return;
}



int main()
{
	
	cout << boolalpha; // step 1

	Sales InputData; // step 2

	cout << "What is the item number?";  // step 3
	cin >> InputData.itemNumber;
	cout << "What is the item quantity?";
	cin >> InputData.itemQuantity;

	preCheck(InputData); // step 4

	if (InputData.isValid == 0) // if isValid == false  
	{
		cout << "Not Valid " << endl;
	}
	else // if isValid == true    step 5
	{
		cout << "Valid " << endl;
		cout << "What is your credit card number? ";
		cin >> InputData.CardInfo.cardNumber;
		cout << "What is your user name? ";
		cin.ignore();
		getline(cin, InputData.CardInfo.userName);
		cout << "What is your credit card's expiration date? ";
		cin >> InputData.CardInfo.expirationDate;
		cout << "What is your credit cards's security code? ";
		cin >> InputData.CardInfo.securityCode;

	}

	displaySalesData(InputData); // step 6
	
	return 0;
}

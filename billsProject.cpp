/* This program will determine the amount of money that each roommate is responsible for (up to 5 people)
The program will:
allow user to enter how many people are sharing/ paying bills
allow user to split bills evenly, or divvy it up by percentage
*/

#include <iomanip>  // input/ output library
#include <string> // to use strings
#include <iostream> // cin and cout..
#include <cstring>
#include <cctype>
using namespace std;

int numberOfPeople;
string selection;

struct Bills
{
	// initialized items to 0, incase bill was not paid by that person.
	double water = 0;
	double rent = 0;
	double electricity = 0;
	double groceries = 0;
	double insurance = 0;
	double other = 0;
	string otherIs; // to let user input what the other bill is
	bool paidOther = false; //will be set to true if they paid 'other'
	double total = 0;
	string name;
};
Bills person1, person2, person3, person4, person5;



Bills perPersonTotal(Bills personNumber)
{
	cout << "What is the person's name that you are about to enter bill amounts for?  ";
	cin >> personNumber.name;

	while (selection != "0")
	{
		cout << " ********** Bills Menu ********** " << endl;
		cout << " Select from the following to add a bill paid by "<< personNumber.name << endl;
		cout << "1 : Water Bill " << endl;
		cout << "2 : Rent/ Mortgage " << endl;
		cout << "3 : Electric Bill " << endl;
		cout << "4 : Groceries " << endl;
		cout << "5 : Insurance " << endl;
		cout << "6 : Other " << endl;
		cout << "0 : Exit " << personNumber.name << "'s bills  ";

		cin >> selection;

		if (selection == "1") // water
		{
			cout << "How much did " << personNumber.name <<" pay for water this month ?";
			cin >> personNumber.water;
		}
		if (selection == "2") // rent/ mortgage
		{
			cout << "How much did " << personNumber.name << " pay for water this month ?";
			cin >> personNumber.rent;
		}
		if (selection == "3") // electricity
		{
			cout << "How much did " << personNumber.name << " pay for Electricity this month ?";
			cin >> personNumber.electricity;
		}
		if (selection == "4") // groceries
		{
			cout << "How much did " << personNumber.name << " pay for water this month ?";
			cin >> personNumber.rent;
		}
		if (selection == "5") // insurance
		{
			cout << "How much did " << personNumber.name << " pay for insurance this month ?";
			cin >> personNumber.insurance;
		}
		if (selection == "6") // other
		{
			cout << "What bill did " << personNumber.name << " pay that is not listed?  ";
			cin.ignore();
			getline(cin, personNumber.otherIs); // user inputs the name of the other bill that is not listed in the menu
			personNumber.paidOther = true;
			cout << "How much did " << personNumber.name << " pay for " << personNumber.otherIs << " this month ?";
			cin >> personNumber.other;
		}

	}
	personNumber.total = personNumber.water + personNumber.rent + personNumber.electricity + personNumber.groceries + personNumber.other;
	cout << endl << personNumber.name << "'s total is : $" << personNumber.total << endl << endl;
	return personNumber;

}


int main()
{
	/*
	cout << "How many people (including yourself) are splitting the bills?  ";
	cin >> numberOfPeople;
	*/

	perPersonTotal(person1);

	return 0;
}

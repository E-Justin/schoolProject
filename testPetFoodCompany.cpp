// class specification file

#include<iomanip> // input/ output library
#include <string> // to use strings
#include <iostream> // cin and cout..
#include <cstring>
#include <cctype>
#include "PetFoodCompany.h"

#include <cstdlib>
using namespace std;

const int SIZE_OF_NAME = 50;

class PetFoodCompany; // forward declaration
PetFoodCompany Alpo;
PetFoodCompany Purina;


float computeBonusBudget(PetFoodCompany& div)
{
	return div.netIncome()* div.BonusBudgetRate;
}


int main()
{

	bool isOK;
	char compName[SIZE_OF_NAME] = "Pet's R US";
	char company1[SIZE_OF_NAME] = "Alpo";
	char company2[SIZE_OF_NAME] = "Purina";
	int count;
	int qrtr = 1;
	char divName[SIZE_OF_NAME];
	float tSales1;
	float tExpenses1;
	float tSales2;
	float tExpenses2;


	/*// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ begin getting company name ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	count = 0;

	do
	{
		cout << "Enter the company name (must be less than 40 characters) ";
		if (count > 0)
		{
			cin.clear(); // restes the error flag if a newline was not found
			cin.ignore(256, '\n'); // clears out the next 256 chars up to a newline

		}
		cin.getline(company, SIZE_OF_NAME);
		isOK = Alpo.setCompanyName(company); // returns true if validated, false if no
		count++;
	} while (isOK == false);
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ end getting company name ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	*/
	Alpo.setCompanyName(compName);
	/*// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ begin getting quarter ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	count = 0;

	do
	{
		cout << "Enter the quarter (must be a number from 1-4) " ;
		if (count > 0)
		{
			cin.clear(); // restes the error flag if a newline was not found
			cin.ignore(256, '\n'); // clears out the next 256 chars up to a newline

		}
		;
		cin >> qrtr;
		isOK = Alpo.setQuarter(qrtr); // returns true if validated, false if no
		count++;
	} while (isOK == false);
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ end getting quarter ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	*/
	Alpo.setQuarter(qrtr);
	/*// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ begin getting division name ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	count = 0;

	do
	{

		cout << "Enter the division name for Alpo (must be less than 40 characters) ";
		if (count > 0)
		{
			cin.clear(); // restes the error flag if a newline was not found
			cin.ignore(256, '\n'); // clears out the next 256 chars up to a newline

		}
		cin.getline(divName, SIZE_OF_NAME);
		isOK = Alpo.setDivisionName(divName); // returns true if validated, false if no
		count++;
	} while (isOK == false);
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ end getting division name ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	*/
	Alpo.setDivisionName(company1);
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ begin getting total sales ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	count = 0;

	do
	{
		cout << "Enter the total sales for Alpo ";
		if (count > 0)
		{
			cin.clear(); // restes the error flag if a newline was not found
			cin.ignore(256, '\n'); // clears out the next 256 chars up to a newline

		}

		cin >> tSales1;
		isOK = Alpo.setTotalsales(tSales1); // returns true if validated, false if no
		count++;
	} while (isOK == false);
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ end getting total sales ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ begin getting total expenses ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	count = 0;

	do
	{
		cout << "Enter the total expenses for Alpo ";
		if (count > 0)
		{
			cin.clear(); // restes the error flag if a newline was not found
			cin.ignore(256, '\n'); // clears out the next 256 chars up to a newline

		}

		cin >> tExpenses1;
		isOK = Alpo.setTotalExpenses(tExpenses1); // returns true if validated, false if no
		count++;
	} while (isOK == false);
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ end getting total expenses ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


	Purina.setDivisionName(company2);
	cout << endl << endl;
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ begin getting total sales ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	count = 0;

	do
	{
		cout << "Enter the total sales for Purina ";

		if (count > 0)
		{
			cin.clear(); // restes the error flag if a newline was not found
			cin.ignore(256, '\n'); // clears out the next 256 chars up to a newline

		}
		cin >> tSales2;
		isOK = Purina.setTotalsales(tSales2); // returns true if validated, false if no
		count++;
	} while (isOK == false);
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ end getting total sales ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ begin getting total expenses ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	count = 0;

	do
	{
		cout << "Enter the total expenses for Purina ";
		if (count > 0)
		{
			cin.clear(); // restes the error flag if a newline was not found
			cin.ignore(256, '\n'); // clears out the next 256 chars up to a newline

		}
		cin >> tExpenses2;
		isOK = Purina.setTotalExpenses(tExpenses2); // returns true if validated, false if no
		count++;
	} while (isOK == false);
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ end getting total expenses ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	cout << endl << endl;

	cout << "Company Name   : " << Alpo.getCompanyName() << endl;
	cout << "Quarter        : " << Alpo.getQuarter() << endl;
	cout << "Division Name  : " << Alpo.getDivisionName() << endl;
	//cout << "Total Sales    : " << Alpo.getTotalSales() << endl;
	//cout << "Total Expenses : " << Alpo.getTotalExpenses() << endl;
	cout << "Net Income     : " << Alpo.netIncome() << endl;
	cout << "Bonus Budget   : " << computeBonusBudget(Alpo) << endl << endl;

	cout << "Company Name   : " << Purina.getCompanyName() << endl;
	cout << "Quarter        : " << Purina.getQuarter() << endl;
	cout << "Division Name  : " << Purina.getDivisionName() << endl;
	//cout << "Total Sales    : " << Purina.getTotalSales() << endl;
	//cout << "Total Expenses : " << Purina.getTotalExpenses() << endl;
	cout << "Net Income     : " << Purina.netIncome() << endl;
	cout << "Bonus Budget   : " << computeBonusBudget(Purina) << endl << endl;

	return 0;
}

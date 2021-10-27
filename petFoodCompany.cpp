// justin.ezell059@my.tccd.edu
// 10 Assignment 03
// October 27 , 2021
// Programming fundamentals II
// COSC-1437-86003

#include "PetFoodCompany.h"
#include <cstdlib> // needed for exit function
#include <string>
#include <iomanip>
#include <iostream>
using namespace std;

/*//        setters
	bool setCompanyName(char[NAME_SIZE]);
	void setQuarter(int);
	void setDivisionName(char[NAME_SIZE]);
	void setTotalsales(float);
	void setTotalExpenses(float);
	//        getters
	char* getCompanyName();
	int setQuarter();
	char* getDivisionName();
	float getTotalSales();
	float getTotalExpenses();*/


float PetFoodCompany::netIncome()
{
	return totalSales - totalExpenses;
}




bool PetFoodCompany::setCompanyName(char name[NAME_SIZE]) // validates name to make sure it is the appropriate size. returns false if not
{
	int length;
	bool validated;

	length = strlen(name);
	if (length > 0 && length < NAME_SIZE)
	{
		strcpy_s(companyName, name);
		validated = true;
	}
	else
	{
		validated = false;
	}
	return validated;
}

bool PetFoodCompany::setQuarter(int qrtr)
{

	bool validated;


	if (qrtr > 0 && qrtr < 5)
	{
		quarter = qrtr;
		validated = true;
	}
	else
	{
		validated = false;
	}
	return validated;
}

bool PetFoodCompany::setDivisionName(char divName[NAME_SIZE])
{
	int length;
	bool validated;

	length = strlen(divName);
	if (length > 0 && length < NAME_SIZE)
	{
		strcpy_s(divisionName, divName);
		validated = true;
	}
	else
	{
		validated = false;
	}
	return validated;
}

bool PetFoodCompany::setTotalsales(float tS)
{
	bool validated;


	if (tS > 0 && tS < 10000000000)
	{
		totalSales = tS;
		validated = true;
	}
	else
	{
		validated = false;
	}
	return validated;
}

bool PetFoodCompany::setTotalExpenses(float tE)
{
	bool validated;


	if (tE > 0 && tE < 10000000000)
	{
		totalExpenses = tE;
		validated = true;
	}
	else
	{
		validated = false;
	}
	return validated;
}

char* PetFoodCompany::getCompanyName()
{
	return companyName;
}

int PetFoodCompany::getQuarter()
{
	return quarter;
}

char* PetFoodCompany::getDivisionName()
{
	return divisionName;
}

float PetFoodCompany::getTotalSales()
{
	return totalSales;
}

float PetFoodCompany::getTotalExpenses()
{
	return totalExpenses;
}

char PetFoodCompany::companyName[NAME_SIZE]; // static declaration
int PetFoodCompany::quarter; // static declaration

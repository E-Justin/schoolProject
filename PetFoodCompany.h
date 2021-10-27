
// class specification file

// justin.ezell059@my.tccd.edu
// 10 Assignment 03
// October 27 , 2021
// Programming fundamentals II
// COSC-1437-86003



#ifndef PetFoodCompany_H
#define PetFoodCompany_H


const int NAME_SIZE = 40;

class PetFoodCompany
{
private:
	static char companyName[NAME_SIZE];
	static int quarter;


	char divisionName[NAME_SIZE];
	float BonusBudgetRate = 0.02; // float
	float totalSales;
	float totalExpenses;

public:
	float netIncome(); // returns totalSales - totalExpenses
	//        setters
	static bool setCompanyName(char[NAME_SIZE]);
	static bool setQuarter(int);
	bool setDivisionName(char[NAME_SIZE]);
	bool setTotalsales(float);
	bool setTotalExpenses(float);
	//        getters
	char* getCompanyName();
	int getQuarter();
	char* getDivisionName();
	float getTotalSales();
	float getTotalExpenses();
	
	// friend function
	friend float computeBonusBudget(PetFoodCompany&);
};



#endif

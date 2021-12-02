/* this program will display each year and projected population until population exceeds 20 billion */

#include <iostream>
#include <iomanip>
using namespace std;


void popOver20B(double population, int currentYear)
{
	double targetPop = 20000000000;
	double growthRate = 0.0106;
	double futurePop;

	if (population == 7700000000)// if no recursion has happend yet (if population has not been increased)
	{
		cout << "Year : " << "2021" << " Current Population : " << "7700000000" << endl; // display current year and population
	}
	if (population < targetPop) // if population is less than 20 billion
	{
		futurePop = (population * growthRate) + population; // calculate projected population
		currentYear++; // increment year by 1
		cout << "Year : " << currentYear << " Estimated Population : " << setprecision(11) << futurePop << endl; // display future year and estimated population
			popOver20B(futurePop, currentYear); // continue calling function as long as population is less than 20 billion
	}
	if (population >= targetPop) // once target population has been reached
	{
		cout << " ************************ Result  ************************ "<< endl; // display results
		cout << "The population is projected to exceed 20 billion in the year " << currentYear << endl;
		cout << "With an estimated population of " << population << endl;
	}



}

int main()
{
	double currentPop = 7700000000;
	int currentYear = 2021;
	
	popOver20B(currentPop, currentYear);

	return 0;
}

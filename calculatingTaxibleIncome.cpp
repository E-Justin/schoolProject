
#include <iomanip>
#include <iostream>
#include <cstdlib>
using namespace std;

template <typename T>
T calculateTaxes(T number)
{
	T calculatedTax;

	if (number > 0 && number <= 9875)
	{
		cout << "Tax Rate : 10%" << endl;
		calculatedTax = (T) number * .1;
	}
	if (number >= 9876 && number <= 40125)
	{
		cout << "Tax Rate : 12%" << endl;
		calculatedTax = (T) (987.50 + ((number - 9875) * .12));
	}
	if (number >= 40126 && number <= 85525)
	{
		cout << "Tax Rate : 22%" << endl;
		calculatedTax = (T) (4617.50 + ((number - 40125) * .22));
	}
	if (number >= 85526 && number <= 163300)
	{
		cout << "Tax Rate : 24%" << endl;
		calculatedTax = (T) (14605.50 + ((number - 85525) * .24));
	}
	if (number >= 163301 && number <= 207350)
	{
		cout << "Tax Rate : 32%" << endl;
		calculatedTax = (T) (33271.50 + ((number - 163300) * .32));
	}
	if (number >= 207351 && number <= 518400)
	{
		cout << "Tax Rate : 35%" << endl;
		calculatedTax = (T) (47367.50 + ((number - 207350) * .35));
	}
	if (number >= 518401)
	{
		cout << "Tax Rate : 37%" << endl;
		calculatedTax = (T) (156235 + ((number - 518400) * .37));
	}

	return calculatedTax;
}

int main()
{
	float floatTaxIncome;
	double doubleTaxIncome;
	int intIncome;

	cout << "Please enter your taxible income as a floating point number ";
	cin >> floatTaxIncome;
	cout << "Please enter your taxible income as a double ";
	cin >> doubleTaxIncome;
	cout << "Please enter your taxible incomea s an integer ";
	cin >> intIncome;

	cout << endl;
	float floatResult = calculateTaxes(floatTaxIncome);
	cout << "Float taxes owed :" << fixed << setprecision(2) << floatResult << endl << endl;
	double doubleResult = calculateTaxes(doubleTaxIncome);
	cout << "Double taxes owed : " << fixed << setprecision(2) << doubleResult << endl << endl;
	int intResult = calculateTaxes(intIncome);
	cout << "Int taxes owed : " << fixed << setprecision(2) << intResult << endl << endl;


	return 0;
}


#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

string userName;
string* namePtr = nullptr;

int userAge;
int* agePtr = nullptr;

double userSalary;
double* salaryPtr = nullptr;

void raisedSalary(double* ptr)
{
	*ptr = (*ptr * .1) + *ptr;
	cout << "Your salary raised by 10% is : " << *ptr << endl;
}


int main()
{
	//**************************************************************// step 2
	cout << "Please enter your name " << endl;
	cin >> userName;

	namePtr = &userName; // points to address of namePtr
	
	
	cout << "The name you entered is : " << *namePtr << endl;
	cout << "The address of this pointer is : " << &namePtr << endl;
	//****************************************************************// step 2

	cout << " Please enter your age " << endl;
	cin >> userAge;

	agePtr = &userAge; // points to address of userAge

	cout << " The age you entered is : " << *agePtr << endl;
	cout << "The address of this pointer is : " << &agePtr << endl;
	//**************************************************************// step 3

	cout << "What is your salary " << endl;
	cin >> userSalary;

	salaryPtr = &userSalary;

	cout << "The salary you entered is : " << *salaryPtr << endl;
	cout << "The address of this pointer is : " << &salaryPtr << endl;

	//**************************************************************// step 4

	raisedSalary(salaryPtr);

	//**************************************************************// step 5

	cout << "The salary variable is now " << userSalary << endl;


	return 0;
}

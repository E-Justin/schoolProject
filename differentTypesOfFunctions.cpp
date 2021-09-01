
#include <iostream>
#include <iomanip>
#include <string>


using namespace std;

string step1Output = " My College Class is in Week 2";
string step2Parameter = "COSC 1437";

void step1()
{
	cout << step1Output << endl;
}

void step2(string x)
{
	cout << "I am taking class: " << x << endl;
}

double addExtraCredit1(double x) // step 3
{
	return (x += 10);
}

void addExtraCredit2(double &refVar) // step 4
{
	refVar += 10;
	
}

double addExtraCredit3(double baseValue, double extraCredit = 10) // step 5
{
	return (baseValue + extraCredit);
}

void assignmentGrade(double currentGrade, double maxGradePossible, string assignmentName) // step 6
{
	
	cout << "Student received a " << currentGrade << " out of a " << maxGradePossible << " for the " << assignmentName << endl;
}

void assignmentGrade(double currentGrade, double maxGradePossible, string assignmentName, string courseName) // step 7
{
	cout << "In the course " << courseName << ", Student received a " << currentGrade << " out of a " << maxGradePossible << " for the " << assignmentName << endl;
}


int main()
{
	//8.1
	double myGrade;
	// 8.2
	const double ADVANCED_EXTRA_CREDIT = 15;

	//8.3
	step1();

	//8.4
	step2(step2Parameter);

	// 8.5
	myGrade = 83;

	// 8.6
	cout << "I called the method addExtraCredit1 and it returned the value " << addExtraCredit1(myGrade) << endl;

	// 8.7
	myGrade = 82;

	// 8.8 & extra credit attempt
	cout << "I called the method addExtraCredit1 and it returned the value " << addExtraCredit1(myGrade) << endl;
	addExtraCredit2(myGrade); // call function
	cout << "My grade with extra credit is now " << myGrade << endl;


	// 8.9
	myGrade = 75;

	// 8.10
	cout << "My grade with extra credit is now " << addExtraCredit3(myGrade) << endl;

	// 8.11
	myGrade = 80;

	//8.12
	cout << " My grade with extra credit is now " << addExtraCredit3(myGrade, ADVANCED_EXTRA_CREDIT)<< endl;

	//8.13
	assignmentGrade(80, 100, "Week 2: Assignment 2 ");

	//8.14
	assignmentGrade(80, 100, " Week 2: Assignment 2 ", step2Parameter );
}

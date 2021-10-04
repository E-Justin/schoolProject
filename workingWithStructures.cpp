
#include <iomanip>  // input/ output library
#include <string> // to use strings
#include <iostream> // cin and cout..
#include <cstring>
#include <cctype>
using namespace std;

struct Date
{
	int month;
	int day;
	int year;
};

struct TimeOfDay
{
	int hour;
	int minute;
	
};

int main()
{
	Date dateOfBirth; // struct variable to hold user DOB
	Date nextAppointmentDate; // struct variable to hold user's next dentist appointment

	TimeOfDay wakeUpTime;
	TimeOfDay nextAppointmentTime;

	char separator; 

	cout << "What is your date of birth? MM/DD/YYYY" << endl;
	cin >> dateOfBirth.month >> separator >> dateOfBirth.day >> separator >> dateOfBirth.year;

	cout << "What time do you typically wake up? HH:MM" << endl;
	cin >> wakeUpTime.hour >> separator >> wakeUpTime.minute;

	cout << "When is the date of your next dentist appointment? MM/DD/YYYY" << endl;
	cin >> nextAppointmentDate.month >> separator >> nextAppointmentDate.day >> separator >> nextAppointmentDate.year;

	cout << "What time is your next dentist appointment? HH:MM" << endl;
	cin >> nextAppointmentTime.hour >> separator >> nextAppointmentTime.minute;

	

	
	



	return 0;
}

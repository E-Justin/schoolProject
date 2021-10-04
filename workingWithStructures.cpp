
#include <iomanip>  // input/ output library
#include <string> // to use strings
#include <iostream> // cin and cout..
#include <cstring>
#include <cctype>
using namespace std;

char separator; // used in formatting date and time ex '/' or ':'

struct Date
{
	int month;
	int day;
	int year;
};
Date DateOfBirth; // struct variable to hold user DOB

struct TimeOfDay
{
	int hour;
	int minute;

};

TimeOfDay WakeUpTime;


struct DateTime
{
	Date AppointmentDate;
	TimeOfDay AppointmentTime;
};

DateTime AppointmentInfo;


Date loadAndReturnDate() // loads and returns DOB
{

	cout << "What is your date of birth? MM/DD/YYYY" << endl;
	cin >> DateOfBirth.month >> separator >> DateOfBirth.day >> separator >> DateOfBirth.year;

	cout << "Birth Date: " << DateOfBirth.month << "/" << DateOfBirth.day << "/" << DateOfBirth.year << endl;

	return DateOfBirth;
}
Date AppointmentDate;

TimeOfDay loadAndReturnTimeOfDay() // loads and returns wake up time
{
	cout << "What time do you typically wake up? HH:MM" << endl;
	cin >> WakeUpTime.hour >> separator >> WakeUpTime.minute;

	cout << "Wake up time : " << WakeUpTime.hour << ":" << WakeUpTime.minute << endl;

	return WakeUpTime;
}
TimeOfDay AppointmentTime;

DateTime loadAndReturnAppointmentInfo() // loads and returns appointment info
{
	cout << "What is the date of your next dentist appointment? MM/DD/YYYY " << endl;
	cin >> AppointmentInfo.AppointmentDate.month >> separator >> AppointmentInfo.AppointmentDate.day >> separator >> AppointmentInfo.AppointmentDate.year;

	cout << "The date of your next dentist appointment is : " << AppointmentInfo.AppointmentDate.month << "/" << AppointmentInfo.AppointmentDate.day << "/" << AppointmentInfo.AppointmentDate.year << endl;

	return AppointmentInfo;
}

int main()
{
	
	
	loadAndReturnDate();
	
	loadAndReturnTimeOfDay();
	
	loadAndReturnAppointmentInfo();
	

	return 0;
}

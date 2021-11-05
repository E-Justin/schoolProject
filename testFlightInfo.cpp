// driver file

// justin.ezell059@my.tccd.edu
// 12 Assignment 02
// November 5 , 2021
// Programming fundamentals II
// COSC-1437-86003

#include "FlightInfo.h"
#include <iomanip>
#include <cstdlib>
#include <iostream>
#include <cctype>
#include <cstring>
#include <cstdlib> 
#include <string>
using namespace std;

FlightInfo userFlight;

int main()
{
	
	int userSpeed;
	int userDirection;
	int userAltitude;
	int userFuelLevel;
	int count;

	// ~~~~~~~~~~ Begin getting userSpeed 0 - 650 ~~~~~~~~~~

		cout << "Enter the speed ( 0 - 650 ) ";
		cin >> userSpeed;
		userFlight.setSpeed(userSpeed);

	// ~~~~~~~~~~ End getting userSpeed ~~~~~~~~~~

	// ~~~~~~~~~~ Begin getting userDirection 0-360 ~~~~~~~~~~

		cout << "Enter the direction ( 0 - 360 ) ";
		cin >> userDirection;
		userFlight.setDirection(userDirection);

	// ~~~~~~~~~~ End getting userDirection ~~~~~~~~~~

	// ~~~~~~~~~~ Begin getting userAltitude 0-10000 ~~~~~~~~~~

		cout << "Enter the altitude ( 0 - 10000 ) ";
		cin >> userAltitude;
		userFlight.setAbsoluteAltitude(userAltitude);

	// ~~~~~~~~~~ End getting userAltitude ~~~~~~~~~~

	// ~~~~~~~~~~ Begin getting userFuelLevel 0-100 ~~~~~~~~~~

		cout << " Enter the fuel level ( 0 - 100 ) ";
		cin >> userFuelLevel;
		userFlight.setFuelLevel(userFuelLevel);
	// ~~~~~~~~~~ End getting userFuelLevel ~~~~~~~~~~

	// ~~~~~~~~~~ DISPLAY FLIGHT INFO ~~~~~~~~~~
		cout << " Speed ........... " << userFlight.getSpeed() << endl;
		cout << " Direction ....... " << userFlight.getDirection() << endl;
		cout << " Altitude ........ " << userFlight.getAbsoluteAltitude() << endl;
		cout << " Fuel level ...... " << userFlight.getFuelLevel() << endl;

		
	





	return 0;
}

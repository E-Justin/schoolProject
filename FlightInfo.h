#pragma once
/*
Tarrant County College - COSC 1437

**** Justin Ezell *****
**** Fall 2021 *****

*/

#include <iostream>
using namespace std;


class FlightInfo
{
private:
    int absoluteAltitude = 0;
    int speed = 0;
    int fuelLevel = 0;
    int direction = 0;
public:
    // exception classes
    class InvalidDirection
    { }; // empty class declaration

    class InvalidFuelLevel
    { }; // empty class declaration

    class InvalidAltitude
    { }; // empty class declaration

    class InvalidSpeed
    { };

    // setters

    //valid 0-10000
    void setAbsoluteAltitude(int alt)
    {
        

        if (alt >= 0 && alt <= 10000)
        {
            absoluteAltitude = alt;
            
        }
        else
        {
            throw InvalidAltitude();
        }
    }

    //valid 0 - 650
    void setSpeed(int currentSpeed)
    {
        if (currentSpeed >= 0 && currentSpeed <= 650)
        {
            speed = currentSpeed;
        }
        else
        {
            throw InvalidSpeed();
        }
    }

    // Valid 0 - 100
    void setFuelLevel(int level)
    {
        if (level >= 0 && level <= 100)
        {
            fuelLevel = level;
        }
        else
        {
            throw InvalidFuelLevel();
        }
    }

    // valid 0-360
    void setDirection(int heading)
    {
        if (heading >= 0 && heading <= 360)
        {
            direction = heading;
        }
        else
        {
            throw InvalidDirection();
        }
    }

    // getters
    int getAbsoluteAltitude() {
        return absoluteAltitude;
    }
    int getSpeed() {
        return speed;
    }
    int getFuelLevel() {
        return fuelLevel;
    }
    int getDirection() {
        return direction;
    }


    void showAll() {
        cout << "Altitude     = " << getAbsoluteAltitude() << endl;
        cout << "Speed        = " << getSpeed() << endl;
        cout << "FuelLevel    = " << getFuelLevel() << endl;
        cout << "Direction    = " << getDirection() << endl;
    }
};




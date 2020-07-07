
// This program computes the distance of an object falling based off of how much time has passed.

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

double FallingDistance(int); // function prototype

int seconds = 1; // initializing seconds to 1

int main()
{
    cout << "Seconds           Distance"<< endl; // creating table header
    cout << "===========================" << endl; // creating table 

    

    while (seconds <= 12) // loop continues until seconds variable is greater than 12
    {
        FallingDistance(seconds); // calls function FallingDistance
            seconds = seconds++; // incriments seconds by 1 at the end of the loop
    }
    

}

double FallingDistance(int seconds)  // Function defintion
{
    
    double distance = 0.5 * 32.2 * seconds * seconds; // algorithm to calculate distance from seconds falling

    cout << seconds << "              " << right <<setprecision(4)<< fixed<< distance << " feet" << endl; // displaying the variables in their own column in the table

    return distance;
    
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

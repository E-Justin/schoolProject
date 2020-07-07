
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int entries;            // declaring variable to hold the number of entries
    int day = 1;            // declaring variable to hold the number of days
    double sum = 0.0;       // declaring variable to hold the sum/ total pay
    double pay = 0.20;      // declaring variable to hold the starting pay for day 1
   

    cout << "How many days did you work?" << endl;  // ask user how many days they worked
    cin >> entries;                                 // hold input as variable entries
    cout << "Day         Pay" << endl;              // set up table header
    cout << "===================" << endl;          // set up table header

    while (day <= entries)           // begin loop/ exit condition
    {
        cout << setprecision(2) << fixed  << day << "              $" << pay << endl; // display variables in their own column with the setprecision and fixed manipulators to show 2 decimal points to the right.
        {
            sum = sum + pay;    // calculate sum
            pay = pay * 2;      // double pay each day
            day = day++;        // increment day by 1 at the end of the loop
        }
    }
    cout << "Your total pay is $" << setprecision(2) << fixed  << sum << endl;    // display sum/total pay with the setprecision and fixed manipulators to show 2 decimal points to the right.
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

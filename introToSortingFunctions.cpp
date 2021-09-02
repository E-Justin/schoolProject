
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdbool>

using namespace std;

/* Write the definition of a function named isSorted that receives three arguments in the following order:
an array of int
an int that indicates the number of elements in the array
a bool
If the bool argument is true then the function returns true if the array is sorted in ascending order. Otherwise, the function returns false.       check
If the bool argument is false then the function returns true if the array is sorted in descending order. Otherwise, the function returns false.     check
In all other cases, the function returns false.
You may assume that the array has at least two elements. */


bool isSorted(int x[], int nElementsInArray, bool y)
{
    int i = 0;

    if (y == true)
    {
        while (i < (nElementsInArray -1) && x[i] < x[i + 1])
        {
            y = true;
            i++;
        }
        while (i < (nElementsInArray - 1) && x[i] > x[i + 1])
        {
            y = false;
            i++;
        }
    }

    if (y == false)
    {
        while (i < (nElementsInArray - 1) && x[i] > x[i + 1])
        {
            y = true;
            i++;
        }
        while (i < (nElementsInArray - 1) && x[i] < x[i + 1])
        {
            y = false;
            i++;
        }
    }
    return y;
}


int main()
{
    int z[5] = { 15, 12, 7, 5, 0 };
	
    isSorted(z, 5, false);

	


	

	return 0;
}

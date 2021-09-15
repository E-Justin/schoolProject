#include <iostream> // to allow for cin and cout statements
#include <memory> // used for smart pointers
using namespace std;

const int MAX_NUMBER = 5;
int userInput;



int main()
{

	// Grading Note : Comment each task with the given Task number and description 

	// Task 1. Create a pointer to an int and set it to nullptr
	int* ptr = nullptr;
	// Task 2. Create a Dynamic array of MAX_NUMBER ints and assign the pointer in Task 1
	ptr = new int[MAX_NUMBER];

	//		         Refer and use the constant MAX_NUMBER for all processing	 


	// Task 3. Using a FOR loop - Prompt for int values and load the given value into the Dynamic array from Task 2. Do this MAX_NUMBER times.
	for (int i = 0; i < MAX_NUMBER; i++)
	{
		cout << "Please enter an integer to be added to the array " << endl;
		cin >> ptr[i];
		

	}

	// Task 4. Display all items in the array 
	for (int j = 0; j < MAX_NUMBER; j++)
	{
		cout << ptr[j];
	}
	
	// Task 5. Delete the dynamically created array
	delete[] ptr;
	ptr = 0;
	// Task 6. Repeat the above steps 1 - 4 but use Smart Pointers described in section 9.10
	//         The repeat of Task 1 does not involve nullptr	

	// Task 2.1. Create a smart pointer to an int && Task 2.2 Create a Dynamic array of MAX_NUMBER ints and assign the pointer in Task 2.1
	unique_ptr<int[]> smartPtr(new int);

	// Task 2.3. Using a FOR loop - Prompt for int values and load the given value into the Dynamic array from Task 2. Do this MAX_NUMBER times.

	for (int index = 0; index < MAX_NUMBER; index++)
	{
		cout << "Please enter an integer to be added to the array" << endl;
		cin >> smartPtr[index];
	}

	// Task 2.4. Display all items in the array 
	for (int j = 0; j < MAX_NUMBER; j++)
	{
		cout << smartPtr[j];
	}




}

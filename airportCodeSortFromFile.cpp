
#define VERSION 1.01

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// Provided Method  - no need to change
vector < string > split(const string& s,
	const string& delim) {

	/*
	Split lines of text using a delimiter
	http://programmingknowledgeblog.blogspot.com/2013/04/the-most-elegant-way-to-split-string-in.html

	   This method will split a string and create (return) a vector of strings using a delimiter.
	   Thus the code   split("HELLO,EARTH,AND FRIENDS", ",");
	   would return a vector of strings because the passed delimiter was ","
					  v[0] = "HELLO"
					  v[1] = "EARTH" ....
	*/

	vector < string > result;
	if (delim.empty()) {
		result.push_back(s);
		return result;
	}
	string::const_iterator substart = s.begin(), subend;
	while (true) {
		subend = search(substart, s.end(), delim.begin(), delim.end());
		string temp(substart, subend);
		if (!temp.empty()) {
			result.push_back(temp);
		}
		if (subend == s.end()) {
			break;
		}
		substart = subend + delim.size();
	}
	return result;
}

void isItSorted(vector<string> vect) // defining method to determine if a vector is in either ascending/ descending/ or no order.
{

	int index = 0;
	bool sorted = true;
	int vectorCount = vect.size();

	while (vect[index] <= vect[index + 1] && index < (vectorCount))
	{

		if (vect[index] <= vect[index + 1]) // if the first element is less than or equal to the second, and so on
		{

			if (index == (vectorCount - 2))
			{
				cout << "ascending order" << endl;
				return;
			}

		}
		if (vect[index] > vect[index + 1])
		{
			sorted = false;
			cout << "not sorted " << endl;
			return;

		}
		index++;
	}
	index = 0;
	while (sorted == true && index < (vectorCount))
	{

		if (vect[index] >= vect[index + 1]) // if the first element is greater than or equal to the second, and so on
		{


			if (index == (vectorCount - 2))
			{
				cout << "descending order" << endl;
				return;
			}
		}
		if (vect[index] < vect[index + 1])
		{
			sorted = false;
			cout << "not sorted " << endl;
			return;


		}

		index++;


	}
}





/********************************
Main Body of Work
*/



int main() {
	// Declare variables
	vector < string > dataLineVector;
	int lineCount = 0;
	int vectorCount = 0;
	vector<string> airportCode;	// initializing airportCode vector to store ariport codes

	//TODO Create a vector of airport codes here
	// ...

	const string INPUT_FILE_NAME = "airports.dat";
	const int AIRPORT_CODE_ELEMENT = 4;

	string inputLine, dataElement;


	// Open data file
	cout << "Opening data file: " << INPUT_FILE_NAME << endl;							// step 1
	ifstream inputFile;
	inputFile.open(INPUT_FILE_NAME.c_str());

	if (inputFile.fail()) {

		cout << "ERROR - Unable to read from " << INPUT_FILE_NAME << "!" << endl;     /// step 1
		cout << "Check to see if the file is missing or corrupted." << endl;
		return 99;
	}

	// Read individual lines of data, extract the desired element and validate
	cout << "Reading data from " << INPUT_FILE_NAME << endl;
	do {
		getline(inputFile, inputLine);													// step 2a
		if (!inputFile) { // if End of File (EOF)
			break;
		}

		lineCount++;
		dataLineVector = split(inputLine, ",");											// step 2b
		dataElement = dataLineVector[AIRPORT_CODE_ELEMENT];

		// TODO 
		// You now have data in the variable named dataElement
		// Validate that it is a length of 3 chars 
		// if valid add it to your created vector of airport codes
		
		
		
		int length = dataElement.length(); // gets length of each airport code (one at a time)

		if (length == 3)
		{
			
			airportCode.push_back(dataElement); // push elements of dataElements to new vector (airportCode) if it has a length of 3.
			vectorCount += 1;
			
		}
		
	

	} while (true);

	cout << "All airport code data has been extracted from " << INPUT_FILE_NAME << endl;
	cout << lineCount << " lines processed." << endl;
	inputFile.close();

	//TODO  Display total number of validated airport codes
	cout << "There are " << vectorCount << " total validated airport codes " << endl;
	//TODO Check if Sorted -report/display as Sorted or Not Sorted
	isItSorted(airportCode);
	cout << "Sorting ...." << endl;
	//TODO Sort Vector
	sort(airportCode.begin(), airportCode.end());
	
	//TODO Check if Sorted -report/display as Sorted or Not Sorted
	isItSorted(airportCode);													// calling function again, after attempted sort.
	



	return 0;
}

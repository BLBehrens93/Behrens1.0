/* Brian Behrens
** CS-210 Project 3 (7-3)
** 4-19-2026 */

#include "GroceryItemTracker.h"
#include <iostream>
#include <fstream>
#include <utility>

using namespace std;

//Constructor
GroceryItemTracker::GroceryItemTracker() {
	loadingDataFile();
	creatingBackupFile();
}
//Function for loading the datafile
void GroceryItemTracker::loadingDataFile() {
	ifstream inFile("CS210_Project_Three_Input_File.txt");
	string items;

	//Making sure the file gets opened.
	if (!inFile.is_open()) {
		cout << "Error. 'CS210_Project_Three_Input_File.txt' did not open." << endl;
		return;
	}
	while (inFile >> items) {
		++mapItemFrequency[items];
	}
	inFile.close();
}
/*Function for creating a new file.
* Putting the data from 'CS210_Three_Input_File.txt'
* into 'frequency.dat' file.*/
void GroceryItemTracker::creatingBackupFile() {
	ofstream outFile("frequency.dat");

	/* Using a ranged 'for loop' with 'pair' from the utility
	** template class to pair the item with its frequency.
	** Using 'auto' to let the compiler deal with the data type and
	** using the '&' with it to basically reference an already existing
	** object or variable. '.first' takes the string variable and '.second'
	** takes the integer variable*/
	for (auto& pair : mapItemFrequency) {
		outFile << pair.first << " " << pair.second << endl;
	}
	outFile.close();
}
//Menu options
void GroceryItemTracker::menuDisplay() {
	cout << "\n~~~~~Corner Grocer~~~~~\n";
	cout << "1. Find a grocery item frequency.\n";
	cout << "2. Show all grocery item frequencies.\n";
	cout << "3. Show all grocery item frequencies via histogram.\n";
	cout << "4. Exit program.\n";
}
/* Option 1 - Getting the frequencies or number of times an item occurs.
** 'if' statement here to return the frequencies of the grocery items to
** main().*/
int GroceryItemTracker::getItemFrequency(string groceryItem) {
	if (mapItemFrequency.count(groceryItem)) {
		return mapItemFrequency[groceryItem];
	}
	return 0; //If the item doesn't exist, return nothing.
}
/* Option 2 - Printing / Displaying the items with there corresponding frequencies.
** 'range-based for loop' with auto& along with pair to pair the mapItemFrequency
** variables or objects.The '.first' takes the string variable and the '.second'
** takes the integer variable.*/
void GroceryItemTracker::printFrequencies() {
	for (auto& pair : mapItemFrequency) {
		cout << pair.first << " " << pair.second << endl;
	}
}
/* Option 3 - Printing / Displaying the items with there corresponding frequencies via histogram.
** 'range-based for loop' with auto& along with pair to pair the mapItemFrequency
** variables or objects. '.first' takes the string variable and the '.second'
** takes the integer variable. The nested for loop takes 'pair.second' and iterates
** through it and/or counts the number of frequencies 'pair.first' occurs, but instead of
** displaying an integer like '6', it will display six '*'.*/
void GroceryItemTracker::printHistogramFrequencies() {
	int increment;
	for (auto& pair : mapItemFrequency) {
		cout << pair.first << " ";
		for (increment = 0; increment < pair.second; ++increment) {
			cout << "*";
		}
		cout << endl;
	}
}

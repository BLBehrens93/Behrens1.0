/* Brian Behrens
** CS-210 Project 3 (7-3)
** 4-19-2026 */

#include "GroceryItemTracker.h"
#include <iostream>

int main() {
	GroceryItemTracker trackItem; //Object variable 'trackItem' for GroceryItemTracker class.
	int selectOption = 0;

	/* 'groceryStoreItem' variable that will be called with 'getItemFrequency()'. (Ex: Eggs, Spinach, etc.)*/
	string groceryStoreItem;
	int numFrequencies = 0;

	/* While loop here. Making sure it enters the loop. Then calls the menuDisplay() function.
	** Then input for 'selectOption'.*/
	while (selectOption != 4) {
		trackItem.menuDisplay();
		cout << endl;
		cin >> selectOption;
		cout << endl;

		/* This 'if' statement is to make sure that an invalid input is caught
		** to let the user know to enter an integer (1-4). I made this mistake when
		** I was running it and the program just ended.*/
		if (cin.fail()) { //Checks to make sure there's no invalid input.
			cin.clear(); //If there is invalid input, reset the input stream.
			cin.ignore(250, EOF); //Ignores or removes the previous invalid input and removes 250 characters until the end of the file.
			cout << "Invalid input. Try again. Enter an integer (Ex: 1, 2, 3, or 4.)";
			continue;
		}
		/* Switch statement:
		** 1. Calls the getItemFrequency() function to get the selected items frequency. 'break' exits the loop.
		** 2. Calls the printFrequencies() function to print the items and their frequencies. 'break' exits the loop.
		** 3. Calls the printHistogramFrequencies() function to print the items and their frequencies with an '*'. 'break' exits the loop.
		** Default - Invalid input option error message. 'continue' restarts the loop.*/
		switch (selectOption) {
		case 1: {
			cout << "Enter a grocery item, first letter needs to be capitalized: ";
			cin >> groceryStoreItem;
			cout << endl;
			numFrequencies = trackItem.getItemFrequency(groceryStoreItem);
			if (numFrequencies == 0) {
				cout << groceryStoreItem << " was not found." << endl;
				break;
			}
			else {
				cout << groceryStoreItem << " " << numFrequencies << endl;
				break;
			}
		}
		case 2: {
			trackItem.printFrequencies();
			break;
		}
		case 3: {
			trackItem.printHistogramFrequencies();
			break;
		}
		case 4: {
			cout << "Exit Program." << endl;
			break;
		}
		default: {
			cout << "Invalid option. Try: 1, 2, 3, or 4." << endl;
			continue;
		}
		}
	}
	return 0;
}
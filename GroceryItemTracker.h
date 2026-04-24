/* Brian Behrens
** CS-210 Project 3 (7-3)
** 4-19-2026 */

#pragma once

#include <map>
#include <string>

using namespace std;

class GroceryItemTracker {
public:
	GroceryItemTracker();
	void menuDisplay();
	int getItemFrequency(string groceryItem);
	void printFrequencies();
	void printHistogramFrequencies();

private:
	/* mapItemFrequency will eventually hold two variables, a string
	** and an integer by 'pairing' them together with the help of <map>.*/
	map<string, int> mapItemFrequency;
	void loadingDataFile();
	void creatingBackupFile();
};
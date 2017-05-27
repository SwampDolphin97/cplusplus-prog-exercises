/*
 * Answer 10.cpp
 * Author: suyashd95
 */

#include <iostream>
#include <iomanip>

using namespace std;

int findTotalConsumers();
void populateData(string* consumerNames, unsigned int* unitsConsumed, int arraySize);
float calculateBill(unsigned int unitsConsumed);

int main() {

	int const nDomesticUsers = findTotalConsumers();

	string* consumerNames = new string[nDomesticUsers];
	unsigned int* unitsConsumed = new unsigned int[nDomesticUsers];

	populateData(consumerNames, unitsConsumed, nDomesticUsers);

	cout << endl << "ELECTRICITY BILL INFORMATION....\n" << endl;
	cout << "|" << setw(78) << setfill('-') << "|" << endl;
	cout << "|" << setw(25) << setfill(' ') << "Consumer Name" << setw(14) << "|" << flush;
	cout << setw(28) << "Total Bill Amount" << setw(11) << "|" << endl;
	cout << "|" << setw(78) << setfill('-') << "|" << endl;

	for(int i = 0; i < nDomesticUsers; i++) {

		cout << "|" << setw(39) << "|" << flush;
		cout << setw(39) << "|" << endl;
	}

	delete [] consumerNames;
	delete [] unitsConsumed;

	return 0;
}

int findTotalConsumers() {

	unsigned short int nDomesticUsers;

	cout << "How many individuals are supplied electricity by the electricity board? " << flush;
	cin >> nDomesticUsers;

	return nDomesticUsers;
}

void populateData(string* consumerNames, unsigned int* unitsConsumed, int const arraySize) {

	cout << endl;
	cout << "Entering the data of " << arraySize << " consumers..." << endl;

	for(int i = 0; i < arraySize; i++) {

		cout << endl << "Inputting the info about consumer " << i + 1 << endl;

		cout << "Enter the Name -> " << flush;
		cin >> consumerNames[i];

		cout << "Enter the number of units consumed -> " << flush;
		cin >> unitsConsumed[i];
	}

	cout << endl;
	cout << "Data of all the " << arraySize << " consumers have been successfully entered." << endl;
}

float calculateBill(unsigned int unitsConsumed) { return 0.0; }



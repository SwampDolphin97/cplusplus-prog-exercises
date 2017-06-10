/*
 * Answer 5.cpp
 * Author: suyashd95
 */

#include <iostream>

#include "DB.h"
#include "DM.h"

using namespace std;

void addDistance(DB&, DM&);

int main() {

	DB db;

	int feet, inches;
	cout << "Enter the distance in feet and inches respectively: " << flush;
	cin >> feet;
	cin >> inches;

	db.setDistance(feet, inches);
	db.displayDistance();

	DM dm;

	int meters, centimeters;
	cout << endl;
	cout << "Enter the distance in meters and centimeters respectively: " << flush;
	cin >> meters;
	cin >> centimeters;

	dm.setDistance(meters, centimeters);
	dm.displayDistance();

	cout << endl;
	addDistance(db, dm);

	return 0;
}

void addDistance(DB& db, DM& dm) {

	cout << "Choose the format in which the total distance needs to be displayed..." << endl;
	cout << "1. In feet and inches\t2. In meters and centimeters\nPress the number corresponding to your choice: " << flush;
	int op;
	cin >> op;

	cout << endl;
	switch(op) {

	case 1:

		cout << "First option selected." << endl;
		break;
	case 2:

		cout << "Second option selected." << endl;
		break;
	default:

		cout << "Invalid option." << endl;
		break;
	}
}



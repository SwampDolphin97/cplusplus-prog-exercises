/*
 * Answer 5.cpp
 * Author: suyashd95
 */

#include <iostream>

#include "DB.h"
#include "DM.h"

using namespace std;

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

	return 0;
}



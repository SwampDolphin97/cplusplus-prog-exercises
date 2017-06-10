/*
 * Answer 5.cpp
 * Author: suyashd95
 */

#include <iostream>

#include "DB.h"

using namespace std;

int main() {

	DB db;

	int feet, inches;
	cout << "Enter the distance in feet and inches respectively: " << flush;
	cin >> feet;
	cin >> inches;

	db.setDistance(feet, inches);
	db.displayDistance();

	return 0;
}



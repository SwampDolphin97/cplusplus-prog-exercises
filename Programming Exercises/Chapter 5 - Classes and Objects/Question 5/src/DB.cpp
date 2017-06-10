/*
 * DB.cpp
 * Author: suyashd95
 */

#include <iostream>

#include "DB.h"

using namespace std;

void DB::setDistance(int feet, int inches) {

	this->feet = feet;
	this->inches = inches;
}

void DB::displayDistance() {

	cout << "Distance displayed in the form of feet and inches -> " << feet << " ft " << inches << " in" << endl;
}

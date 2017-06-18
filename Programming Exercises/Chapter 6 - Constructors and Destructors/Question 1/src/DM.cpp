/*
 * DM.cpp
 * Author: suyashd95
 */

#include <iostream>

#include "DM.h"

using namespace std;

void DM::displayDistance() {

	cout << "Distance displayed in meters and centimeters format -> " << meters << " m " << centimeters << " cm" << endl;
}

void DM::setDistance(int meters, int centimeters) {

	this->meters = meters;
	this->centimeters = centimeters;
}

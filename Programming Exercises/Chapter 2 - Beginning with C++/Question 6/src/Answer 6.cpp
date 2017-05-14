/*
 * Answer 6.cpp
 * 	Author: suyashd95
 */

#include <iostream>
#include <iomanip>

#include "temp.h"

using namespace std;

int main() {

	Temp temp;
	float degreeFahrenheit;

	cout << "Enter the temperature in degree Fahrenheit: " << flush;
	cin >> degreeFahrenheit;

	temp.setFahrenheit(degreeFahrenheit);
	temp.convertFahrenheitToCelsius();

	cout << "The temperature in degree Celsius: " << setprecision(4) << temp.getCelsius() << endl;

	return 0;
}


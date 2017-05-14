/*
 * temp.h
 * 	Author: suyashd95
 */

#ifndef TEMP_H_
#define TEMP_H_

#include <iostream>

using namespace std;

class Temp {

private:
	static const float FAHRENHEIT_CONSTANT = 0.5556; // or 5 / 9
	float degreeFahrenheit;
	float degreeCelsius;

public:
	void setFahrenheit(float degreeFahrenheit);
	float getCelsius();
	void convertFahrenheitToCelsius();
};

#endif /* TEMP_H_ */

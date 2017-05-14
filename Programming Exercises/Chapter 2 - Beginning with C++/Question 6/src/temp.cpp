/*
 * temp.cpp
 * 	Author: suyashd95
 */

#include "temp.h"

void Temp::setFahrenheit(float degreeFahrenheit) {

	this->degreeFahrenheit = degreeFahrenheit;
}

float Temp::getCelsius() {

	return degreeCelsius;
}

void Temp::convertFahrenheitToCelsius() {

	const float FAHRENHEIT_CONSTANT = 0.5556; // or 5 / 9

	degreeCelsius = (degreeFahrenheit - 32) * FAHRENHEIT_CONSTANT;
}



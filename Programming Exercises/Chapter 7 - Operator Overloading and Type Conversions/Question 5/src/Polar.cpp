/*
 * Polar.cpp
 * Author: suyashd95
 */

#include "Polar.h"

#include <iostream>
#include <cmath>

Polar::Polar(): radius(0), angle(0) { };

Polar::Polar(float radius, float angle): radius(radius), angle(angle) { };

void Polar::show() {

	std::cout << "Point in Polar Coordinate System (r, a): (" << radius << ", " << angle << ")" << std::endl;
}

void Polar::putData(float radius, float angle) {

	this->radius = radius;
	this->angle = angle;
}

float Polar::degToRad(float deg) {

	return (deg * (M_PI / 180));
}

float Polar::radToDeg(float rad) {

	return (rad * (180 / M_PI));
}

Polar::operator Rectangle() {

	Rectangle rect;
	rect.x = radius * cos(degToRad(angle));
	rect.y = radius * sin(degToRad(angle));
	return rect;
}

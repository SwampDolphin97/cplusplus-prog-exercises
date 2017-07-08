/*
 * Polar.cpp
 * Author: suyashd95
 */

#include <iostream>
#include <cmath>

#include "Polar.h"

using namespace std;

Polar::Polar(): radius(0), angle(0) {}

Polar::Polar(float radius, float angle): radius(radius), angle(angle) {}

void Polar::putdata(float radius, float angle) {

	this->radius = radius;
	this->angle = angle;
}

void Polar::show() {

	cout << "Radius = " << radius << ", Angle = " << angle << endl;
}

float Polar::degToRad(float deg) {

	return (deg * (M_PI / 180));
}

float Polar::radToDeg(float rad) {

	return (rad * (180 / M_PI));
}

Polar Polar::operator +(const Polar& p) {

	float x1 = this->radius * cos(degToRad(this->angle));
	float y1 = this->radius * sin(degToRad(this->angle));

	float x2 = p.radius * cos(degToRad(p.angle));
	float y2 = p.radius * sin(degToRad(p.angle));

	float xSum = x1 + x2;
	float ySum = y1 + y2;

	float angleSum = atan(ySum / xSum);
	float radiusSum = sqrt((xSum * xSum) + (ySum * ySum));

	return (Polar(radiusSum, radToDeg(angleSum)));
}

/*
 * Rectangle.cpp
 * Author: suyashd95
 */

#include "Rectangle.h"

#include <iostream>

Rectangle::Rectangle(): x(0), y(0) { };

Rectangle::Rectangle(float x, float y): x(x), y(y) { };

void Rectangle::show() {

	std::cout << "Point in Cartesian Coordinate System (x, y): (" << x << ", " << y << ")" << std::endl;
}

void Rectangle::putData(float x, float y) {

	this->x = x;
	this->y = y;
}

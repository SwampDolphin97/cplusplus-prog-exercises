/*
 * Rectangle.cpp
 * Author: suyashd95
 */

#include "Rectangle.h"

#include <iostream>

Rectangle::Rectangle(): x(0), y(0) { };

Rectangle::Rectangle(float x, float y): x(x), y(y) { };

float Rectangle::getX() const {

	return x;
}

float Rectangle::getY() const {

	return y;
}

void Rectangle::setX(float x) {

	this->x = x;
}

void Rectangle::setY(float y) {

	this->y = y;
}

void Rectangle::show() {

	std::cout << "Point in Cartesian Coordinate System (x, y): (" << x << ", " << y << ")" << std::endl;
}

void Rectangle::putData(float x, float y) {

	this->x = x;
	this->y = y;
}

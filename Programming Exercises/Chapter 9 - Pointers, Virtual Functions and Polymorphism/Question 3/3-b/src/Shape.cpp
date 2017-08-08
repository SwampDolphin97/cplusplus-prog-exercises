/*
 * Shape.cpp
 * Author: suyashd95
 */

#include "Shape.h"

#include <iostream>

Shape::Shape(): x(0), y(0) {}

void Shape::get_data(double x, double y) {

	this->x = x;
	this->y = y;
}

void Shape::display_area() {

	std::cout << "Shape::display_area() is invoked." << std::endl;
}

Shape::~Shape() {}

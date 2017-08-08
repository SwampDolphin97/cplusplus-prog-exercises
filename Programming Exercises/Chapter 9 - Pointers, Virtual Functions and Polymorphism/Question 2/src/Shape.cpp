/*
 * Shape.cpp
 * Author: suyashd95
 */

#include "Shape.h"

Shape::Shape(): x(0), y(0) {}

void Shape::get_data(double x, double y) {

	this->x = x;
	this->y = y;
}

void Shape::display_area() {}

Shape::~Shape() {}

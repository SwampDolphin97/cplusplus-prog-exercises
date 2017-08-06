/*
 * Circle.cpp
 * Author: suyashd95
 */

#include "Circle.h"

#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <cmath>

void Circle::display_area() {

	std::cout << "Area of Circle = " << std::fixed << std::setprecision(2) << M_PI * x * x << std::endl;
}

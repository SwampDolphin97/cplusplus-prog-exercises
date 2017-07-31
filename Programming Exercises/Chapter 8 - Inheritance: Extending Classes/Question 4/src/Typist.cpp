/*
 * Typist.cpp
 * Author: suyashd95
 */

#include "Typist.h"

Typist::Typist(): Staff(), speed(0) {}

Typist::Typist(int code, std::string name, int speed): Staff(code, name), speed(speed) {}

void Typist::input() {

	Staff::input();
	std::cout << "Enter the speed: " << std::flush;
	std::cin >> speed;
}

void Typist::display() {

	Staff::display();
	std::cout << "Speed: " << speed << std::endl;
}

int Typist::getSpeed() const {

	return speed;
}

void Typist::setSpeed(const int speed) {

	this->speed = speed;
}

/*
 * Staff.cpp
 * Author: suyashd95
 */

#include "Staff.h"

Staff::Staff(): code(0), name("") {}

Staff::Staff(int code, std::string name): code(code), name(name) {}

void Staff::input() {

	std::cout << "Enter the code: " << std::flush;
	std::cin >> code;
	std::cout << "Enter the name: " << std::flush;
	std::cin >> name;
}

void Staff::display() {

	std::cout << "Code: " << code << std::endl;
	std::cout << "Name: " << name << std::endl;
}

int Staff::getCode() const {

	return code;
}

std::string Staff::getName() const {

	return name;
}

void Staff::setCode(const int code) {

	this->code = code;
}

void Staff::setName(const std::string name) {

	this->name = name;
}

Staff::~Staff() {}

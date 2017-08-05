/*
 * Officer.cpp
 * Author: suyashd95
 */

#include "Officer.h"

Officer::Officer(): staff(), grade('\0') {}

Officer::Officer(int code, std::string name, char grade): staff(code, name), grade(grade) {};

void Officer::input() {

	staff.input();
	std::cout << "Enter the grade: " << std::flush;
	std::cin >> grade;
}

void Officer::display() {

	staff.display();
	std::cout << "Grade: " << grade << std::endl;
}

char Officer::getGrade() const {

	return grade;
}

void Officer::setGrade(const char grade) {

	this->grade = grade;
}


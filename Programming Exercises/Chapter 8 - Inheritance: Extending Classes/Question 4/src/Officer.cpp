/*
 * Officer.cpp
 * Author: suyashd95
 */

#include "Officer.h"

Officer::Officer(): Staff(), Education(), grade('\0') {}

Officer::Officer(int code, std::string name, int genQual, std::string profQual, char grade):
		Staff(code, name), Education(genQual, profQual),
		grade(grade) {};

void Officer::input() {

	Staff::input();
	Education::input();
	std::cout << "Enter the grade: " << std::flush;
	std::cin >> grade;
}

void Officer::display() {

	Staff::display();
	Education::display();
	std::cout << "Grade: " << grade << std::endl;
}

char Officer::getGrade() const {

	return grade;
}

void Officer::setGrade(const char grade) {

	this->grade = grade;
}


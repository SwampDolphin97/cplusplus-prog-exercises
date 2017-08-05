/*
 * Education.cpp
 * Author: suyashd95
 */

#include "Education.h"

Education::Education(): genQual(0), profQual("") {}

Education::Education(int genQual, std::string profQual): genQual(genQual), profQual(profQual) {}

void Education::input() {

	std::cout << "Enter the highest general qualification: " << std::flush;
	std::cin >> genQual;
	std::cout << "Enter the highest professional qualification: " << std::flush;
	std::cin >> profQual;
}

void Education::display() {

	std::cout << "Highest General Qualification: " << genQual << std::endl;
	std::cout << "Highest Professional Qualification: " << profQual << std::endl;
}

int Education::getGenQual() const {

	return genQual;
}

std::string Education::getProfQual() const {

	return profQual;
}

void Education::setGenQual(const int genQual) {

	this->genQual = genQual;
}

void Education::setProfQual(const std::string profQual) {

	this->profQual = profQual;
}

Education::~Education() {}

/*
 * Casual.cpp
 * Author: suyashd95
 */

#include "Casual.h"

Casual::Casual(): typist(), dailyWages(0.00) {}

Casual::Casual(int code, std::string name, int speed, float dailyWages):
		typist(code, name, speed), dailyWages(dailyWages) {}

void Casual::input() {

	typist.input();
	std::cout << "Enter the daily wage: " << std::flush;
	std::cin >> dailyWages;
}

void Casual::display() {

	typist.display();
	std::cout << "Daily Wage: " << std::fixed << std::setprecision(2) << dailyWages << std::endl;
}

float Casual::getDailyWages() const {

	return dailyWages;
}

void Casual::setDailyWages(const float dailyWages) {

	this->dailyWages = dailyWages;
}

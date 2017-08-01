/*
 * Casual.h
 * Author: suyashd95
 */

#ifndef CASUAL_H_
#define CASUAL_H_

#include <iostream>
#include <string>
#include <iomanip>

#include "Typist.h"

class Casual {

private:
	float dailyWages;
	Typist typist;

public:
	Casual();
	Casual(int, std::string, int, float);
	float getDailyWages() const;
	void setDailyWages(const float);
	void input();
	void display();
};

#endif /* CASUAL_H_ */

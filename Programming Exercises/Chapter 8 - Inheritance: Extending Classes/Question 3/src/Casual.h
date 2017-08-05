/*
 * Casual.h
 * Author: suyashd95
 */

#ifndef CASUAL_H_
#define CASUAL_H_

#include "Typist.h"

#include <iomanip>

class Casual: public Typist {

private:
	float dailyWages;

protected:
	float getDailyWages() const;
	void setDailyWages(const float);

public:
	Casual();
	Casual(int, std::string, int, float);
	void input();
	void display();
};

#endif /* CASUAL_H_ */

/*
 * Savacct.h
 * Author: suyashd95
 */

#ifndef SAVACCT_H_
#define SAVACCT_H_

#include "Account.h"

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

class Sav_acct: public Account {

private:
	static const float INTEREST_RATE = 0.1;
	static const int TIMES_COMPOUNDED_PER_YEAR = 4;
	static const int NUMBER_OF_YEARS = 5;

private:
	static float passPositiveBalanceToBase(float);

public:
	Sav_acct();
	Sav_acct(std::string, int, float);
	void populateData();
	void displayData() const;
	void calculateInterest();
	void withdrawAmount();
};

#endif /* SAVACCT_H_ */

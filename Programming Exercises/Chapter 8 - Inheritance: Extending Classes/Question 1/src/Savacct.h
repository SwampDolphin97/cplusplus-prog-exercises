/*
 * Savacct.h
 * Author: suyashd95
 */

#ifndef SAVACCT_H_
#define SAVACCT_H_

#include <iostream>
#include <cmath>

#include "Account.h"

class Sav_acct: public Account {

private:
	float balance;
	static const float INTEREST_RATE = 0.1;
	static const int TIMES_COMPOUNDED_PER_YEAR = 4;
	static const int NUMBER_OF_YEARS  = 5;

public:
	void populateData();
	void displayBalance() const;
	void calculateInterest();
	void updateBalance();
	void withdrawAmount();
	void displayData() const;
};

#endif /* SAVACCT_H_ */

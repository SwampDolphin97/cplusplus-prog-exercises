/*
 * Curacct.h
 * Author: suyashd95
 */

#ifndef CURACCT_H_
#define CURACCT_H_

#include <iostream>
#include <iomanip>
#include <string>

#include "Account.h"

class Cur_acct: public Account {

private:
	static const float MIN_BALANCE = 500.00;
	static const float PENALTY_COST = 100.00;

private:
	static float passBalanceToBase(float);
	bool checkBalance() const;

public:
	Cur_acct();
	Cur_acct(std::string, int, float);
	void withdrawAmount();
	void populateData();
	void displayData() const;
};

#endif /* CURACCT_H_ */

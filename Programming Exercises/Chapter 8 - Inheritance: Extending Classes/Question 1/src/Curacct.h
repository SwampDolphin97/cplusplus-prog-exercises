/*
 * Curacct.h
 * Author: suyashd95
 */

#ifndef CURACCT_H_
#define CURACCT_H_

#include <iostream>

#include "Account.h"

class Cur_acct: public Account {

private:
	float balance;
	static const float MIN_BALANCE = 500.00;
	static const float PENALTY_COST = 100.00;

private:
	bool checkBalance() const;

public:
	void populateData();
	void displayBalance() const;
	void updateBalance();
	void withdrawAmount();
	void displayData() const;
};

#endif /* CURACCT_H_ */

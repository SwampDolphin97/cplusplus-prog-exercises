/*
 * Account.h
 * Author: suyashd95
 */

#ifndef ACCOUNT_H_
#define ACCOUNT_H_

#include <iostream>
#include <iomanip>
#include <string>

class Account {

protected:
	std::string customerName;
	int accountNumber;
	std::string accountType;
	float balance;

private:
	virtual void withdrawAmount() = 0;

protected:
	virtual void populateData() = 0;
	virtual void displayData() const = 0;

protected:
	Account(std::string, float balance = 0.00);
	Account(std::string, int, std::string, float);
	~Account();

public:
	void updateBalance();
};

#endif /* ACCOUNT_H_ */

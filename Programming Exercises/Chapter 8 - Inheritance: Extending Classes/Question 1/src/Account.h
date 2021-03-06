/*
 * Account.h
 * Author: suyashd95
 */

#ifndef ACCOUNT_H_
#define ACCOUNT_H_

#include <iostream>
#include <string>

class Account {

private:
	std::string customerName;
	int accountNumber;
	std::string accountType;

protected:
	std::string getCustomerName() const;
	int getAccountNumber() const;
	std::string getAccountType() const;
	void setCustomerName(const std::string);
	void setAccountNumber(const int);
	void setAccountType(const std::string);

public:
	void displayData() const;
	void populateData();
};

#endif /* ACCOUNT_H_ */

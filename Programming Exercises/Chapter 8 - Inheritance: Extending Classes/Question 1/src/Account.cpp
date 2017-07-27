/*
 * Account.cpp
 * Author: suyashd95
 */

#include "Account.h"

std::string Account::getCustomerName() const {

	return customerName;
}

int Account::getAccountNumber() const {

	return accountNumber;
}

std::string Account::getAccountType() const {

	return accountType;
}

void Account::setCustomerName(const std::string customerName) {

	this->customerName = customerName;
}

void Account::setAccountNumber(const int accountNumber) {

	this->accountNumber = accountNumber;
}

void Account::setAccountType(const std::string accountType) {

	this->accountType = accountType;
}

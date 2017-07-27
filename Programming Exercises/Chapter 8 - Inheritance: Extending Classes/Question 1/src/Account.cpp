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

void Account::displayData() const {

	std::cout << "Customer Name: " << customerName << std::endl;
	std::cout << "Account Number: " << accountNumber << std::endl;
	std::cout << "Account Type: " << accountType << std::endl;
}

void Account::populateData() {

	std::cout << "Enter the customer name: " << std::flush;
	std::cin << customerName;
	std::cout << "Enter the account number: " << std::flush;
	std::cin << accountNumber;
}

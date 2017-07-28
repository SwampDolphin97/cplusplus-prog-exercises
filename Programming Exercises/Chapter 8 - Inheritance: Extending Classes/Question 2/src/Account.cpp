/*
 * Account.cpp
 * Author: suyashd95
 */

#include "Account.h"

Account::Account(std::string accountType, float balance): customerName(""), accountNumber(0), accountType(accountType), balance(balance) {}

Account::Account(std::string customerName, int accountNumber, std::string accountType, float balance): customerName(customerName), accountNumber(accountNumber),
																									   accountType(accountType), balance(balance) {}

virtual void Account::populateData() {

	std::cout << "Enter the name of the customer: " << std::flush;
	std::cin >> customerName;
	std::cout << "Enter the account number: " << std::flush;
	std::cin >> accountNumber;
}

virtual void Account::displayData() const {

	std::cout << "Customer Name: " << customerName << std::endl;
	std::cout << "Account Number: " << accountNumber << std::endl;
	std::cout << "Account Type: " << accountType << std::endl;
	std::cout << accountType << " Account Balance: " << balance << std::endl;
}

void Account::updateBalance() {

	std::cout << "Enter the amount to be deposited into your " << accountType << " account: " << std::flush;
	float amount;
	std::cin >> amount;
	balance += amount;

	std::cout << "\nRs. " << std::fixed << std::setprecision(2) << amount << " has been successfully deposited into your account." << std::endl;
	std::cout << "New " << accountType << " Account's Balance: " << balance << std::endl;
}

Account::~Account() {};

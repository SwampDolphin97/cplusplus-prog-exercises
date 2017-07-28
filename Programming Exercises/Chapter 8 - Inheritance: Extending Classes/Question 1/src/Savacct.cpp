/*
 * Savacct.cpp
 * Author: suyashd95
 */

#include "Savacct.h"

void Sav_acct::populateData() {

	std::cout << "Creating a savings account for the customer...\n" << std::endl;
	Account::populateData();
	Account::setAccountType("Savings");

	while(true) {

		float temp;
		std::cout << "Enter the initial balance amount: " << std::flush;
		std::cin >> temp;

		if(temp > 0) {

			balance = temp;
			break;
		}
		else {

			std::cout << "\nERROR: Balance amount needs to be greater than 0.00.. Please try again.\n"
					  << std::endl;
		}
	}

	std::cout << "\nThe savings account of the customer has been successfully created.\n" << std::endl;
}

void Sav_acct::displayBalance() const {

	std::cout << "Savings Account's Balance: " << std::fixed << std::setprecision(2) << balance << std::endl;
}

void Sav_acct::updateBalance() {

	std::cout << "Enter the amount to be deposited into your savings account: " << std::flush;
	float amount;
	std::cin >> amount;
	balance += amount;

	std::cout << "\nRs. " << std::fixed << std::setprecision(2) << amount << " has been successfully deposited into your account." << std::endl;
	std::cout << "New " << std::flush;
	displayBalance();
	std::cout << std::endl;
}

void Sav_acct::calculateInterest() {

	float amount;

	std::cout << "Calculating Compound Interest where:\nP = " << std::fixed << std::setprecision(2) << balance << "\nR = " << INTEREST_RATE * 100
			  << "\nn = " << TIMES_COMPOUNDED_PER_YEAR << "\nt = " << NUMBER_OF_YEARS << "\n" << std::endl;

	balance = (amount = balance * pow((1 + INTEREST_RATE / float(TIMES_COMPOUNDED_PER_YEAR)), (TIMES_COMPOUNDED_PER_YEAR * NUMBER_OF_YEARS)));

	std::cout << "Total Amount Accrued (New Savings Account Balance): " << std::fixed << std::setprecision(2) << balance << "\n" << std::endl;
}

void Sav_acct::withdrawAmount() {

	std::cout << "Enter the amount to be withdrawn from your savings account: " << std::flush;
	float amount;
	std::cin >> amount;

	if(amount <= balance) {

		balance -= amount;
		std::cout << "\nRs. " << std::fixed << std::setprecision(2) << amount << " has been successfully withdrawn from your account." << std::endl;
		std::cout << "Remaining " << std::flush;
		displayBalance();
		std::cout << std::endl;
	}
	else {

		std::cout << "\nERROR: The withdrawal amount is greater than the balance of your account. Hence, "
				  << "this transaction has been terminated." << std::endl;
		std::cout << "Existing " << std::flush;
		displayBalance();
		std::cout << std::endl;
	}
}

void Sav_acct::displayData() const {

	std::cout << "Displaying customer details...\n" << std::endl;
	Account::displayData();
	std::cout << "Cheque Book Facility Available: No" << std::endl;
	displayBalance();
	std::cout << std::endl;
}

/*
 * Curacct.cpp
 * Author: suyashd95
 */

#include "Curacct.h"

void Cur_acct::populateData() {

	std::cout << "Creating a current account for the customer...\n" << std::endl;
	Account::populateData();
	Account::setAccountType("Current");

	while(true) {

		float temp;
		std::cout << "Enter the initial balance amount: " << std::flush;
		std::cin >> temp;

		if(temp >= MIN_BALANCE) {

			balance = temp;
			break;
		}
		else {

			std::cout << "\nERROR: Initial balance amount is less than the required minimum "
					  << " balance amount (" << MIN_BALANCE << ").. Please try again.\n"
					  << std::endl;
		}
	}

	std::cout << "\nThe current account of the customer has been successfully created.\n"
			  << std::endl;
}

void Cur_acct::displayBalance() const {

	std::cout << "Current Account's Balance: " << balance << std::endl;
}

void Cur_acct::updateBalance() {

	std::cout << "Enter the amount to be deposited into your current account: " << std::flush;
	float amount;
	std::cin >> amount;
	balance += amount;

	std::cout << "\nRs. " << amount << " has been successfully deposited into your account." << std::endl;
	std::cout << "New " << std::flush;
	displayBalance();
	std::cout << std::endl;
}

bool Cur_acct::checkBalance() const {

	return balance >= MIN_BALANCE;
}

void Cur_acct::withdrawAmount() {

	std::cout << "Enter the amount to be withdrawn from your current account: " << std::flush;
	float amount;
	std::cin >> amount;

	if(!checkBalance()) {

		std::cout << "\nNOTICE: Your balance is less than the required minimum balance. Hence, service charge"
				  << " of Rs. " << PENALTY_COST << " has been imposed." << std::endl;

		if(balance < PENALTY_COST)
			balance = 0.00;
		else
			balance -= PENALTY_COST;

		std::cout << "After deduction of service charge, the " << std::flush;
		displayBalance();
		std::cout << std::endl;
	}

	if(amount <= balance) {

		std::cout << "\nRs. " << amount << " has been successfully withdrawn from your account." << std::endl;
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

void Cur_acct::displayData() const {

	Account::displayData();
	std::cout << "Cheque Book Facility Available: Yes" << std::endl;
	displayBalance();
}




/*
 * Curacct.cpp
 * Author: suyashd95
 */

#include "Curacct.h"

Cur_acct::Cur_acct(): Account("Current", MIN_BALANCE) {};

Cur_acct::Cur_acct(std::string customerName, int accountNumber, float balance):
		Account(customerName, accountNumber, "Current", passBalanceToBase(balance)) {};

float Cur_acct::passBalanceToBase(float balance) {

	if(balance < Cur_acct::MIN_BALANCE)
		return Cur_acct::MIN_BALANCE;
	else
		return balance;
}

bool Cur_acct::checkBalance() const {

	return balance >= MIN_BALANCE;
}

void Cur_acct::populateData() {

	std::cout << "Creating a current account for the customer...\n" << std::endl;
	Account::populateData();

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
					  << "balance amount (" << MIN_BALANCE << ").. Please try again.\n"
					  << std::endl;
		}
	}

	std::cout << "\nThe current account of the customer has been successfully created.\n" << std::endl;
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

		std::cout << "After deduction of service charge, the " << accountType << " Account's Balance: "
				  << std::fixed << std::setprecision(2) << balance << "\n" << std::endl;
	}

	if(amount <= balance) {

		balance -= amount;
		std::cout << "\nRs. " << std::fixed << std::setprecision(2) << amount << " has been successfully withdrawn from your account." << std::endl;
		std::cout << "Remaining " << accountType << " Account's Balance: " << std::fixed << std::setprecision(2) << balance << "\n" << std::endl;
	}
	else {

		std::cout << "\nERROR: The withdrawal amount is greater than the balance of your account. Hence, this transaction has been terminated." << std::endl;
		std::cout << "Existing " << accountType << " Account's Balance: " << std::fixed << std::setprecision(2) << balance << "\n" << std::endl;
	}
}

void Cur_acct::displayData() const {

	std::cout << "Displaying customer details...\n" << std::endl;
	Account::displayData();
	std::cout << "Cheque Book Facility Available: Yes" << std::endl;
	std::cout << std::endl;
}

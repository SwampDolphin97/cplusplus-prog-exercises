/*
 * Depositor.cpp
 * Author: suyashd95
 */

#include <iostream>

#include "Depositor.h"

using namespace std;

int const Depositor::size = 10;

Depositor::Depositor() {

	for(int i = 0; i < size; i++) {

		name[i] = "";
		accountNumber[i] = 0;
		accountType[i] = 0;
		balance[i] = 0.00;
	}
}

void Depositor::assignInfo() {

	string name;
	int accountNo, accountType;
	double balance;

	cout << "Entering details of the depositors...\n" << endl;
	for(int i = 0; i < size; i++) {

		cout << endl;
		cout << "Enter the name of depositor " << i + 1 << ": " << flush;
		cin >> name;
		this->name[i] = name;

		cout << "Enter the account number of depositor " << i + 1 << ": " << flush;
		cin >> accountNo;
		this->accountNumber[i] = accountNo;

		cout << "Enter the account type of depositor " << i + 1 << ": 1. Saving\t2. Current\nPress the key depending on you choice:" << flush;
		cin >> accountType;
		accountType == 1 ? this->accountType[i] = 1 : this->accountType[i] = 2;

		cout << "Enter the balance of depositor " << i + 1 << ": " << flush;
		cin >> balance;
		this->balance[i] = balance;
	}

	cout << "\nInfo regarding all the " << size << " depositors have been successfully entered into our database." << endl;
}

void Depositor::depositAmount(double amount) {

	cout << "\nDepositing amount..." << endl;
	int accNum;
	cout << "Enter the account number: " << flush;
	cin >> accNum;

	for(int i = 0; i < size; i++)
		if(accNum == accountNumber[i])
			balance[i] += amount;

	cout << "Transaction Successful: Amount has been successfully deposited into your account." << endl;
}

void Depositor::withdrawAmount(double amount) {

	cout << "\nWithdrawing amount..." << endl;
	int accNum;
	cout << "Enter the account number: " << flush;
	cin >> accNum;

	for(int i = 0; i < size; i++) {

		if (accNum == accountNumber[i]) {
			if (amount <= balance[i]) {

				balance[i] -= amount;
				cout << "Transaction Successful: Rs. " << amount << " has been successfully withdrawn." << endl;
			}
			else {

				cout << "Transaction Failed. Not enough balance." << endl;
			}
		}
	}
}

void Depositor::displayInfo() {

	for(int i = 0; i < size; i++) {

		cout << endl;
		cout << "Displaying Depositor " << i + 1 << "'s details...\n" << endl;
		cout << "Name of the Depositor: " << name[i] << endl;
		cout << "Account Balance: " << balance[i] << endl;
	}
}






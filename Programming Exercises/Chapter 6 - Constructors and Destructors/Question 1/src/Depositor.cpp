/*
 * Depositor.cpp
 * Author: suyashd95
 */

#include <iostream>

#include "Depositor.h"

using namespace std;

void Depositor::assignInfo(string name, int accountNo, int accountType, double balance) {

	this->name = name;
	this->accountNumber = accountNo;
	accountType == 1 ? this->accountType = 1 : this->accountType = 2;
	this->balance = balance;
	cout << "Info regarding the depositor has been successful entered into our database." << endl;
}

void Depositor::depositAmount(double amount) {

	balance += amount;
	cout << "Transaction Successful: Amount has been successfully deposited into your account." << endl;
}

void Depositor::withdrawAmount(double amount) {

	if(amount <= balance) {

		balance -= amount;
		cout << "Transaction Successful: Rs. " << amount << " has been successfully withdrawn." << endl;
	}
	else {

		cout << "Transaction Failed. Not enough balance." << endl;
	}
}

void Depositor::displayInfo() {

	cout << "Displaying Depositor's details...\n" << endl;
	cout << "Name of the Depositor: " << name << endl;
	cout << "Account Balance: " << balance << endl;
}

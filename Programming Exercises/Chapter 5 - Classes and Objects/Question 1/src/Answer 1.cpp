/*
 * Answer 1.cpp
 * Author: suyashd95
 */

#include <iostream>

#include "Depositor.h"

using namespace std;

int main() {

	Depositor depositor;

	cout << "Enter the information about the depositor...\n" << endl;

	string name;
	cout << "Enter name: " << flush;
	cin >> name;

	int accountNo;
	cout << "Enter account number: " << flush;
	cin >> accountNo;

	int accountType;
	cout << "Type of Account: 1. Saving\t2. Current\nPress either 1 or 2 depending on your choice: " << flush;
	cin >> accountType;

	double balance;
	cout << "Enter your account balance: " << flush;
	cin >> balance;

	depositor.assignInfo(name, accountNo, accountType, balance);

	cout << endl;
	cout << "Your initial account status..." << endl;
	depositor.displayInfo();

	cout << endl;
	double depositAmount;
	cout << "Make your first initial deposit to your account: " << flush;
	cin >> depositAmount;
	depositor.depositAmount(depositAmount);

	cout << endl;
	cout << "Account status after Deposit..." << endl;
	depositor.displayInfo();

	cout << endl;
	double withdrawAmount;
	cout << "Enter an amount to withdraw from your account: " << flush;
	cin >> withdrawAmount;
	depositor.withdrawAmount(withdrawAmount);

	cout << endl;
	cout << "Account status after Withdrawal..." << endl;
	depositor.displayInfo();

	return 0;
}




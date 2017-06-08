/*
 * Depositor.h
 * Author: suyashd95
 */

#ifndef DEPOSITOR_H_
#define DEPOSITOR_H_

class Depositor {

private:
	static int const size;
	std::string name[10];
	int accountNumber[10];
	int accountType[10];
	double balance[10];

public:
	Depositor();
	void assignInfo();
	void depositAmount(double amount);
	void withdrawAmount(double amount);
	void displayInfo();
};

#endif /* DEPOSITOR_H_ */

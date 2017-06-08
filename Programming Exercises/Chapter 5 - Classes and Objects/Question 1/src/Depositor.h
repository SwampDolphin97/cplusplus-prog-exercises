/*
 * Depositor.h
 * Author: suyashd95
 */

#ifndef DEPOSITOR_H_
#define DEPOSITOR_H_

class Depositor {

private:
	std::string name;
	int accountNumber;
	enum accountTypes {Saving, Current};
	int accountType;
	double balance;

public:
	Depositor(): name(""), accountNumber(0), accountType(Saving), balance(0.00) {};
	void assignInfo(std::string, int accountNo, int accountType, double balance);
	void depositAmount(double amount);
	double withdrawAmount(double amount);
	void displayInfo();
};



#endif /* DEPOSITOR_H_ */

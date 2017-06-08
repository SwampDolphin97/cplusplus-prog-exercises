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
	enum class accountTypes {None, Saving, Current};
	int accountType;
	double balance;

public:
	Depositor(): name(""), accountNumber(0), accountType(accountTypes::Saving), balance(0.00) {};
	void assignInfo(std::string name, int accountNo, int accountType, double balance);
	void depositAmount(double amount);
	void withdrawAmount(double amount);
	void displayInfo();
};

#endif /* DEPOSITOR_H_ */

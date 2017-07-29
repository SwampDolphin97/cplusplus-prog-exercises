/*
 * Answer 2.cpp
 * Author: suyashd95
 */

#include <iostream>

#include "Curacct.h"
#include "Savacct.h"

using namespace std;

int main() {

	cout << "In C1...\n" << std::endl;
	Cur_acct c1;
	c1.displayData();
	c1.populateData();
	c1.displayData();

	cout << "In C2...\n" << std::endl;
	Cur_acct c2("Suyash", 1, 600);
	c2.displayData();
	c2.updateBalance();
	c2.withdrawAmount();
	c2.displayData();

	cout << "In S1...\n" << std::endl;
	Sav_acct s1;
	s1.displayData();
	s1.populateData();
	s1.displayData();

	cout << "In S2...\n" << std::endl;
	Sav_acct s2("Suyash", 1, 400);
	s2.displayData();
	s2.updateBalance();
	s2.calculateInterest();
	s2.withdrawAmount();
	s2.displayData();

	return 0;
}



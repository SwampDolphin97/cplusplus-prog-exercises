/*
 * Answer 2.cpp
 * Author: suyashd95
 */

#include <iostream>

#include "Curacct.h"

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

	return 0;
}



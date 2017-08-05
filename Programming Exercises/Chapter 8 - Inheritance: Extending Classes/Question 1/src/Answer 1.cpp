/*
 * Answer 1.cpp
 * Author: suyashd95
 */

#include <iostream>

#include "Savacct.h"
#include "Curacct.h"

using namespace std;

int main() {

	Sav_acct s1;
	Cur_acct c1;

	s1.populateData();
	s1.updateBalance();
	s1.calculateInterest();
	s1.withdrawAmount();
	s1.displayData();

	c1.populateData();
	c1.updateBalance();
	c1.withdrawAmount();
	c1.displayData();

	return 0;
}




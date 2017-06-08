/*
 * Answer 3.cpp
 * Author: suyashd95
 */

#include <iostream>

#include "Depositor.h"

using namespace std;

int main() {

	Depositor depositors;

	depositors.assignInfo();
	depositors.depositAmount(500);
	depositors.depositAmount(250);
	depositors.withdrawAmount(50);
	depositors.displayInfo();

	return 0;
}



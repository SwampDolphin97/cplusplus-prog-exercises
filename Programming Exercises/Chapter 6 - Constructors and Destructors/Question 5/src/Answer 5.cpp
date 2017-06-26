/*
 * Answer 5.cpp
 * Author: suyashd95
 */

#include <iostream>

#include "Books.h"

using namespace std;

int main() {

	Books book;

	Books* p_book = &book;

	void (Books::*p_bookPurchase)() = &Books::bookPurchase;
	void (Books::*p_changePrice)() = &Books::changePrice;
	void (Books::*p_displayInventory)() = &Books::displayInventory;

	int ch;
	do {

		cout << "1. Purchase Books\t2. Change Price\n3. Display Inventory\t4. Show Statistics\n5. Quit\nPlease enter your option: " << flush;
		cin >> ch;
		cout << endl;

		switch(ch) {

		case 1:
			(p_book->*p_bookPurchase)();
			break;

		case 2:
			(p_book->*p_changePrice)();
			break;

		case 3:
			(p_book->*p_displayInventory)();
			break;

		case 4:
			Books::showStats();
			break;

		case 5:
			cout << "Program Terminated." << endl;
			break;

		default:
			cout << "Please select a valid option (1 to 4) " << endl;
			break;
		}

	} while(ch != 5);

	return 0;
}




/*
 * Answer 4.cpp
 * Author: suyashd95
 */

#include <iostream>

#include "Books.h"

using namespace std;

int main() {

	Books book;

	int ch;
	do {

		cout << "1. Purchase Books\t2. Change Price\n3. Display Inventory\t4. Quit\nPlease enter your option: " << flush;
		cin >> ch;
		cout << endl;

		switch(ch) {

		case 1:
			book.bookPurchase();
			break;

		case 2:
			book.changePrice();
			break;

		case 3:
			book.displayInventory();
			break;

		case 4:
			cout << "Program Terminated." << endl;
			break;

		default:
			cout << "Please select a valid option (1 to 4) " << endl;
			break;
		}

	} while(ch != 4);

	book.bookPurchase();
	book.changePrice();

	return 0;
}

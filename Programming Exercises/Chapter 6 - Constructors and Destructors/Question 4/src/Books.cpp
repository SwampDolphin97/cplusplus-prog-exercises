/*
 * Books.cpp
 * Author: suyashd95
 */

#include "Books.h"

#include <iostream>
#include <cstring>

using namespace std;

int Books::successfulTransactions = 0;
int Books::unsuccessfulTransactions = 0;

Books::Books() {

	stock = new int[size];
	price = new float[size];
	author = new const char*[size];
	publisher = new const char*[size];
	title = new const char*[size];

	populateData();
}

void Books::populateData() {

	for(int i = 0; i < size; i++) {

		switch(i) {

		case 0:
			stock[i] = 10;
			price[i] = 500.00;
			author[i] = "JK Rowling";
			publisher[i] = "Bloomsbury";
			title[i] = "Harry Potter";
			break;

		case 1:
			stock[i] = 0;
			price[i] = 200.00;
			author[i] = "Jeffrey Archer";
			publisher[i] = "Penguin";
			title[i] = "A Quiver Full Of Arrows";
			break;

		case 2:
			stock[i] = 3;
			price[i] = 1000.00;
			author[i] = "JKR Tolkien";
			publisher[i] = "Penguin";
			title[i] = "The Lord Of The Rings";
			break;

		case 3:
			stock[i] = 0;
			price[i] = 80.00;
			author[i] = "Danielle Steele";
			publisher[i] = "Penguin";
			title[i] = "A Perfect Stranger";
			break;

		case 4:
			stock[i] = 7;
			price[i] = 300.00;
			author[i] = "Jane Austen";
			publisher[i] = "Bloomsbury";
			title[i] = "Pride & Prejudice";
			break;
		}
	}
}

void Books::bookPurchase() {

	cin.ignore();
	string author, title;
	cout << "Enter the author of the book: " << flush;
	getline(cin, author, '\n');
	cout << "Enter the title of the book: " << flush;
	getline(cin, title, '\n');

	char found = 'n';
	for(int i = 0; i < size; i++) {

		int condition1 = strcmp(this->author[i], author.c_str());
		int condition2 = strcmp(this->title[i], title.c_str());

		if(condition1 == 0 &&  condition2 == 0) {

			found = 'y';
			cout << endl;
			cout << "Search Successful..." << endl;
			cout << "Details of the Book:\n" << endl;
			cout << "   Author: " << this->author[i] << endl;
			cout << "    Title: " << this->title[i] << endl;
			cout << "Publisher: " << this->publisher[i] << endl;
			cout << "    Price: " << this->price[i] << endl;

			unsigned int requiredCopies;
			cout << "\nPlease enter the number of copies required for purchase: " << flush;
			cin >> requiredCopies;

			cout << endl;
			if(requiredCopies <= this->stock[i]) {

				successfulTransactions++;
				this->stock[i] -= requiredCopies;
				cout << "Total Cost: " << this->price[i] * requiredCopies << endl << endl;
			}
			else {

				unsuccessfulTransactions++;
				cout << "Required copies not in stock.\n" << endl;
			}
			break;
		}
	}

	if(found == 'n') {

		unsuccessfulTransactions++;
		cout << "\nSearch Unsuccessful...\nBook is not available.\n" << endl;
	}
}

void Books::changePrice() {

	cin.ignore();
	cout << "Changing price of a Book in the inventory...\n" << endl;
	string author;
	cout << "Enter the name of the author: " << flush;
	getline(cin >> ws, author, '\n');
	string title;
	cout << "Enter the title of the book: " << flush;
	getline(cin >> ws, title, '\n');

	char found = 'n';
	for(int i = 0; i < size; i++) {

		if(strcmp(this->author[i], author.c_str()) == 0 && strcmp(this->title[i], title.c_str()) == 0) {

			cout << endl;
			cout << "The current price of the book: " << price[i] << endl;
			float newPrice = 0.00;
			cout << "Enter the new price of the book: " << flush;
			cin >> newPrice;
			price[i] = newPrice;

			cout << endl;
			cout << "Price of the book has been successfully changed." << endl;
			cout << "The new price of the book: " << price[i] << endl<< endl;

			found = 'y';
			break;
		}
	}

	if(found == 'n')
		cout << "\nBook not found." << endl;
}

void Books::displayInventory() {

	cout << "Displaying the Book inventory....\n" << endl;

	for(int i = 0; i < size; i++) {

		cout << "   Author: " << author[i] << endl;
		cout << "    Title: " << title[i] << endl;
		cout << "Publisher: " << publisher[i] << endl;
		cout << "    Price: " << price[i] << endl;
		cout << endl;
	}
}


void Books::showStats() {

	cout << "Number of successful transactions: " << successfulTransactions << endl;
	cout << "Number of unsuccessful transactions: " << unsuccessfulTransactions << endl;
	cout << endl;
}

Books::~Books() {

	delete [] stock;
	delete [] price;
	delete [] author;
	delete [] publisher;
	delete [] title;
}

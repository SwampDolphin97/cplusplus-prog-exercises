/*
 * Books.cpp
 * Author: suyashd95
 */

#include "Books.h"

#include <iostream>

using namespace std;

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

Books::~Books() {

	delete [] stock;
	delete [] price;
	delete [] author;
	delete [] publisher;
	delete [] title;
}

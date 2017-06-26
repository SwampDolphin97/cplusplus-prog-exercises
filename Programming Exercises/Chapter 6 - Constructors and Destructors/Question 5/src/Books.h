/*
 * Books.h
 * Author: suyashd95
 */

#ifndef BOOKS_H_
#define BOOKS_H_

class Books {

private:
	const char** author;
	const char** title;
	const char** publisher;
	float* price;
	int* stock;
	static int const size = 5;
	static int successfulTransactions;
	static int unsuccessfulTransactions;

private:
	void populateData();

public:
	Books();
	void bookPurchase();
	void displayInventory();
	void changePrice();
	static void showStats();
	~Books();
};

#endif /* BOOKS_H_ */

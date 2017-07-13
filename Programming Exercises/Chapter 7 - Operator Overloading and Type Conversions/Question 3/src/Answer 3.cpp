/*
 * Answer 3.cpp
 * Author: suyashd95
 */

#include <iostream>

#include "MAT.h"

using namespace std;

int main() {

	{
		MAT m1;
		cout << endl;
		m1.populateMatrix();
		m1.displayMatrix();
	}

	{
		MAT m2(2, 2);
		m2.displayMatrix();
		cout << endl;
		m2.populateMatrix();
		cout << endl;
		m2.displayMatrix();
		cout << endl;
	}

	return 0;
}

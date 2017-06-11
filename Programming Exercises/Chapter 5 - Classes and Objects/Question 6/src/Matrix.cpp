/*
 * Matrix.cpp
 * Author: suyashd95
 */

#include <iostream>

#include "Matrix.h"

using namespace std;

void Matrix::read() {

	cout << "\nEnter the elements of the 3 x 3 matrix..." << endl;
	for(int i = 0; i < 3; i++) {

		for(int j = 0; j < 3; j++) {

			cout << "matrix[" << i << "][" << j << "] = " << flush;
			cin >> matrix[i][j];
		}
	}
	cout << endl;
}

void Matrix::display() const {

	for(int i = 0; i < 3; i++) {

		cout << endl;
		for(int j = 0; j < 3; j++) {

			cout << matrix[i][j] << "\t" << flush;
		}
	}
	cout << "\n" << endl;
}


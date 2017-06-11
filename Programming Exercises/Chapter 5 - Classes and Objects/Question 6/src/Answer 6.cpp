/*
 * Answer 6.cpp
 * Author: suyashd95
 */

#include <iostream>

#include "Matrix.h"

using namespace std;

Matrix multiplyMatrices(const Matrix& m1, const Matrix& m2);

int main() {

	Matrix m1;

	cout << "Populating matrix 1..." << endl;
	m1.read();
	cout << "Displaying matrix 1..." << endl;
	m1.display();

	Matrix m2;

	cout << "Populating matrix 2..." << endl;
	m2.read();
	cout << "Displaying matrix 2..." << endl;
	m2.display();

	Matrix m3;
	m3 = multiplyMatrices(m1, m2);
	cout << "Displaying the product matrix..." << endl;
	m3.display();

	return 0;
}

Matrix multiplyMatrices(const Matrix& m1, const Matrix& m2) {

	Matrix m3;

	for(int i = 0; i < 3; i++) {

		for(int n = 0; n < 3; n++) {

			m3.matrix[i][n] = 0;
			for(int j = 0; j < 3; j++) {

				m3.matrix[i][n] += (m1.matrix[i][j] * m2.matrix[j][n]);
			}
		}
	}

	return m3;
}



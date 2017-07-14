/*
 * Answer 3.cpp
 * Author: suyashd95
 */

#include <iostream>

#include "MAT.h"

using namespace std;

int main() {

	MAT m1(2, 2);
	m1.populateMatrix();
	cout << endl;

	MAT m2(2, 2);
	m2.populateMatrix();
	cout << endl;

	MAT m3, m4;
	if(m3 == m1)
		cout << "m3 is equal to m1." << endl;
	else
		cout << "m3 is not equal to m1." << endl;

	MAT m3 = m1 + m2;
	m3.displayMatrix();
	cout << endl;

	MAT m4;
	m4 = m1 + m2 + m3;

	MAT m5;
	m5 = m4;
	m5.displayMatrix();
	cout << endl;

	MAT m6;
	m6 = m4 - m3;
	m6.displayMatrix();
	cout << endl;

	return 0;
}

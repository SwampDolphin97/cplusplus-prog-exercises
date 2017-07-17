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
//	-m1;
//	m1 = m1 * 5;
//	MAT m7 = 10 * m1;
	m1.displayMatrix();
	cout << endl;

	MAT m2(3, 2);
	m2.populateMatrix();
	m2.displayMatrix();
	cout << endl;

	MAT m3;
	m3 = m1 * m2;
	m3.displayMatrix();
	cout << endl;


//	MAT m3, m4;
//	-m3;
//	m3.displayMatrix();

//	if(!m1)
//		cout << "True" << endl;
//	else
//		cout << "False" << endl;


//	MAT m3 = m1 + m2;
//	m3.displayMatrix();
//	cout << endl;
//
//	MAT m4;
//	m4 = m1 + m2 + m3;
//
//	MAT m5;
//	m5 = m4;
//	m5.displayMatrix();
//	cout << endl;
//
//	MAT m6;
//	m6 = m4 - m3;
//	m6.displayMatrix();
//	cout << endl;

	return 0;
}

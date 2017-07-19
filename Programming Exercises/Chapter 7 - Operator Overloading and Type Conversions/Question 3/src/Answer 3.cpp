/*
 * Answer 3.cpp
 * Author: suyashd95
 */

#include <iostream>

#include "MAT.h"

using namespace std;

int main() {

	MAT m1(2, 2);
	cout << m1 << endl;
	cin >> m1;
	-m1;
	m1 = m1 * 5;
	MAT m7 = 10 * m1;

	cout << m1 << endl;

	MAT m2(3, 2);
	cin >> m2;
	cout << endl;

	MAT m3;
	m3 = m1 * m2;
	cout << m3 << endl;


	MAT m8, m4;
	-m8;
	cout << m8 << endl;

	if(!m1)
		cout << "True" << endl;
	else
		cout << "False" << endl;

	return 0;
}

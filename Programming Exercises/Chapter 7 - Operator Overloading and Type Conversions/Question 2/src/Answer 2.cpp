/*
 * Answer 2.cpp
 * Author: suyashd95
 */

#include <iostream>

#include "Polar.h"

using namespace std;

int main() {

	Polar p1, p2(10, 30);
	p1.putdata(15, 45);

	cout << "P1: " << flush; p1.show();
	cout << "P2: " << flush; p2.show();

	Polar p3;
	p3 = p1 + p2;
	cout << "\nSum of Points p1 & p2 (p3): " << flush; p3.show();

	return 0;
}

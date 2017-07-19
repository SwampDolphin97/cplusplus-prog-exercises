/*
 * Answer 5.cpp
 * Author: suyashd95
 */

#include <iostream>

#include "Polar.h"
#include "Rectangle.h"

using namespace std;

int main() {

	cout << "Converting from Polar to Rectangle...\n" << endl;
	Polar p1;

	p1.putData(5, 30);
	p1.show();

	Rectangle r1;
	r1 = p1;
	r1.show();

	cout << endl;
	Polar p2(10, 60);
	p2.show();

	Rectangle r2;
	r2 = Rectangle(p2);
	r2.show();

	cout << "\nConverting from Rectangle to Polar...\n" << endl;
	Rectangle r3;

	r3.putData(10, 20);
	r3.show();

	Polar p3;
	p3 = r3;
	p3.show();

	cout << endl;
	Rectangle r4(4.33013, 2.5);
	r4.show();

	Polar p4;
	p4 = Polar(r4);
	p4.show();

	return 0;
}



/*
 * Answer 4.cpp
 * Author: suyashd95
 */

#include <iostream>

#include "Vector.h"

using namespace std;

int main() {

	Vector vector;

	bool quit = false;
	do {

		int op;
		cout << "1. Create a vector\t2. Modify vector\n3. Multiply vector by a scalar value\t4. Display a vector\n5. Exit" << endl;
		cin >> op;

		enum {create = 1, modify, multiply, display, exit};
		switch(op) {

		case create:
			vector.createVector();
			break;
		case modify:
			vector.modifyVector();
			break;
		case multiply:
			float scalar;
			cout << "Enter the scalar value: " << flush;
			cin >> scalar;
			vector.multiplyVector(scalar);
			break;
		case display:
			cout << "The values of the vector: " << vector.displayVector() << endl;
			break;
		case exit:
			cout << "Program has been terminated." << endl;
			quit = true;
			break;
		default:
			cout << "Invalid Option Selected. Please choose a valid value (1 to 5)." << endl;
			break;
		}

		cout << endl;
	} while(!quit);

	return 0;
}



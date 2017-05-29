/*
 * Answer 9.cpp
 * 	Author: suyashd95
 */

#include <iostream>

#define PI 3.141592;

double area(int base, int height); // Area function to calculate the area of a triangle
double area(int radius); // Area function to calculate the area of a circle.

using namespace std;

int main() {

	bool exit = false;
	while(!exit) {

		enum{circle = 1, triangle, quit};
		short int ch;

		cout << "Calculation of Area:" << endl;
		cout << "1. Circle\t2. Triangle\t3. Quit\nPress the number corresponding to your choice: " << flush;
		cin >> ch;
		cout << endl;

		switch(ch) {

		case circle:
			int r;
			cout << "Enter the radius of the circle: " << flush;
			cin >> r;
			cout << "AREA of Circle -> " << area(r) << endl;
			cout << endl;
			break;

		case triangle:
			int b, h;
			cout << "Enter the base length of the triangle: " << flush;
			cin >> b;
			cout << "Enter the height of the triangle: " << flush;
			cin >> h;
			cout << "AREA of Triangle -> " << area(b, h) << endl;
			cout << endl;
			break;

		case quit:
			cout << "Program is TERMINATED." << endl;
			cout << endl;
			exit = true;
			break;

		default:
			cout << "ERROR: Please enter a valid value (between 1 to 3).\n" << endl;
		}
	}

	return 0;
}

double area(int radius) {

	return 0.0;
}

double area(int base, int height) {

	return 1.0;
}



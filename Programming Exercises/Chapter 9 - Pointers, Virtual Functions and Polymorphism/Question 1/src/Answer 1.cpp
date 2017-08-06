/*
 * Answer 1.cpp
 * Author: suyashd95
 */

#include <iostream>

#include "Rectangle.h"
#include "Triangle.h"

using namespace std;

int main() {


		Shape* bptr = new Shape;
		cout << "Whose area should be calculated?\n" << endl;
		cout << "1. Rectangle\t2. Triangle" << endl;
		cout << "Please enter a corresponding value to your desired option: " << flush;
		int op;
		cin >> op;

		cout << endl;
		enum {rectangle = 1, triangle};
		switch(op) {

		case rectangle:
		{
			bptr = new Rectangle;
			cout << "Enter the length and breadth of the rectangle: " << flush;
			double length, breadth;
			cin >> length >> breadth;
			bptr->get_data(length, breadth);
			bptr->display_area();
			break;
		}
		case triangle:
		{
			bptr = new Triangle;
			cout << "Enter the length and height of the triangle: " << flush;
			double length, height;
			cin >> length >> height;
			bptr->get_data(length, height);
			bptr->display_area();
			break;
		}
		default:
			cout << "Wrong Choice." << endl;
			break;
		}

		delete bptr;

	return 0;
}




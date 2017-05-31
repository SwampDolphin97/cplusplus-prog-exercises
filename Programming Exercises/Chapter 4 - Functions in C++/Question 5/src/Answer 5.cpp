/*
 * Answer 5.cpp
 * Author: suyashd95
 */

#include <iostream>

#define LARGEST_OF_3(x, y, z) (((x) >= (y)) && ((x) >= (z))) ? (x) : ((((y) >= (x)) && ((y) >= (z))) ? (y) : (z))

using namespace std;

int main() {

	int x, y, z;

	cout << "Enter the first number: " << flush;
	cin >> x;
	cout << "Enter the second number: " << flush;
	cin >> y;
	cout << "Enter the third number: " << flush;
	cin >> z;

	int largest = LARGEST_OF_3(x, y, z);
	cout << "\nThe largest of the three numbers (" << x << ", " << y << ", z): " << largest << endl;

	return 0;
}




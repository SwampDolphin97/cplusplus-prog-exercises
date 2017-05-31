/*
 * Answer 6.cpp
 * Author: suyashd95
 */

#include <iostream>

using namespace std;

inline int largest(int x, int y, int z) {

	return (x >= y && x >= z) ? x : ((y >= x && y >= z) ? y : z);
}

int main() {

	int x, y, z;

	cout << "Enter the first number: " << flush;
	cin >> x;
	cout << "Enter the second number: " << flush;
	cin >> y;
	cout << "Enter the third number: " << flush;
	cin >> z;

	cout << "\nThe largest of the three numbers (" << x << ", " << y << ", " << z << "): " << largest(x, y, z) << endl;


	return 0;
}





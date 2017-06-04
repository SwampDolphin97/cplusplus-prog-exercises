/*
 * Answer 7-a.cpp
 * Author: suyashd95
 */

#include <iostream>
#include <cmath>

using namespace std;

inline double degToRad(double degree) {

	return degree * (M_PI / 180);
}

int main() {

	cout << "Evaluating the following function to 0.0001% accuracy using the series...\n" << endl;
	cout << "sin x = x - (x^3)/3! + (x^5)/5! - (x^7)/7! + ....\n" << endl;

	double degree;
	cout << "Enter the value of x (in degrees): " << flush;
	cin >> degree;

	double const radian = degToRad(degree);
	cout << "The angle in radians: " << radian << endl;

	double const sineValue = sin(radian);
	cout << "Its sine value: " << sineValue << endl;

	return 0;
}



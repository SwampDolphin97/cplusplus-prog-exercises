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

double factorial(int n);

int main() {

	cout << "Evaluating the following function to 0.0001% accuracy using the series...\n" << endl;
	cout << "sin x = x - (x^3)/3! + (x^5)/5! - (x^7)/7! + ....\n" << endl;

	double degree;
	cout << "Enter the value of x (in degrees): " << flush;
	cin >> degree;

	double const radian = degToRad(degree);

	double const trueSine = sin(radian);

	double apparentSine, term;
	double const accuracy = 0.0001;

	int power = 1;
	bool termPositive = true;

	while(true) {

		// Calculate each term depending upon the exponent
		if(power == 1)
			term = radian;
		else
			term = pow(radian, power) / factorial(power);

		cout << "Power: " << power << ", Term: " << term << endl;
		if(term <= accuracy)
			break;

		power += 2;
	}

	return 0;
}

// Using Recursion to calculate the factorial of a positive number.
double factorial(int n) {

	int fact = 0;
	if(n == 0)
		return 1;

	fact = n * factorial(n - 1);
	return fact;
}


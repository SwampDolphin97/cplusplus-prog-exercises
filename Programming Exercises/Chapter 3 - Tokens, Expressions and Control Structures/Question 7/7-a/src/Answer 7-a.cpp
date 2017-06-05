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

double factorial(int nTerm);

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

	int nTerm = 1;
	bool termPositive = true;



	return 0;
}

// Using Recursion to calculate the factorial of a positive number.
double factorial(int nTerm) {

	int fact = 0;
	if(nTerm == 0)
		return 1;

	fact = nTerm * factorial(nTerm - 1);
	return fact;
}


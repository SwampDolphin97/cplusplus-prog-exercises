/*
 * Answer 7.cpp
 * Author: suyashd95
 */

#include <iostream>

using namespace std;

/*
 * To calculate m ^ n i.e, m 'raise to power' n, we need to consider the 3 use case scenarios of power function:
 *
 * Scenario 1: When n is zero i.e, n = 0, then the result should be 1. This is a special case.
 *
 * Scenario 2: When n is negative i.e, n < 0.
 *
 * Scenario 3: When n is positive i.e, n > 0.
 */

double power(double m, int n = 2) {

	double result;

	if(n == 0) {

		// Code for Scenario 1
		result = 1;
	}
	else if(n < 0) {

		// Code for Scenario 2
		result = m;
		n--;
		for(int i = 0; i > n; i--)
			result /= m;
	}
	else {

		// Code for Scenario 3
		result = m;
		n--;
		for(int i = 0; i < n; i++)
			result *= m;
	}

	return result;
}

int main() {

	double m;
	int n;

	cout << "Testing power() function...\n" << endl;

	cout << "Test Case 1: When both the values of m and n are given..." << endl;
	cout << "Enter the value of m: " << flush;
	cin >> m;
	cout << "Enter the value of n: " << flush;
	cin >> n;
	cout << m << " ^ " << n << " = " << power(m, n) << endl;

	cout << "\nTest Case 2: When only the value of m is given... In this case, m should be squared." << endl;
	cout << "Enter the value of m: " << flush;
	cin >> m;
	cout << m << " ^ " << "2 = " << power(m) << endl;

	return 0;
}

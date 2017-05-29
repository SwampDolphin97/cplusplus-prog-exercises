/*
 * Answer 8.cpp
 * Author: suyashd95
 */

#include <iostream>

using namespace std;

/*
 * NOTE: I have made 2 changes to the original power() function [answer to question 7 of chapter 4].. Some might be obvious, but some might not..
 *       Hence I am using this comment block to elaborate and explain the changes..
 *
 *    1. Changing the return type from 'double' to 'void'. The only reason why I changed the return type was to explicitly mention which
 *       power() function was used in calculating the power of m raised to n.
 *
 *    2. This one is slightly strange and might confuse beginners.. In C++, if we declare and define functions separately (for example, in this case)
 *       and one of the parameter(s) has a default argument(s) associated with it, then..
 *
 *      We specify default value(s) to the parameters in the place where we declare a function (at the point of creating the prototype of the function)
 *      and we don't specify any default values at the place of definition of a function.
 */

void power(int m, int n = 2);
void power(double m, int n = 2);

int main() {

	cout << "Testing the overloading of functions through power()...\n" << endl;

	cout << "For the sake of simplicity, I am skipping adding the second argument. \nHence, the power() function will find the square of m.\n\n"
			"Test Case 1: When m is of an integer type...\n " << endl;

	int m1;
	cout << "Enter the value of m: " << flush;
	cin >> m1;
	cout << m1 << " ^ 2 = " << flush;
	power(m1);

	cout << "\nTest Case 2: When m is of an double type...\n " << endl;
	double m2;
	cout << "Enter the value of m: " << flush;
	cin >> m2;
	cout << m2 << " ^ 2 = " << flush;
	power(m2);

	return 0;
}

void power(double m, int n) {


	double result;

	if(n == 0) {

		result = 1;
	}
	else if(n < 0) {

		result = m;
		n--;
		for(int i = 0; i > n; i--)
			result /= m;
	}
	else {

		result = m;
		n--;
		for(int i = 0; i < n; i++)
			result *= m;
	}

	cout << result << " (here, m is of type DOUBLE)" << endl;
}

void power(int m, int n) {

	double result;

	if(n == 0) {

		result = 1;
	}
	else if(n < 0) {

		result = m;
		n--;
		for(int i = 0; i > n; i--)
			result /= m;
	}
	else {

		result = m;
		n--;
		for(int i = 0; i < n; i++)
			result *= m;
	}

	cout << result << " (here, m is of type INTEGER)" << endl;
}

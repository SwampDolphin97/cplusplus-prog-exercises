/*
 * Answer 2.cpp
 * Author: suyashd95
 */

#include <iostream>

#include "String.h"

using namespace std;

int main() {

	String s1;
	String s2("Hello");

	String s3(" Suyash");

	s1 = concatenation(s2, s3);
	String s4(s1);

	cout << "Welcome Statement: " << s4.getString() << endl;

	return 0;
}


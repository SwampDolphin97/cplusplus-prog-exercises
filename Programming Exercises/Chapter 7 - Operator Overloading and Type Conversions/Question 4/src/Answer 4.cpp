/*
 * Answer 4.cpp
 * Author: suyashd95
 */

#include <iostream>

#include "String.h"

using namespace std;

int main() {

	String s;

	String s1 = "Hello World!";

	String s2(s1);

	String s3;
	s3 = s2;

	cout << "Original String: " << s3 << endl;

	String s4;
	cout << "Enter a new String: " << flush;
	cin >> s4;
	cout << "New String: " << s4 << endl;

	return 0;
}




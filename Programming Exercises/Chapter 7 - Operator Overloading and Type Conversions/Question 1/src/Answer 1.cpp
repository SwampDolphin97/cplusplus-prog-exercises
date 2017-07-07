/*
 * Answer 1.cpp
 * Author: suyashd95
 */

#include <iostream>

#include "FLOAT.h"

using namespace std;

int main() {

	FLOAT f1(3.5), f2(2.0);
	cout << "Original FLOAT values:\n\nf1 = " << f1.show() << "\nf2 = " << f2.show() << endl;

	FLOAT fSum, fDiff, fPro, fQuo;

	fSum = f1 + f2;
	cout << "\nAdding two FLOATS...\n" << f1.show() << " + " << f2.show() << " = " << fSum.show() << endl;

	fPro = fSum * f2;
	cout << "\nMultiplying two FLOATS...\n" << fSum.show() << " x " << f2.show() << " = " << fPro.show() << endl;

	fDiff = f1 - f2;
	cout << "\nSubtracting two FLOATS...\n" << f1.show() << " - " << f2.show() << " = " << fDiff.show() << endl;

	fQuo = fPro / fDiff;
	cout << "\nDividing two FLOATS...\n" << fPro.show() << " / " << fDiff.show() << " = " << fQuo.show() << endl;

	return 0;
}



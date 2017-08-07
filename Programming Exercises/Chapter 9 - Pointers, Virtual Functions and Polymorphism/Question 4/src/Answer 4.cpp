/*
 * Answer 4.cpp
 * Author: suyashd95
 */

#include <iostream>
#include <string>

#include "Sample.h"

using namespace std;

int main() {

	Sample s1(10, 5.25, "Tom");
	cout << "Displaying Sample 1...\n" << endl;
	s1.display();

	Sample s2;
	s2.input(-50, 0.5426, "Jerry");
	cout << "Displaying Sample 2...\n" << endl;
	s2.display();

	cout << "Swapping Sample 1 and Sample 2 respectively...\n" << endl;
	s1.swap(s2);

	cout << "Sample 1 Contents...\n" << endl;
	s1.display();

	cout << "Sample 2 Contents...\n" << endl;
	s2.display();

	return 0;
}



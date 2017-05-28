/*
 * Answer 8.cpp
 * 	Author: suyashd95
 */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

	cout << "Table for Y = EXP[-X]" << endl;

	cout << setfill('-') << setw(129) << "-" << endl;

/*
 *  Code to display the header row properly
 *	cout << "|" << setfill(' ') << setw(9) << "X" << flush;
 *	cout << setw(3) << "|" << setw(10) << "0.1" << flush;
 *	cout << setw(10) << "0.2" << setw(10) << "0.3" << setw(10) << "0.4" << flush;
 *	cout << setw(10) << "0.5" << setw(10) << "0.6" << setw(10) << "0.7" << flush;
 *	cout << setw(10) << "0.8" << setw(10) << "0.9" << "|" << endl;
*/

	cout << setfill('-') << setw(129) << "-" << endl;

	for(float i = 0.0; i <= 9.0; i += 1.0) {

		cout << "|" << setfill(' ') << setw(5) << fixed << setprecision(1) << i << setw(3) << "  |" << flush;

		for(float j = 0.0; j <= 0.9; j+= 0.1)
			cout << setw(10) << fixed << setprecision(6) << exp(-(i + j)) << "  |" << flush;

		cout << endl;
	}

	cout << setfill('-') << setw(129) << "-" << endl;

	return 0;

}



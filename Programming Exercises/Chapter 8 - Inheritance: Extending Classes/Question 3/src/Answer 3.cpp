/*
 * Answer 3.cpp
 * Author: suyashd95
 */

#include "Teacher.h"
#include "Officer.h"
#include "Regular.h"
#include "Casual.h"

using namespace std;

int main() {

	bool exit = false;

	do {

		cout << setw(50) <<"=====Educational Institute Database=====\n" << endl;
		int op;
		cout << "1. Teacher\t2. Officer\n3. Regular\t4. Casual\n5. Exit" << endl;
		cout << "Enter the number corresponding to your choice: " << flush;
		cin >> op;

		enum {teacher = 1, officer, regular, casual, terminate};

		switch(op) {

		case teacher:
		{
			cout << endl;
			cout << "Teacher" << endl;
			break;
		}
		case officer:
		{
			cout << endl;
			cout << "Officer" << endl;
			break;
		}
		case regular:
		{
			cout << endl;
			cout << "Regular" << endl;
			break;
		}
		case casual:
		{
			cout << endl;
			cout << "Casual" << endl;
			break;
		}
		case terminate:
		{
			cout << endl << "Program is terminating..." << endl;
			exit = true;
			break;
		}
		default:
		{
			cout << "ERROR: Invalid Choice. Please choose a valid option (1-5)." << endl;
			break;
		}

		}


	} while(exit != true);

	return 0;
}



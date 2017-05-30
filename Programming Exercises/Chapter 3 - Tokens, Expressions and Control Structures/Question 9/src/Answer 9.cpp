/*
 * Answer 9.cpp
 * 	Author: suyashd95
 */

#include <iostream>
#include <cmath>

using namespace std;

void populateData(int* dataSet, int const n);
int findN();
string insertSuffix(int pos);
float calculateMean(int* dataSet, int const n);

int main() {

	int const n = findN();
	float mean;

	int* dataSet = new int[n];

	populateData(dataSet, n);
	mean = calculateMean(dataSet, n);

	delete [] dataSet;
	return 0;
}

int findN() {

	int n;
	cout << "Enter the size of the data set (N): " << flush;
	cin >> n;
	return n;
}

string insertSuffix(int pos) {

	if(pos % 10 == 1) {

		return "st";
	}
	else if(pos % 10 == 2) {
		return "nd";
	}
	else if(pos % 10 == 3) {

		return "rd";
	}
	else {

		return "th";
	}
}

void populateData(int* dataSet, int const n) {

	cout << endl;
	for(int i = 0; i < n; i++) {

		cout << "Enter the " << i + 1 << insertSuffix(i + 1) << " value of the Data: " << flush;
		cin >> dataSet[i];
	}
}

float calculateMean(int* dataSet, int const n) {

	int sum = 0;
	for(int i = 0; i < n; i++)
		sum += dataSet[i];
	return sum / (float)n;
}

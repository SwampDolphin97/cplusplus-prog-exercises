/*
 * Answer 5.cpp
 * 	Author: suyashd95
 */

#include <iostream>

using namespace std;


bool isBallotSpoilt(int ballotNumber);
void countBallot(int count[5], int ballotNumber);

int main() {

	int count[5] = {0, 0, 0, 0, 0};
	int nSpoiltBallots = 0;

	cout << "The voting session begins...\nWARNING: Please enter a valid candidate number (between 1 to 5), otherwise your vote will be considered 'spoilt'." << endl;

	int const totalVoters = 25; // For testing purposes, number of voters is set to be 25.

	for(int i = 0; i < totalVoters; i++) {

		int ballotNumber;

		cout << "Enter the candidate number of your choice: " << flush;
		cin >> ballotNumber;

		if(!isBallotSpoilt(ballotNumber))
			countBallot(count, ballotNumber);
		else
			nSpoiltBallots++;

		cout << "Vote has been casted... Thank you for voting." << endl;
	}

	return 0;
}



/*
 * Answer 4.cpp
 * Author: suyashd95
 */

#include <iostream>

#define ROW_COUNT 2

using namespace std;

int** allocateMemory(int const rows, int const cols);
int** allocateMemory(int const cols);

void readMatrix(int** matrix, int const rows, int const cols);
void readMatrix(int** matrix, int const cols);

void displayMatrix(int** matrix, int const rows, int const cols);
void displayMatrix(int** matrix, int const cols);

void deallocateMemory(int** matrix, int const rows);
void deallocateMemory(int** matrix);


int main() {

	cout << "Showcasing the concept of function overloading...\n" << endl;
	cout << "Test Case 1: When both row and column parameters are user-defined...\n" << endl;
	int rows, cols1;

	cout << "Enter the rows of the matrix: " << flush;
	cin >> rows;
	cout << "Enter the columns of the matrix: " << flush;
	cin >> cols1;

	int** matrix1 = allocateMemory(rows, cols1);

	readMatrix(matrix1, rows, cols1);
	displayMatrix(matrix1, rows, cols1);

	deallocateMemory(matrix1, rows);

	cout << "Test Case 2: When only column parameter is user-defined... In this case, rows = 2.\n" << endl;
	int cols2;

	cout << "Enter the columns of the matrix: " << flush;
	cin >> cols2;

	int** matrix2 = allocateMemory(cols2);

	readMatrix(matrix2, cols2);
	displayMatrix(matrix2, cols2);

	deallocateMemory(matrix2);

	return 0;
}

int** allocateMemory(int const rows, int const cols) {

	int** matrix = new int*[rows];
	for (int i = 0; i < rows; i++)
		matrix[i] = new int[cols];

	return matrix;
}

int** allocateMemory(int const cols) { // Overloaded allocateMemory()

	int** matrix = new int*[ROW_COUNT];
	for(int i = 0; i < ROW_COUNT; i++)
		matrix[i] = new int[cols];

	return matrix;
}

void readMatrix(int** matrix, int const rows, int const cols) {

	cout << endl;
	for(int i = 0; i < rows; i++) {

		for(int j = 0; j < cols; j++) {

			cout << "Please enter the value for matrix[" << i + 1 << "][" << j + 1 << "]: " << flush;
			cin >> matrix[i][j];
		}
		cout << endl;
	}
}

void readMatrix(int** matrix, int const cols) { // Overloaded readMatrix()

	cout << endl;
	for (int i = 0; i < ROW_COUNT; i++) {

		for (int j = 0; j < cols; j++) {

			cout << "Please enter the value for matrix[" << i + 1 << "]["
					<< j + 1 << "]: " << flush;
			cin >> matrix[i][j];
		}
		cout << endl;
	}
}

void displayMatrix(int** matrix, int const rows, int const cols) {

	cout << "Displaying values of matrix of size " << rows << " x " << cols << " ..." << endl;
	for(int i = 0; i < rows; i++) {

		for(int j = 0; j < cols; j++)
			cout << "matrix[" << i + 1 << "][" << j + 1 << "]: " << matrix[i][j] << endl;

		cout << endl;
	}
}

void displayMatrix(int** matrix, int const cols) { // Overloaded displayMatrix()

	cout << "Displaying values of matrix of size " << ROW_COUNT << " x " << cols << " ..." << endl;
	for (int i = 0; i < ROW_COUNT; i++) {

		for (int j = 0; j < cols; j++)
			cout << "matrix[" << i + 1 << "][" << j + 1 << "]: " << matrix[i][j]
					<< endl;

		cout << endl;
	}
}

void deallocateMemory(int** matrix, int const rows) {

	for (int i = 0; i < rows; i++)
		delete[] matrix[i];
	delete[] matrix;
}

void deallocateMemory(int** matrix) { // Overloaded deallocateMemory()

	for (int i = 0; i < ROW_COUNT; i++)
		delete[] matrix[i];
	delete[] matrix;
}





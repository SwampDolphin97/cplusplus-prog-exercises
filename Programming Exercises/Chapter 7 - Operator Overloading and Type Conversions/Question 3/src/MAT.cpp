/*
 * MAT.cpp
 * Author: suyashd95
 */

#include "MAT.h"

#include <iostream>

MAT::MAT(): rows(0), cols(0), matrix(NULL) { /*std::cout << "Default constructor called." << std::endl;*/ }

MAT::MAT(int x, int y) {

	rows = x;
	cols = y;

	if(rows != 0 && cols != 0) {

		matrix = new int*[rows];
		for(int i = 0; i < x; i++)
			matrix[i] = new int[cols];

		for(int i = 0; i < rows; i++)
			for(int j = 0; j < cols; j++)
				matrix[i][j] = 0;
	}
	else {

		matrix = NULL;
	}

//	std::cout << "Parameterized Constructor called." << std::endl;
}

void MAT::populateMatrix() {


	if(matrix != NULL) {

		std::cout << "Populating a matrix of size " << rows << " x " << cols << "...\n" << std::endl;
		for (int i = 0; i < rows; i++) {

			for (int j = 0; j < cols; j++) {

				std::cout << "Enter the value of matrix[" << i + 1 << "][" << j + 1 << "]: " << std::flush;
				std::cin >> matrix[i][j];
			}
			std::cout << std::endl;
		}

		std::cout << "The matrix has been successfully populated." << std::endl;
	}
	else
		std::cout << "ERROR: Cannot populate a non-existent matrix." << std::endl;
}

void MAT::displayMatrix() {

	if(matrix != NULL) {

		std::cout << "Displaying a matrix of size " << rows << " x " << cols << "...\n" << std::endl;
		for (int i = 0; i < rows; i++) {

			for (int j = 0; j < cols; j++)
				std::cout << "matrix[" << i + 1 << "][" << j + 1 << "]: " << matrix[i][j] << std::endl;
			std::cout << std::endl;
		}

		std::cout << "The matrix has been displayed." << std::endl;
	}
	else
		std::cout << "ERROR: Cannot display a non-existent matrix." << std::endl;
}

MAT::~MAT() {

	if(matrix != NULL) {

		for (int i = 0; i < rows; i++)
			delete[] matrix[rows];
		delete[] matrix[cols];
	}
//	std::cout << "Destructor called." << std::endl;
}

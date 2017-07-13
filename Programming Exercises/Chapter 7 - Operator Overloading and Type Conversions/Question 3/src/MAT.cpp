/*
 * MAT.cpp
 * Author: suyashd95
 */

#include "MAT.h"

#include <iostream>

MAT::MAT(): rows(0), cols(0), matrix(nullptr) { std::cout << "Default constructor called." << std::endl; };

MAT::MAT(int x, int y): rows(x), cols(y) {

	if(!x && !y) {

		matrix = new int*[rows];
		for(int i = 0; i < rows; i++)
			matrix[rows] = new int[cols];

		for(int i = 0; i < rows; i++)
			for(int j = 0; j < cols; j++)
				matrix[i][j] = 0;
	}
	else {

		matrix = nullptr;
	}

	std::cout << "Parameterized Constructor called." << std::endl;
}

void MAT::populateMatrix() {

	std::cout << "Populating a matrix of size " << rows << " x " << cols << "...\n" << std::endl;

	for(int i = 0; i < rows; i++) {

		for(int j = 0; j < cols; j++) {

			std::cout << "Enter the value of matrix[" << i + 1 << "][" << j + 1 <<  "]: " << std::flush;
			std::cin >> matrix[i][j];
		}
		std::cout << std::endl;
	}

	std::cout << "The matrix has been successfully populated." << std::endl;
}

void MAT::displayMatrix() {

	std::cout << "Displaying a matrix of size " << rows << " x " << cols << "...\n" << std::endl;

	for(int i = 0; i < rows; i++) {

		for(int j = 0; j < cols; j++)
			std::cout << "matrix[" << i + 1 << "][" << j + 1 << "]: " << matrix[i][j] << std::endl;
		std::cout << std::endl;
	}

	std::cout << "The matrix has been displayed." << std::endl;
}

MAT::~MAT() {

	for (int i = 0; i < rows; i++)
		delete[] matrix[rows];
	delete[] matrix[cols];

	std::cout << "Destructor called." << std::endl;
}

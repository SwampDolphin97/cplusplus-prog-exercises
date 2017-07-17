/*
 * MAT.h
 * Author: suyashd95
 */

#ifndef MAT_H_
#define MAT_H_

#include <iostream>

class MAT {

private:
	int rows;
	int cols;
	int** matrix;

public:
	MAT();
	MAT(int x, int y);
	MAT(const MAT&);
	void populateMatrix();
	void displayMatrix();
	MAT& operator =(const MAT&);
	bool operator ==(const MAT&);
	bool operator !=(const MAT&);
	MAT operator +(const MAT&);
	MAT operator -();
	MAT operator -(const MAT&);
	MAT operator *(const MAT&);
	friend MAT operator *(const MAT&, const int);
	friend MAT operator *(const int, const MAT&);
	friend std::ostream& operator <<(std::ostream&, const MAT&);
	friend std::istream& operator >>(std::istream&, MAT&);
	void transpose();
	operator bool();
	~MAT();
};

#endif /* MAT_H_ */

/*
 * MAT.h
 * Author: suyashd95
 */

#ifndef MAT_H_
#define MAT_H_

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
	MAT operator +(const MAT&);
	void operator -();
	MAT operator -(const MAT&);
	MAT operator *(const MAT&);
	friend MAT operator *(const MAT&, const int);
	friend MAT operator *(const int, const MAT&);
	void transpose();
	~MAT();
};

#endif /* MAT_H_ */

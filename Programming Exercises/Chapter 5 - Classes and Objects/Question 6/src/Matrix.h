/*
 * Matrix.h
 * Author: suyashd95
 */

#ifndef MATRIX_H_
#define MATRIX_H_

class Matrix {

private:
	int matrix[3][3];

public:
	void read();
	void display() const;
	friend Matrix multiplyMatrices(const Matrix&, const Matrix&);
};

#endif /* MATRIX_H_ */

/*
 * Vector.h
 * Author: suyashd95
 */

#ifndef VECTOR_H_
#define VECTOR_H_

int const dimensions = 3;

class Vector {

private:
	float values[dimensions];

public:
	Vector();
	void createVector();
	void modifyVector();
	void multiplyVector(float scalar);
	std::string displayVector();
};

#endif /* VECTOR_H_ */

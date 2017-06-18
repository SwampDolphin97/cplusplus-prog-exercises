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

namespace modclasses {

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
	Vector addVectors(const Vector& v2) const;
};

} /* namespace modclasses */

#endif /* VECTOR_H_ */


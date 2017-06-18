/*
 * Vector.cpp
 * Author: suyashd95
 */

#include <iostream>
#include <sstream>

#include "Vector.h"

using namespace std;

Vector::Vector() {

	for (int i = 0; i < dimensions; i++)
		values[i] = 0;
}

void Vector::createVector() {

	cout << endl;
	for (int i = 0; i < dimensions; i++) {

		enum {x, y, z};
		switch (i) {

		case x:
			cout << "Enter the value of the vector in x-direction (a): " << flush;
			break;
		case y:
			cout << "Enter the value of the vector in y-direction (b): " << flush;
			break;
		case z:
			cout << "Enter the value of the vector in z-direction (c): " << flush;
			break;
		}
		cin >> values[i];
	}
	cout << "Vector has been created." << endl;
}

void Vector::modifyVector() {

	cout << endl;
	cout << "The current value of the vector: " << displayVector() << endl;
	for (int i = 0; i < dimensions; i++) {

		enum {
			x, y, z
		};
		switch (i) {

		case x:
			cout << "Enter the new value of the vector in x-direction (a): " << flush;
			break;
		case y:
			cout << "Enter the new value of the vector in y-direction (b): " << flush;
			break;
		case z:
			cout << "Enter the new value of the vector in z-direction (c): " << flush;
			break;
		}
		cin >> values[i];
	}
	cout << "The values of the vector has been modified." << endl;
}

void Vector::multiplyVector(float scalar) {

	cout << endl;
	for (int i = 0; i < dimensions; i++) {

		values[i] *= scalar;
	}
	cout << "Vector has been multiplied by scalar value " << scalar << "." << endl;
}

string Vector::displayVector() {

	stringstream ss;
	ss << "(";
	ss << values[0];
	ss << ", ";
	ss << values[1];
	ss << ", ";
	ss << values[2];
	ss << ")";
	return ss.str();
}

modclasses::Vector::Vector() {

	for(int i = 0; i < dimensions; i++)
		values[i] = 0;
}

void modclasses::Vector::createVector() {

	cout << endl;
	for(int i = 0; i < dimensions; i++) {

		enum {x, y, z};
		switch(i) {

		case x:
			cout << "Enter the value of the vector in x-direction (a): " << flush;
			break;
		case y:
			cout << "Enter the value of the vector in y-direction (b): " << flush;
			break;
		case z:
			cout << "Enter the value of the vector in z-direction (c): " << flush;
			break;
		}
		cin >> values[i];
	}
	cout << "Vector has been created." << endl;
}

void modclasses::Vector::modifyVector() {

	cout << endl;
	cout << "The current value of the vector: " << displayVector() << endl;
	for(int i = 0; i < dimensions; i++) {

		enum {x, y, z};
		switch(i) {

		case x:
			cout << "Enter the new value of the vector in x-direction (a): " << flush;
			break;
		case y:
			cout << "Enter the new value of the vector in y-direction (b): " << flush;
			break;
		case z:
			cout << "Enter the new value of the vector in z-direction (c): " << flush;
			break;
		}
		cin >> values[i];
	}
	cout << "The values of the vector has been modified." << endl;
}

void modclasses::Vector::multiplyVector(float scalar) {

	cout << endl;
	for(int i = 0; i < dimensions; i++) {

		values[i] *= scalar;
	}
	cout << "Vector has been multiplied by a scalar value " << scalar << "." << endl;
}

string modclasses::Vector::displayVector() {

	stringstream ss;
	ss << "(";
	ss << values[0];
	ss << ", ";
	ss << values[1];
	ss << ", ";
	ss << values[2];
	ss << ")";
	return ss.str();
}

modclasses::Vector modclasses::Vector::addVectors(const modclasses::Vector& v2) const {

	Vector sum;
	for(int i = 0; i < dimensions; i++)
		sum.values[i] = this->values[i] + v2.values[i];
	return sum;
}


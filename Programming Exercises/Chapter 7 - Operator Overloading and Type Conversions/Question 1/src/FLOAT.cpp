/*
 * FLOAT.cpp
 * Author: suyashd95
 */

#include "FLOAT.h"

FLOAT FLOAT::operator +(const FLOAT& f1) {

	return (FLOAT(this->data + f1.data));
}

FLOAT FLOAT::operator -(const FLOAT& f1) {

	return (FLOAT(this->data - f1.data));
}

FLOAT FLOAT::operator *(const FLOAT& f1) {

	return (FLOAT(this->data * f1.data));
}

FLOAT FLOAT::operator /(const FLOAT& f1) {

	return (FLOAT(this->data / f1.data));
}

float FLOAT::show() {

	return data;
}

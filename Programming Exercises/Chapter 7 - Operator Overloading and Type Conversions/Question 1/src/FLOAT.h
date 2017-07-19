/*
 * FLOAT.h
 * Author: suyashd95
 */

#ifndef FLOAT_H_
#define FLOAT_H_

class FLOAT {

private:
	float data;

public:
	FLOAT() { data = 0.0; };
	FLOAT(float data): data(data) { };
	FLOAT operator +(const FLOAT&);
	FLOAT operator -(const FLOAT&);
	FLOAT operator *(const FLOAT&);
	FLOAT operator /(const FLOAT&);
	float show();
};

#endif /* FLOAT_H_ */

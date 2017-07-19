/*
 * Polar.h
 * Author: suyashd95
 */

#ifndef POLAR_H_
#define POLAR_H_

class Rectangle;				// Forward Declaration

class Polar {

private:
	float radius;
	float angle;

private:
	float degToRad(const float deg);
	float radToDeg(const float rad);

public:
	Polar();
	Polar(float radius, float angle);
	void show();
	void putData(float radius, float angle);
	operator Rectangle();
};

#endif /* POLAR_H_ */

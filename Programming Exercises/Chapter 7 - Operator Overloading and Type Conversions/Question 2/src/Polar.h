/*
 * Polar.h
 * Author: suyashd95
 */

#ifndef POLAR_H_
#define POLAR_H_

class Polar {

private:
	float radius;
	float angle;

private:
	float degToRad(float deg);
	float radToDeg(float rad);

public:
	Polar();
	Polar(float radius, float angle);
	Polar operator +(const Polar&);
	void putdata(float radius, float angle);
	void show();
};

#endif /* POLAR_H_ */

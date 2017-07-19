/*
 * Polar.h
 * Author: suyashd95
 */

#ifndef POLAR_H_
#define POLAR_H_

class Rectangle;						// Forward Declaration

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
	Polar(const Rectangle);				// Converting Rectangle type to Polar type
	float getRadius() const;
	float getAngle() const;
	void setRadius(float radius);
	void setAngle(float angle);
	void show();
	void putData(float radius, float angle);
	operator Rectangle();				// Converting Polar type to Rectangle type
};

#endif /* POLAR_H_ */

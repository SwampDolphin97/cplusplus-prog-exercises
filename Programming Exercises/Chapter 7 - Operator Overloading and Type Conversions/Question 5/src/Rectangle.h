/*
 * Rectangle.h
 * Author: suyashd95
 */

#ifndef RECTANGLE_H_
#define RECTANGLE_H_

class Rectangle {

private:
	float x;
	float y;

public:
	Rectangle();
	Rectangle(float x, float y);
	void show();
	void putData(float x, float y);
};

#endif /* RECTANGLE_H_ */

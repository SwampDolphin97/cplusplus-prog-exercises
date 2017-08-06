/*
 * Shape.h
 * Author: suyashd95
 */

#ifndef SHAPE_H_
#define SHAPE_H_

class Shape {

protected:
	double x, y;

public:
	Shape();
	void get_data(double, double y = 0);
	virtual void display_area();
	virtual ~Shape();
};

#endif /* SHAPE_H_ */

/*
 * DM.h
 * Author: suyashd95
 */

#ifndef DM_H_
#define DM_H_

class DB;

class DM {

private:
	int meters;
	int centimeters;

public:
	DM(): meters(0), centimeters(0) {};
	void displayDistance();
	void setDistance(int, int);
	friend void addDistance(DB&, DM&);
};

#endif /* DM_H_ */

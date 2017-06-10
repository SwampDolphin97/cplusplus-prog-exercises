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
	int getMeters() const { return meters; };
	int getCentimeters() const { return centimeters; };
	friend void addDistance(const DB&, const DM&);
};

#endif /* DM_H_ */

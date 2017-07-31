/*
 * Typist.h
 * Author: suyashd95
 */

#ifndef TYPIST_H_
#define TYPIST_H_

#include "Staff.h"

class Typist: public Staff {

private:
	int speed;

protected:
	virtual void input() = 0;
	virtual void display() = 0;

protected:
	Typist();
	Typist(int, std::string, int);
	int getSpeed() const;
	void setSpeed(const int);
};

#endif /* TYPIST_H_ */

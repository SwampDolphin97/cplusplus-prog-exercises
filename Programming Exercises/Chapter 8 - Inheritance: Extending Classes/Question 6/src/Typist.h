/*
 * Typist.h
 * Author: suyashd95
 */

#ifndef TYPIST_H_
#define TYPIST_H_


#include <iostream>
#include <string>

#include "Staff.h"

class Typist {

private:
	int speed;
	Staff staff;

public:
	Typist();
	Typist(int, std::string, int);
	void input();
	void display();
	int getSpeed() const;
	void setSpeed(const int);
};

#endif /* TYPIST_H_ */

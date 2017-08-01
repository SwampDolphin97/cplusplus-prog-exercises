/*
 * Officer.h
 * Author: suyashd95
 */

#ifndef OFFICER_H_
#define OFFICER_H_

#include <iostream>
#include <string>

#include "Staff.h"

class Officer {

private:
	char grade;
	Staff staff;

public:
	Officer();
	Officer(int, std::string, char);
	char getGrade() const;
	void setGrade(const char);
	void input();
	void display();
};

#endif /* OFFICER_H_ */

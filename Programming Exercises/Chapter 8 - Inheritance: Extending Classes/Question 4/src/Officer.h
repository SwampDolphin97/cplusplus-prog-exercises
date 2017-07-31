/*
 * Officer.h
 * Author: suyashd95
 */

#ifndef OFFICER_H_
#define OFFICER_H_

#include "Staff.h"

class Officer: public Staff {

private:
	char grade;

protected:
	char getGrade() const;
	void setGrade(const char);

public:
	Officer();
	Officer(int, std::string, char);
	void input();
	void display();
};

#endif /* OFFICER_H_ */

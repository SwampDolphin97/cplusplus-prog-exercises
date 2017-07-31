/*
 * Officer.h
 * Author: suyashd95
 */

#ifndef OFFICER_H_
#define OFFICER_H_

#include "Staff.h"
#include "Education.h"

class Officer: public Staff, public Education {

private:
	char grade;

protected:
	char getGrade() const;
	void setGrade(const char);

public:
	Officer();
	Officer(int, std::string, int, std::string, char);
	void input();
	void display();
};

#endif /* OFFICER_H_ */

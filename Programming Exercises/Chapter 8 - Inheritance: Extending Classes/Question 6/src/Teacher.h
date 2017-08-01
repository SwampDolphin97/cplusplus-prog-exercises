/*
 * Teacher.h
 * Author: suyashd95
 */

#ifndef TEACHER_H_
#define TEACHER_H_

#include <iostream>
#include <string>

#include "Staff.h"

class Teacher {

private:
	std::string subject;
	std::string publication;
	Staff staff;

public:
	Teacher();
	Teacher(int, std::string, std::string, std::string);
	std::string getSubject() const;
	std::string getPublication() const;
	void setSubject(const std::string);
	void setPublication(const std::string);
	void input();
	void display();
};

#endif /* TEACHER_H_ */

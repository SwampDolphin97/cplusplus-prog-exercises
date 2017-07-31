/*
 * Teacher.h
 * Author: suyashd95
 */

#ifndef TEACHER_H_
#define TEACHER_H_

#include "Staff.h"
#include "Education.h"

class Teacher: public Staff, public Education {

private:
	std::string subject;
	std::string publication;

protected:
	std::string getSubject() const;
	std::string getPublication() const;
	void setSubject(const std::string);
	void setPublication(const std::string);

public:
	Teacher();
	Teacher(int, std::string, int, std::string, std::string, std::string);
	void input();
	void display();
};

#endif /* TEACHER_H_ */

/*
 * Education.h
 * Author: suyashd95
 */

#ifndef EDUCATION_H_
#define EDUCATION_H_

#include <iostream>
#include <string>

class Education {

private:
	int genQual;
	std::string profQual;

protected:
	virtual void input() = 0;
	virtual void display() = 0;

protected:
	Education();
	Education(int, std::string);
	int getGenQual() const;
	std::string getProfQual() const;
	void setGenQual(const int);
	void setProfQual(const std::string);
	virtual ~Education();
};

#endif /* EDUCATION_H_ */

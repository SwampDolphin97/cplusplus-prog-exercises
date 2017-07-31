/*
 * Staff.h
 * Author: suyashd95
 */

#ifndef STAFF_H_
#define STAFF_H_

#include <iostream>
#include <string>

class Staff {

private:
	int code;
	std::string name;

protected:
	virtual void input() = 0;
	virtual void display() = 0;

protected:
	Staff();
	Staff(int, std::string);
	int getCode() const;
	std::string getName() const;
	void setCode(const int);
	void setName(const std::string);
	virtual ~Staff();
};

#endif /* STAFF_H_ */

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

public:
	Staff();
	Staff(int, std::string);
	int getCode() const;
	std::string getName() const;
	void setCode(const int);
	void setName(const std::string);
	void input();
	void display();
	~Staff();
};

#endif /* STAFF_H_ */

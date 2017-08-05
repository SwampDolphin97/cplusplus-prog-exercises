/*
 * Person.h
 * Author: suyashd95
 */

#ifndef PERSON_H_
#define PERSON_H_

#include <string>

class Person {

private:
	int code;
	std::string name;

protected:
	Person();
	int getCode() const;
	std::string getName() const;
	void setCode(const int);
	void setName(const std::string);
	~Person();
};

#endif /* PERSON_H_ */

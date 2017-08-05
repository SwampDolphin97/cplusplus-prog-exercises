/*
 * Admin.h
 * Author: suyashd95
 */

#ifndef ADMIN_H_
#define ADMIN_H_

#include "Person.h"

class Admin: virtual public Person {

private:
	int experience;

protected:
	Admin();
	int getExperience() const;
	void setExperience(const int);
	~Admin();
};

#endif /* ADMIN_H_ */

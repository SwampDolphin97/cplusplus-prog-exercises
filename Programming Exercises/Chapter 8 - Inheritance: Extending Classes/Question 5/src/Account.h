/*
 * Account.h
 * Author: suyashd95
 */

#ifndef ACCOUNT_H_
#define ACCOUNT_H_

#include "Person.h"

class Account: virtual public Person {

private:
	float pay;

protected:
	Account();
	float getPay() const;
	void setPay(const float);
	~Account();
};

#endif /* ACCOUNT_H_ */

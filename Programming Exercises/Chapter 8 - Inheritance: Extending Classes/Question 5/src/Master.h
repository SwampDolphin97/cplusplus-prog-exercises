/*
 * Master.h
 * Author: suyashd95
 */

#ifndef MASTER_H_
#define MASTER_H_

#include "Account.h"
#include "Admin.h"

#include <iostream>
#include <iomanip>
#include <string>

class Master: public Account, public Admin {

public:
	void create();
	void update();
	void display() const;
};

#endif /* MASTER_H_ */

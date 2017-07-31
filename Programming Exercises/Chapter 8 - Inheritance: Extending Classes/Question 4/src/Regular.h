/*
 * Regular.h
 * Author: suyashd95
 */

#ifndef REGULAR_H_
#define REGULAR_H_

#include "Typist.h"

class Regular: public Typist {

public:
	Regular();
	Regular(int, std::string, int);
	void input();
	void display();
};

#endif /* REGULAR_H_ */

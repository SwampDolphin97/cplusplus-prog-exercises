/*
 * Regular.cpp
 * Author: suyashd95
 */

#include "Regular.h"

Regular::Regular(): typist() {}

Regular::Regular(int code, std::string name, int speed): typist(code, name, speed) {}

void Regular::input() {

	typist.input();
}

void Regular::display() {

	typist.display();
}

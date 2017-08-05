/*
 * Regular.cpp
 * Author: suyashd95
 */

#include "Regular.h"

Regular::Regular(): Typist() {}

Regular::Regular(int code, std::string name, int speed): Typist(code, name, speed) {}

void Regular::input() {

	Typist::input();
}

void Regular::display() {

	Typist::display();
}

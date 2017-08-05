/*
 * Person.cpp
 * Author: suyashd95
 */

#include "Person.h"

Person::Person(): code(0), name("") {}

int Person::getCode() const { return code; }

std::string Person::getName() const { return name; }

void Person::setCode(const int code) { this->code = code; }

void Person::setName(const std::string name) { this->name = name; }

Person::~Person() {}

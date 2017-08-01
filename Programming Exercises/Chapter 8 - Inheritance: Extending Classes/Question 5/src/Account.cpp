/*
 * Account.cpp
 * Author: suyashd95
 */

#include "Account.h"

Account::Account(): pay(0) {}

float Account::getPay() const { return pay; }

void Account::setPay(const float pay) { this->pay = pay; }

Account::~Account() {}

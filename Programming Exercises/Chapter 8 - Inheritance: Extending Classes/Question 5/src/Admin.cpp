/*
 * Admin.cpp
 * Author: suyashd95
 */

#include "Admin.h"

Admin::Admin(): experience(0) {}

int Admin::getExperience() const { return experience; }

void Admin::setExperience(const int experience) { this->experience = experience; }

Admin::~Admin() {}

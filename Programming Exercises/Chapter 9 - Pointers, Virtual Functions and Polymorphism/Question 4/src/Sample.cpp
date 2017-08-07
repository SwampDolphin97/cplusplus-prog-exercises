/*
 * Sample.cpp
 * Author: suyashd95
 */

#include "Sample.h"

Sample::Sample(): num(0), dec(0), str("") {}

Sample::Sample(int num, float dec, std::string str): num(num), dec(dec), str(str) {}

void Sample::input(const int num, const float dec, const std::string str) {

	this->num = num;
	this->dec = dec;
	this->str = str;
}

void Sample::swap(Sample& sample) {

	int tempNum = this->num;
	this->num = sample.num;
	sample.num = tempNum;

	float tempDec = this->dec;
	this->dec = sample.dec;
	sample.dec = tempDec;

	std::string tempStr = this->str;
	this->str = sample.str;
	sample.str = tempStr;
}

void Sample::display() const {

	std::cout << "Number: " << num << std::endl;
	std::cout << "Decimal: " << dec << std::endl;
	std::cout << "String: " << str << std::endl;
}

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

	if(this != &sample) {				// Self assignment check

		const int tempNum = this->num;
		const float tempDec = this->dec;
		const std::string tempStr = this->str;

		this->input(sample.num, sample.dec, sample.str);
		sample.input(tempNum, tempDec, tempStr);
	}
	else {

		std::cout << "ERROR: Cannot swap the values of the same object of Sample class.\n" << std::endl;
	}
}

void Sample::display() const {

	std::cout << "Number: " << num << std::endl;
	std::cout << "Decimal: " << dec << std::endl;
	std::cout << "String: " << str << std::endl;
	std::cout << std::endl;
}

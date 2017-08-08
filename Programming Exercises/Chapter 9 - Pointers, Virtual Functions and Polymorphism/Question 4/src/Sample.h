/*
 * Sample.h
 * Author: suyashd95
 */

#ifndef SAMPLE_H_
#define SAMPLE_H_

#include <iostream>
#include <string>

class Sample {

private:
	int num;
	float dec;
	std::string str;

public:
	Sample();
	Sample(int, float, std::string);
	void input(const int, const float, const std::string);
	void swap(Sample&);
	void display() const;
};

#endif /* SAMPLE_H_ */

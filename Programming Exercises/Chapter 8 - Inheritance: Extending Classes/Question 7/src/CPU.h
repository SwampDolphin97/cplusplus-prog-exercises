/*
 * CPU.h
 * Author: suyashd95
 */

#ifndef CPU_H_
#define CPU_H_

#include <iostream>
#include <iomanip>
#include <string>

class CPU {

private:
	std::string companyName;
	std::string processorNumber;
	std::string architecture;
	std::string verticalSegment;
	float processorBaseFrequency;
	int nCores;
	bool turboBoost;
	float maxTurboFrequency;
	bool hyperThreading;
	int nThreads;
	bool smartCache;
	int cache;
	int thermalDesignPower;
	std::string socket;

protected:
	CPU();
	CPU(std::string, std::string, std::string, std::string, float, int, bool, float, bool, int, bool, int, int, std::string);
	virtual ~CPU() = 0;

public:
	void display() const;
};

#endif /* CPU_H_ */

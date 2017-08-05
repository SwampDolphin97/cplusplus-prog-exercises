/*
 * GPU.h
 * Author: suyashd95
 */

#ifndef GPU_H_
#define GPU_H_

#include <iostream>
#include <string>

class GPU {

private:
	std::string companyName;
	std::string modelName;
	std::string architecture;
	int cudaCores;
	int baseClock;
	int boostClock;
	int memorySpeed;
	std::string standardMemoryConfig;
	int memoryBandwidth;
	bool vrReady;

protected:
	GPU();
	GPU(std::string, std::string, std::string, int, int, int, int, std::string, int, bool);
	virtual void display() const = 0;
	virtual ~GPU();
};

#endif /* GPU_H_ */

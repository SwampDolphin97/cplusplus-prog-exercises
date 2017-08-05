/*
 * PCBuild.cpp
 * 	Author: suyashd95
 */

#include "PCBuild.h"

#include "CPU.h"
#include "GPU.h"

void PC_Build::display(const CPU& cpu, const GPU& gpu) const {

	std::cout << "PC Build Details....\n" << std::endl;
	std::cout << "1. " << std::flush;
	cpu.display();
	std::cout << "2. " << std::flush;
	gpu.display();
	std::cout << std::endl;
}

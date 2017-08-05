/*
 * CPUi3.cpp
 * Author: suyashd95
 */

#include "CPUi3.h"

CPU_i3::CPU_i3(): CPU("Intel", "i3-5010U", "7th Gen(Kaby Lake)", "Mobile", 2.1, 2, false, 0, true, 4, false, 3, 15, "FCBGA-1168") {}

void CPU_i3::display() const {

	std::cout << "i3 " << std::flush;
	CPU::display();
}

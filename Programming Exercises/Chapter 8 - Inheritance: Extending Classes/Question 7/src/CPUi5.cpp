/*
 * CPUi5.cpp
 * Author: suyashd95
 */

#include "CPUi5.h"

CPU_i5::CPU_i5(): CPU("Intel", "i5-7600K", "7th Gen(Kaby Lake)", "Desktop", 3.8, 4, true, 4.2, false, 4, true, 6, 91, "FCLGA-1151") {}

void CPU_i5::display() const {

	CPU::display();
}

/*
 * GPU1060.cpp
 * Author: suyashd95
 */

#include "GPU1060.h"

GPU_1060::GPU_1060(): GPU("nVIDIA", "GeForce GTX 1060", "Pascal", 1280, 1506, 1708, 8, "6 GB GDDR5", 192, false) {}

void GPU_1060::display() const {

	std::cout << "1060 " << std::flush;
	GPU::display();
}

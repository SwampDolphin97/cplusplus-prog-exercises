/*
 * GPU1070.cpp
 * Author: suyashd95
 */

#include "GPU1070.h"

GPU_1070::GPU_1070(): GPU("nVIDIA", "GeForce GTX 1070", "Pascal", 2048, 1442, 1645, 8, "8 GB GDDR5", 256, true) {}

void GPU_1070::display() const {

	std::cout << "1070 " << std::flush;
	GPU::display();
}

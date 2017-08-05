/*
 * GPU.cpp
 * Author: suyashd95
 */

#include "GPU.h"

GPU::GPU() {

	companyName = "";
	modelName = "";
	architecture = "";
	cudaCores = 0;
	baseClock = 0;
	boostClock = 0;
	memorySpeed = 0;
	standardMemoryConfig = "";
	memoryBandwidth = 0;
	vrReady = false;
}

GPU::GPU(std::string companyName, std::string modelName, std::string architecture, int cudaCores, int baseClock, int boostClock, int memorySpeed, std::string standardMemoryConfig, int memoryBandwidth, bool vrReady) {

	this->companyName = companyName;
	this->modelName = modelName;
	this->architecture = architecture;
	this->cudaCores = cudaCores;
	this->baseClock = baseClock;
	this->boostClock = boostClock;
	this->memorySpeed = memorySpeed;
	this->standardMemoryConfig = standardMemoryConfig;
	this->memoryBandwidth = memoryBandwidth;
	this->vrReady = vrReady;
}

void GPU::display() const {

	std::cout << "GPU Detailed Specifications...\n" << std::endl;
	std::cout << "Company Name: " << companyName << std::endl;
	std::cout << "Model Name: " << modelName << std::endl;
	std::cout << "Architecture: " << architecture << std::endl;
	std::cout << "CUDA Cores: " << cudaCores << std::endl;
	std::cout << "Base Clock: " << baseClock << " MHz" << std::endl;
	std::cout << "Boost Clock: " << boostClock << " MHz" << std::endl;
	std::cout << "Memory Speed: " << memorySpeed << " Gbps" << std::endl;
	std::cout << "Standard Memory Config: " << standardMemoryConfig << std::endl;
	std::cout << "Memory Bandwidth: " << memoryBandwidth << " GB/sec" << std::endl;
	vrReady?std::cout << "VR Ready: Yes" << std::endl: std::cout << "VR Ready: No" << std::endl;
	std::cout << std::endl;
}

GPU::~GPU() {}

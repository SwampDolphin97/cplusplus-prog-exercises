/*
 * CPU.cpp
 * Author: suyashd95
 */

#include "CPU.h"

CPU::CPU() {

	companyName = "";
	processorNumber = "";
	architecture = "";
	verticalSegment = "";
	processorBaseFrequency = 0;
	nCores = 0;
	turboBoost = false;
	maxTurboFrequency = 0;
	hyperThreading = false;
	nThreads = 0;
	smartCache = false;
	cache = 0;
	thermalDesignPower = 0;
	socket = "";
}

CPU::CPU(std::string companyName, std::string processorNumber, std::string architecture, std::string verticalSegment, float processorBaseFrequency, int nCores, bool turboBoost, float maxTurboFrequency, bool hyperThreading, int nThreads, bool smartCache, int cache, int thermalDesignPower, std::string socket) {

	this->companyName = companyName;
	this->processorNumber = processorNumber;
	this->architecture = architecture;
	this->verticalSegment = verticalSegment;
	this->processorBaseFrequency = processorBaseFrequency;
	this->nCores = nCores;
	this->turboBoost = turboBoost;
	this->maxTurboFrequency = maxTurboFrequency;
	this->hyperThreading = hyperThreading;
	this->nThreads = nThreads;
	this->smartCache = smartCache;
	this->cache = cache;
	this->thermalDesignPower = thermalDesignPower;
	this->socket = socket;
}

void CPU::display() const {

	std::cout << "CPU Detailed Specifications...\n" << std::endl;
	std::cout << "Company Name: " << companyName << std::endl;
	std::cout << "Processor Number: " << processorNumber << std::endl;
	std::cout << "Architecture: " << architecture << std::endl;
	std::cout << "VerticalSegment: " << verticalSegment << std::endl;
	std::cout << "Processor Base Frequency: " << std::fixed << std::setprecision(2) << processorBaseFrequency << " GHz" << std::endl;
	std::cout << "# of Cores: " << nCores << std::endl;
	turboBoost? std::cout << "TurboBoost Available: Yes" << std::endl: std::cout << "TurboBoost Available: No" << std::endl;
	turboBoost? std::cout << "Max Turbo Frequency: " << std::fixed << std::setprecision(2) << maxTurboFrequency << " GHz" << std::endl: std::cout << "Max Turbo Frequency: Nil" << std::endl;
	hyperThreading? std::cout << "HyperThreading Available: Yes" << std::endl: std::cout << "HyperThreading Available: No" << std::endl;
	std::cout << "# of Threads: " << nThreads << std::endl;
	smartCache? std::cout << "SmartCache Available: Yes" << std::endl: std::cout << "SmartCache Available: No" << std::endl;
	std::cout << "Cache: " << cache << " MB" << std::endl;
	std::cout << "Thermal Design Power: " << thermalDesignPower << " W" << std::endl;
	std::cout << "Socket: " << socket << std::endl;
	std::cout << std::endl;
}

CPU::~CPU() {}

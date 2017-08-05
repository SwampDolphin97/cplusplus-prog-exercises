/*
 * PCBuild.h
 * Author: suyashd95
 */

#ifndef PCBUILD_H_
#define PCBUILD_H_

class CPU;
class GPU;

class PC_Build {

public:
	void display(const CPU&, const GPU&) const;
};

#endif /* PCBUILD_H_ */

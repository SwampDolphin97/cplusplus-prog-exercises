/*
 * Answer 7.cpp
 * Author: suyashd95
 */

#include "CPUi3.h"
#include "CPUi5.h"
#include "CPUi7.h"
#include "GPU1080Ti.h"
#include "GPU1070.h"
#include "GPU1060.h"

#include "PCBuild.h"

using namespace std;

int main() {

	CPU_i3 i3;
	CPU_i5 i5;
	CPU_i7 i7;

	GPU_1060 gtx1060;
	GPU_1070 gtx1070;
	GPU_1080Ti gtx1080ti;

	PC_Build pcb;
	pcb.display(i3, gtx1060);
	pcb.display(i5, gtx1070);
	pcb.display(i7, gtx1080ti);

	return 0;
}



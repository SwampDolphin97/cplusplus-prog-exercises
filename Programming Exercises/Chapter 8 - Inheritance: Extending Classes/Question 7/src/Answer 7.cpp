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

using namespace std;

int main() {

	CPU_i3().display();
	CPU_i5().display();
	CPU_i7().display();

	GPU_1060().display();
	GPU_1070().display();
	GPU_1080Ti().display();

	return 0;
}



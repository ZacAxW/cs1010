#include "cs1010.h"
int main() {
	double h = cs1010_read_double();
	double min = cs1010_read_double();

	double t = h + min/60;
	double T = (4*t*t)/(t+2) - 20;

	cs1010_println_double(T);
	
	return 0;
}


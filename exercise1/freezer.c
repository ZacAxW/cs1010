#include "cs1010.h"
int main() {
	double t = cs1010_read_double();

	double T = (4*t*t)/(t+2) - 20;

	cs1010_println_double(T);
	
	return 0;
}


#include "cs1010.h"
int main() {
	long n = cs1010_read_long();
	long factorial = n;

	for ( int i = n-1; i >= 2; i -= 1) {
		factorial *= i;
	}
	
	cs1010_println_long(factorial);
}


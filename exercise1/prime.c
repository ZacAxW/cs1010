#include "cs1010.h"
#include <math.h>

int main() {	
	long long n = cs1010_read_long();
	long prime = 0;
	for ( long long i = 2; i < sqrt(n); i++) {
		if ( n % i == 0) {
			prime = 1;
			break;
		}
	}
	
	
	cs1010_print_long(n);
	
	if (prime == 0 || n == 1 || n == 2) {
		cs1010_println_string(" is prime.");
	} else if ( prime == 1) {
		cs1010_println_string(" is not prime.");	
	}
	
}

/* Problem #1
 * As 64-bit, cannot read greater than 9.2 x 10^18.
 * Solution #1
 * Pending. */

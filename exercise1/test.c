#include "cs1010.h"
int main() {
	long n = cs1010_read_long();
	
	long factorial(long n) {
		if (n == 0) {
			return 1;
		}
		return n * factorial( n - 1);
	}
	cs1010_println_long(n);
}

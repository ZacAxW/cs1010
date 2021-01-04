#include "cs1010.h"
/* Fibonacci
 * Number = sum of previous two numbers.
 * 1, 1, 2, 3, 5, 8, 13*/

int main() {
	long n = cs1010_read_long();
	long result = 1;
	long prevNum = 1;
	long holder = 0;
	if (n == 1 || n == 2) {
		result = 1;
	} else if (n == 3) {
		result = 2;
	} else {
		for ( int i = 2; i < n; i++) {
			holder = result;
			result += prevNum;
			prevNum = holder;
		}
	}
	cs1010_println_long(result);
}


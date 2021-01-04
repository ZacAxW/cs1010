#include "cs1010.h"
#include <math.h>
int main() {
	long binary = cs1010_read_long();
	long length =0;
	long num =0;
 	long testLength = binary;	
	
	
	while (testLength > 0) {
		testLength = testLength / 10;
		length++;
	}
	
	long assignNum = binary;
	long answer =0;	
	for (int j = 0; j < length; j++) {
		num = assignNum % 10;
		assignNum /= 10;
		answer+=pow(2,j)*num;
			
	} cs1010_println_long(answer);
}
/* 1. Count number of digits.
 * 2. Assign digits into array.
 * 3. Use power 2 to conver to decimal. */

/* PROBLEM #1
 *  By using binary in the "while" and "for" loop within the "main" function, the value of binary is updated.
 * SOLUTION #1
 * Rename the variable "binary" before running the loops. 
 
 * PROBLEM #2
 * Array delcaration and assignment not working properly as array declaration cannot be dyanmic.
 * SOLUTION #2
 * Instead of using arrays & another "for" loop, combine assigning of numbers with calution of answer into a "for" loop. */

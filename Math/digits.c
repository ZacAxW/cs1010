#include "cs1010.h"

int sum_of_digits(input); 

int main() {
	long input = cs1010_read_long();
	sum_of_digits(input);
	cs1010_println_long(sum_of_digits(input));
}

int sum_of_digits(long input) {
	
	long input_test_length = input;
	long input_length = 0;
	
	for ( input_length = 0; input_test_length > 0; input_length += 1) {
		input_test_length /= 10;
	}
	return input_length;
}


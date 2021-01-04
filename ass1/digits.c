#include "cs1010.h"

long sum_of_digits(long input); 

int main() {
	long input = cs1010_read_long();
	sum_of_digits(input);
//	cs1010_println_long(sum_of_digits(input));
//	cs1010_print_string("test");
}

long sum_of_digits(long input) {
	
	long input_test_length = input;
	long input_length = 0;
	long digit = 0;
	long output = 0;
	
	for ( input_length = 0; input_test_length > 0; input_length += 1) {
		input_test_length /= 10;
	}
	while ( input_length > 0) {
		digit = input % 10;
		output += digit;
		input_length -= 1;
	}
	cs1010_println_long(output);
	return output;

}


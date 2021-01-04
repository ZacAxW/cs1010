#include "cs1010.h"

void print_with_suffix(long n);

int main() {
	long n = cs1010_read_long();
	cs1010_print_long(n);
	print_with_suffix(n);
}
void print_with_suffix(long n) {
	if ( n % 10 == 1 && n != 11) {
		cs1010_print_string("st");
	} else if ( n % 10 == 2 && n != 12) {
		cs1010_print_string("nd");
	} else if ( n % 10 == 3 && n != 13) {
		cs1010_print_string("rd");
	} else 
		cs1010_print_string("th");
	}

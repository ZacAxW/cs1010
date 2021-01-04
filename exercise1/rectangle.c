#include "cs1010.h"
int main() {
	long width = cs1010_read_long();
	long height = cs1010_read_long();

	long horizontal = width - 2;
	
	cs1010_print_string("lt");
	for ( int i = 0; i < horizontal; i++) {
		cs1010_print_string("=");
	}
	cs1010_println_string("rt");

	
	long vertical = height - 2;

	for ( int j = 0; j < vertical; j++) {
		cs1010_print_string("l");
		for ( int k = 0; k < horizontal; k++) {
			cs1010_print_string(" ");
		}
		cs1010_println_string("l");
	}
	
	cs1010_print_string("lb");
        for ( int i = 0; i < horizontal; i++) {
                cs1010_print_string("=");
        }
        cs1010_println_string("rb");


}





/* Draw Rectangle.
 * 1. check length of sides lines betwen edges.
 * 2. do the spacings except first and last rows.
 * 3. done. */


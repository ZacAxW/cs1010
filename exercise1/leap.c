// leap year = can be /4 but if can be /100 but not /400, not leap.
#include "cs1010.h"
#include <stdbool.h>

bool is_leap_year(long year);

int main() {
	long year = cs1010_read_long();
	cs1010_print_long(year);
	if (is_leap_year(year)) {
		cs1010_print_string(" is a leap year.");
	} else {
		cs1010_print_string(" is not a leap year.");
	}
}
bool is_leap_year(long year) {
		if ( year % 4 == 0) {
		       if ( year % 100 == 0 && year % 400 != 0) {
				return false;
			} else { 	
				return true;
			}
		} else  {	
			return false;
		}
}

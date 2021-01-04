#include "cs1010.h"
#include <math.h>

int main() {
	long dollars = cs1010_read_long();
	long interest_rate = cs1010_read_long();
	long years = cs1010_read_long();

	double  earned = dollars * ( 1 - pow(( interest_rate/100),(years-1))) / (1 - (interest_rate/100));

	return 0;
}
 	cs1010_println_double(earned);
	


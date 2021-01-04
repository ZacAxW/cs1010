#include "cs1010.h"

void print_with_suffix(long n);
long number_of_days(long month, long date);

int main() {
	long month = cs1010_read_long();
	long date = cs1010_read_long();
	long n = number_of_days(month, date);
	cs1010_print_long(n);
	print_with_suffix(n);
}

long number_of_days(long month, long date) {
	long arr[12] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
	long number = 0;
	for ( int i = 0; i < month; i++)
		number += arr[i];
       return number + date;	
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

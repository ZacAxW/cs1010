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
	long days;
	if (month == 2) {
		days = 31;
	} else if (month == 3) {
		days = 59;
	} else if (month == 4) {
		days = 90;
	} else if (month == 5) {
		days = 120;
	} else if (month == 6) {
		days = 151;
	} else if (month == 7) {
		days = 181;
	} else if (month == 8) {
		days = 212;
	} else if (month == 9) {
		days = 243;
	} else if (month == 10) {
		days = 273;
	} else if (month == 11) {
		days = 304;
	} else if (month == 12) {
		days = 334;
	} else {
		days = 0;
	} 
	return days + date;
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

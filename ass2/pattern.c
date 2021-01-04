#include "cs1010.h"

int main() {
   
	long n = cs1010_read_long();
	long h = cs1010_read_long();

	long rowNum = 1;
	long cellNum = 0;
	int flag = 0;

	for( int i = 0; i < h; i++) {
		rowNum+=2;
	}

	for( int j = 0; j < n; j++) {
		cellNum+=1;
		for( int k = 2; k < cellNum/2; k++) {
			if ( cellNum % k == 0 )	{
				cs1010_println_string("Number is Not prime");
				flag = 1;
				break;
			} if (flag == 0 ) {
				cs1010_println_string("Number is prime");

		}
	} 
	
} return 0;
}

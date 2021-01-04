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
		answer+= pow(2,j) * num;
      
	} cs1010_println_long(answer);	
}
	
	
/*	long array[3] = {3,2,1};*/
	
	
/*	long array_length = cs1010_read_long();
	long array[array_length] = {0,...0};
	long result = 0;
	for ( int i = 0; i < array_length; i++) {
		array[i] = result;
		result+=2;
	}
	for ( int j = 0; j < array_length; j++) {
		cs1010_println_long(array[j]);
	}
*/
	
	

	
/*	long num2 = cs1010_read_long();
	long output =0;
	for (int i = 0; i < num2; i++) {
		output = num2 % 10;
		cs1010_print_string("This is no. ");
		cs1010_println_long(output);
		num2 /= 10;
		
	}
*/	
	
	
	
	
	
/*	long number = cs1010_read_long();
	
	long length =0;
	long testLength = number;
	long assignDigits = number;

	long result2 =0;
	result2 = number % 10;
	cs1010_println_long(result2);
	
	while ( testLength > 0) {
		testLength /= 10;
		length++;
	}
	cs1010_println_long(length);
	
	
	long result =0;
	for (long i = 0; i < length; i++) {
		result = assignDigits % 10;
		cs1010_print_long(result);
		assignDigits /= 10;
	} 
*/



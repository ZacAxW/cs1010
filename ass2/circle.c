#include "cs1010.h"
#include <math.h>

int main() {
	double r = cs1010_read_double();
    double height = 2 * r + 1;
    double width = 2 * r + 1;
    for (double i = 0; i < height; i++) {
            double y = fabs(i - r);
        for (double j = 0; j < width; j++) {
            double x = fabs(j - r);
            double d = fabs(sqrt(x*x + y*y) - r);
            if (d < 0.1) {
                cs1010_print_string("@");
            } else if (d < 0.3) {
                cs1010_print_string("O");
            } else if (d < 0.5) {
                cs1010_print_string("*");
            } else if (d < 0.7) {
                cs1010_print_string("+");
            } else {
                cs1010_print_string(" ");
            }
        }
        cs1010_println_string("");
    }
	return 0;
}

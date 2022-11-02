#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include "my_sqr_funcs.h"

void test(double expected, double actual, char test_name[]) {
	if(expected - actual < 0.000001) {
		printf("test %s succeeded, %f is %f\n", test_name, expected, actual);
	} else {
		printf("test %s failed, expected %f, got %f\n", test_name, expected, actual);
	}
}

int main() {
	test(1.414214, sqr_heron_iterative(2.0), "sqr_heron_iterative(2.0)");
	test(3.000000, sqr_heron_iterative(9.0), "sqr_heron_iterative(9.0)");
	test(6.000000, sqr_heron_iterative(36.0), "sqr_heron_iterative(36.0)");
	test(6.480741, sqr_heron_iterative(42.0), "sqr_heron_iterative(42.0)");
	test(1.414214, sqr_heron_recursive(2.0), "sqr_heron_recursive(2.0)");
	test(3.000000, sqr_heron_recursive(9.0), "sqr_heron_recursive(9.0)");
	test(6.000000, sqr_heron_recursive(36.0), "sqr_heron_recursive(36.0)");
	test(6.480741, sqr_heron_recursive(42.0), "sqr_heron_recursive(42.0)");
}

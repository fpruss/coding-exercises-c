#include <stdbool.h>
#include <math.h>
#include "my_sqr_funcs.h"

bool are_nearly_equal(double a, double b) {
	return floor(10000*a)/10000 == floor(10000*b)/10000;
}

double sqr_heron_iterative(double number) {
	double result = 1.0;
	double last_result = 0.0;
	while(!are_nearly_equal(result, last_result)) {
		last_result = result;
		result = (result + (number / result)) / 2;
	}
	return result;
}

double sqr_heron_recursive(double number) { 
	return sqr_heron_rec(number, 1.0, 0.0);
}

double sqr_heron_rec(double number, double result, double last_result) {
	if(are_nearly_equal(result, last_result)) {
		return result;	
	}
	last_result = result;
	result = (result + (number / result)) / 2;
	return sqr_heron_rec(number, result, last_result);	
}

#include <stdio.h>
#include <limits.h>
#include "safeadd.h"
const char* is_safe(int return_code);

int main() {
	printf("5 and 3 can be added safely: %s\n", is_safe(add(5, 3)));
	printf("-5 and 3 can be added safely: %s\n", is_safe(add(-5, 3)));
	printf("5 and -3 can be added safely: %s\n", is_safe(add(5, -3)));
	printf("-5 and -3 can be added safely: %s\n", is_safe(add(-5, -3)));
	printf("INT_MAX and 1 can be added safely: %s\n", is_safe(add(INT_MAX, 1)));
	printf("INT_MIN and -1 can be added safely: %s\n", is_safe(add(INT_MIN, -1)));
	printf("-1 and INT_MIN can be added safely: %s\n", is_safe(add(-1, INT_MIN)));
	printf("INT_MAX-2 and INT_MAX-10 can be added safely: %s\n", is_safe(add(INT_MAX-2, INT_MAX-10)));
	return 0;
}

int add(int op1, int op2) {
	if (op1 >= 0) { 
		if (op2 > INT_MAX - op1) {
	    		return -1;
		}
	} else { 
		if (op2 < INT_MIN - op1) {
			return -1;
		}
	}
	return 0;
}

const char* is_safe(int return_code) {
	if (return_code == 0) {
		return "Yes";
	} else {
		return "No";
	}
}

/* C for Everyone: Programming Fundamentals
	Week 2: Fundamental Types sizeof operator */

#include <stdio.h>

int main(void) {


	int a = 5, b = 7, c = 6; /*declare and initialize*/
	double average = 0.0;
	char ch = 'e';

	printf("on my system\n");
	printf("int is %lu bytes.\n", sizeof(int));
	printf("long is %lu bytes.\n", sizeof(long));
	printf("char is %lu bytes.\n", sizeof(ch));
	printf("float is %lu bytes.\n", sizeof(float));
	printf("double is %lu bytes.\n", sizeof(double));
	printf("long double is %lu bytes.\n", sizeof(long double));
	return 0;



}
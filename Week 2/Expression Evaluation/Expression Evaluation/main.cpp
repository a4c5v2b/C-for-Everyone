/* C for Everyone: Programming Fundamentals
	Week 2: Expression and evaluation */

#include <stdio.h>

int main(void) {

	int a = 5, b = 7, c = 0, d = 0; //initialize
	c = a - b;
	printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);
	c = b - a;
	printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);
	c = a / b; d = b / a; // c = 0, d = 1
	printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d); 
	c = a % b; d = b % a;  // c = 5, d = 2
	printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);
	c = -a - b; d = -b - a; // c = -12, d = -12
	printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);
	c = ++a + b++;	d += 5; // a = 6, b = 8 b = c = 5 + 7 + 1 = 13, d = -12 + 5 = -7
	printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

	return 0;
}
/* C for Everyone: Programming Fundamentals
	Week 1: Example-Marathon*/

#include <stdio.h>

int main(void) {

	int miles = 26, yards = 385;
	double kilometers;

	kilometers = 1.609 * (miles + yards / 1760.0);  // Using 1760.0 is to generate a float 
	printf("\nA marathon is %lf kilometers.\n\n", kilometers);

	return 0;




}
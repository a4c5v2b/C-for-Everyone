/* C for Everyone: Programming Fundamentals
	Week 2: Fix Dr. P's mistake */


#include<stdio.h>

#define PI 3.14159

int main(void) {

	/* The original code:
	int radius;
	printf("Enter radius: ");
	scanf_s("%d", &radius);
	printf("volume is : %d \n\n", 4 * radius * radius * radius / 3);  // As radius is int type, when it is divided by int 3
																	  //, it will not return the decimal part.
	 */

	/* The corrected code: */
	long float radius;   
	printf("Enter radius: ");
	scanf_s("%lf", &radius);
	printf("volume is : %lf \n\n", 4 * radius * radius * radius / 3);

	return 0;

}
/* C for Everyone: Structured Programming
	Week 2: Week 2 Quiz */


#include <stdio.h>


int main()
{

	// Q4 = 4.000000 
	/*
	struct point {
		double x;
		double y;
	} p1 = { 4, 4.0 };

	printf("%f\n", p1.x);
	*/

	// Q6 = 0

	

	struct point {
		double x;
		double y;
	} p1;


	struct point* ptr = &p1;
	

	printf("%f", ptr->y);

}
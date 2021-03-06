/* C for Everyone: Programming Fundamentals
	Week 3: Fix Dr. P's mistake */

/*
Make changes to the following code, and upload your edited code as a text file so that your peers can review and grade you for it.

The following program is suppose to use the sin() function in the math library and write out an input's absolute value over an interval.
So for example if sine(0.6)  is 0.564 then its absolute value is the same (0.564).  
But if sine(2.4)  is -0.675 then its absolute value is 0.675.
*/

#include<stdio.h>
#include<math.h> /* has  sin(), abs(), and fabs() */
int main(void)
{	
	/* Original code:
	double interval;
	int i;
	for (i = 0; i < 30; i++)
	{
		interval = i / 10.0;
		printf("sin(% lf) = % lf \t", interval, abs(sin(interval)));
	}


	printf("\n++++++ + \n");

	*/

	/* Corrected code: The abs should only be used for int type, for float type, fabs should be used instead.*/
	double interval;
	int i;
	for (i = 0; i < 30; i++)
	{
		interval = i / 10.0;
		printf("sin(% lf) = % lf \t", interval, fabs(sin(interval)));
	}


	printf("\n++++++ + \n");
	return 0;
}
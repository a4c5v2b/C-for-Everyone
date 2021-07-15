/* C for Everyone: Structured Programming
	Week 1: Assert code */


/* Program 1

#define NDEBUG // goes before <assert.h>
#include <assert.h>
#include <stdio.h>
#include <ctype.h>

int main()
{

	assert(0);
	printf("My program runs\n");
	return 0;


}

*/

//#define NDEBUG
#include <assert.h>
#include <stdio.h>

int main()
{
	double x, y;
	while (1)
	{
		printf("Read in 2 floats: \n");
		scanf_s("%lf %lf", &x, &y);
		assert(y != 0);
		printf("when divided x/y = %lf\n", x / y);
	}

	return 0;


}
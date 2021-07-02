/* C for Everyone: Programming Fundamentals
	Week 2: Declaration */

# include<stdio.h>

int main(void) {
	int a = 5, b = 7, c = 6; /* declare and initialize*/
	double average = 0.0; /*good preactice to initialize variables*/

	printf("a=%d, b=%d,c=%d\n", a, b, c);
	average = (a + b + c) / 3.0; /* conversion if 3 */
	printf("average = %lf\n", average);
	return 0;

}
/* C for Everyone: Programming Fundamentals
	Week 3: Cond-comma-ops quiz */


# include <stdio.h>

int main() {
	
	int i = 1, j = 2;
	int n = 0;
	//int n = (i < j); /* Q1: n = 1 */
	//int n = (i == j) ? 4 : (i < j) ? 3 : 5; /* Q2: n = 3*/
	//int n = (i, j); /* Q3: n = 2*/
	n = i, j+1; /* Q4: n = 1*/
	//n = (i < j) ? 4 : 6; /* Q5: n = 4*/


	printf("\nn = %d", n);





	return 0;

}

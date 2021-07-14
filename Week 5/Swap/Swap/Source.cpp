/* C for Everyone: Programming Fundamentals
	Week 5: Call-by-reference simulated */

#include<stdio.h>

void swap_call_by_value(int i, int j)  // Call by value won't change the value
{
	int temp = i;
	i = j; j = temp;
}

void swap(int *i, int *j)
{
	int temp = *i;
	*i = *j;
	*j = temp;
}

int main()
{

	int a = 5;
	int b = 10;
	printf("Before swapping, a = %d and b = %d", a, b);
	printf("\n\n");
	swap(&a, &b);
	printf("After swapping, a = %d and b = %d", a, b);
	
	return 0;


}

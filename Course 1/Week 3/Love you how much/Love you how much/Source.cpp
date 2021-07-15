/* C for Everyone: Programming Fundamentals
	Week 3: while-code-example */


#include <stdio.h>

int main(void) {

	int repeat = 0;
	printf("How strong is your love 1-10? : ");
	scanf_s("%d", &repeat);
	printf("\nI love you very");
	while (repeat > 0)
	{

		printf("\n very");
		repeat--;

	};
	printf(" much.\n\n");
	return 0;

}
/* C for Everyone: Programming Fundamentals
	Week 3: Logical operators and short circuit evaluation */

# include <stdio.h>
int main() {

	int outside, weather;
	printf("\nEnter if outside 1 true 0 false:");
	scanf_s("%d", &outside);
	printf("\nEnter if rain 1 true 0 false:");
	scanf_s("%d", &weather);
	if (outside && weather)
		printf("\nPlease use an umbrella.\n");
	else
		printf("\nDress normally.\n\n");
	return 0;


}

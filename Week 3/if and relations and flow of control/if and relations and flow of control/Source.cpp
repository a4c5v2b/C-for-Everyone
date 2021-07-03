/* C for Everyone: Programming Fundamentals
	Week 3: The conditional statement if and if-else */

#include <stdio.h>
int main() {

	int speed;
	printf("\nEnter your speed as an integer:");
	scanf_s("%d", &speed);
	if (speed < 65)
		printf("\nNo speeding Ticket\n\n");
	else
		printf("\nSpeeding Ticket\n\n");
	return 0;


}


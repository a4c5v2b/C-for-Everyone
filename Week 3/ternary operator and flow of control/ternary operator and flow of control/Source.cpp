/* C for Everyone: Programming Fundamentals
	Week 3: ternary operator and flow of control */

#include <stdio.h>
int main() {
	int speed;
	printf("\nEnter your speed as an integer: ");
	scanf_s("%d", &speed);
	speed = (speed <= 65) ? (65) : (speed <= 70) ? (70) : (90);
	switch (speed)
	{
	case 65: printf("\nNo speeding Ticket\n\n"); break;
	case 70: printf("\nSpeeding Ticket\n\n"); break;
	case 90: printf("\nExpensive speeding Ticket\n\n"); break;
	default: printf("\nIncorrect speed\n\n"); //unneeded
	}

	return 0;
}



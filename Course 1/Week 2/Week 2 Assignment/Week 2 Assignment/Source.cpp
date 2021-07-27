/* 
Write a program that can give the sine of a value between 0 and 1 (non inclusive). 
You will be graded based on whether the program can output a value in the correct range and whether your code is well-formatted and logically correct.
*/

#include <stdio.h>
#include <Math.h>

double sine_function(double input)
{
	return sin(input); // In radian
}

int main()
{

	double input = 0.0;
	double output = 0.0;
	int exit = 1;

	while (exit == 1)
	{
		printf("What is your input: ");
		scanf_s("%lf", &input);
		if ((input >= 0) && (input <= 1))
		{
			output = sine_function(input);
			printf("The sine value of your output is: %lf\n\n", output);
			exit = 0;


		}
		else
		{
			printf("The sine value of your output is outside the range, please input again!\n");
		}
	}

	



	return 0;

}

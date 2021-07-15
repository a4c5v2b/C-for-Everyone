/* C for Everyone: Programming Fundamentals
	Week 1: Example-Circle code*/


# include <stdio.h>

# define PI 3.14159

int main()
{
	double area = 0.0, radius = 0.0;
	printf("Enter radius: ");
	scanf_s("%lf",&radius);  //%lf = enter as a long float, &radius is the address of radius
	area = PI * radius * radius;
	printf("radius of %lf meters; area is %lf sq. meters\n", radius, area);
	return 0;


}
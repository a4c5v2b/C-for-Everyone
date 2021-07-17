/* C for Everyone: Structured Programming
	Week 2 Assignment_Q2 */


/* 
* Write a struct that has a member that is the name of a business department: HR, Sales, Research, Software, and Executive (use enums for the 4 departments).
  A second member that is an annual salary as an int. A third member that is a social security number(unsigned). 
  Generate 10 employees with different social security numbers. Invent a salary generator for each department 
  (use some base salary for the department and add in a randomly generated offset).  Print out the 10 employees and their values to the screen-one line at a time.
  */


#include <stdio.h>
#include <stdlib.h>



typedef enum dept { HR, Sales, Research, Software, Executive } dept;


typedef struct member {
	dept d;
	int salary;
	unsigned number;
}member;


member member_generator(int i)
{	
	member m;
	srand(i);
	unsigned number = rand() % 1000;
	m.d = dept(rand() % 5);
	m.number = number;
	
	return m;

}

void salary_generator(member* m)
{
	switch (m->d)
	{
	case(HR):
		m->salary = 10000;
		break;

	case(Sales):
		m->salary = 12000;
		break;

	case(Research):
		m->salary = 20000;
		break;

	case(Software):
		m->salary = 15000;
		break;

	case(Executive):
		m->salary = 18000;
		break;
	}

}


void print_info(member m)
{
	
	switch (m.d)
	{
	case(HR):
		printf("Dept: HR\t");
		break;

	case(Sales):
		printf("Dept: Sales\t");
		break;

	case(Research):
		printf("Dept: Research\t");
		break;

	case(Software):
		printf("Dept: Software\t");
		break;

	case(Executive):
		printf("Dept: Executive\t");
		break;
	}

	printf("Salary: %d\tSecurity Number: %u", m.salary, m.number);

	printf("\n\n");

	

}


int main(void)
{

	for (int i = 0; i < 10; i++)
	{
		member m;
		m = member_generator(i);
		salary_generator(&m);
		print_info(m);

	}

	return 0;

}

/* C for Everyone: Structured Programming
	Week 2 Assignment_Q1 */


/*
Write enumerated types that supports dates¡Xsuch as december 12. 
Then add a function that produces a next day. 
So nextday(date) of december 12 is december 13. Also write a function printdate(date) that prints a date legibly. 
The function can assume that February has 28 days and it most know how many days are in each month. 
Use a struct with two members; one is the month and the second is the day of the month¡Xan int (or short). */

#include <stdio.h>


typedef enum month { Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sept, Oct, Nov, Dec} month;
typedef struct date {
	month m;
	int day;
} date;


date nextday(date* d)
{
	static date next;
	switch (d->m)
	{
	case Jan:
		if (d->day < 1 || d->day > 31) // Call by reference style
		{
			printf("Wrong input!\nThe day you chose doesn't match the month.\n");
		}
		
		next.day = (d->day+1); // Call by variable style
		if (next.day > 31)
		{
			next.m = Feb;
			next.day = 1;
		}
		return next;
		break;
	case Feb:
		if (d->day < 1 || d->day > 28) // Call by reference style
		{
			printf("Wrong input!\nThe day you chose doesn't match the month.\n");
		}
		next.day = (d->day + 1); // Call by variable style
		if (next.day > 28)
		{
			next.m = Mar;
			next.day = 1;
		}
		return next;
		break;

	case Mar:
		if (d->day < 1 || d->day > 31) // Call by reference style
		{
			printf("Wrong input!\nThe day you chose doesn't match the month.\n");
		}
		next.day = (d->day + 1); // Call by variable style
		if (next.day > 31)
		{
			next.m = Apr;
			next.day = 1;
		}
		return next;
		break;

	case Apr:
		if (d->day < 1 || d->day > 30) // Call by reference style
		{
			printf("Wrong input!\nThe day you chose doesn't match the month.\n");
		}
		next.day = (d->day + 1); // Call by variable style
		if (next.day > 30)
		{
			next.m = May;
			next.day = 1;
		}
		return next;
		break;

	case May:
		if (d->day < 1 || d->day > 31) // Call by reference style
		{
			printf("Wrong input!\nThe day you chose doesn't match the month.\n");
		}
		next.day = (d->day + 1); // Call by variable style
		if (next.day > 31)
		{
			next.m = Jun;
			next.day = 1;
		}
		return next;
		break;

	case Jun:
		if (d->day < 1 || d->day > 30) // Call by reference style
		{
			printf("Wrong input!\nThe day you chose doesn't match the month.\n");
		}
		next.day = (d->day + 1); // Call by variable style
		if (next.day > 30)
		{
			next.m = Jul;
			next.day = 1;
		}
		return next;
		break;

	case Jul:
		if (d->day < 1 || d->day > 31) // Call by reference style
		{
			printf("Wrong input!\nThe day you chose doesn't match the month.\n");
		}
		next.day = (d->day + 1); // Call by variable style
		if (next.day > 31)
		{
			next.m = Aug;
			next.day = 1;
		}
		return next;
		break;

	case Aug:
		if (d->day < 1 || d->day > 31) // Call by reference style
		{
			printf("Wrong input!\nThe day you chose doesn't match the month.\n");
		}
		next.day = (d->day + 1); // Call by variable style
		if (next.day > 31)
		{
			next.m = Sept;
			next.day = 1;
		}
		return next;
		break;

	case Sept:
		if (d->day < 1 || d->day > 30) // Call by reference style
		{
			printf("Wrong input!\nThe day you chose doesn't match the month.\n");
		}
		next.day = (d->day + 1); // Call by variable style
		if (next.day > 30)
		{
			next.m = Oct;
			next.day = 1;
		}
		return next;
		break;

	case Oct:
		if (d->day < 1 || d->day > 31) // Call by reference style
		{
			printf("Wrong input!\nThe day you chose doesn't match the month.\n");
		}
		next.day = (d->day + 1); // Call by variable style
		if (next.day > 31)
		{
			next.m = Nov;
			next.day = 1;
		}
		return next;
		break;

	case Nov:
		if (d->day < 1 || d->day > 30) // Call by reference style
		{
			printf("Wrong input!\nThe day you chose doesn't match the month.\n");
		}
		next.day = (d->day + 1);// Call by variable style
		if (next.day > 30)
		{
			next.m = Dec;
			next.day = 1;
		}
		return next;
		break;

	case Dec:
		if (d->day < 1 || d->day > 31) // Call by reference style
		{
			printf("Wrong input!\nThe day you chose doesn't match the month.\n");
		}
		next.day = (d->day + 1); // Call by variable style
		if (next.day > 31)
		{
			next.m = Jan;
			next.day = 1;
			
		}
		return next;
	
	return next;

	}

	
	
}

void printdate(date* d)
{
	switch (d -> m)
	{
	case Jan:
		if (d -> day < 1 || d -> day > 31) // Call by reference style
		{
			printf("Wrong input!\nThe day you chose doesn't match the month.\n");
		}
		else
		{
			printf("%s\t%d\n", "Jan", d -> day);

		}
		break;
	
	case Feb:
		if (d -> day < 1 || d -> day > 28) // Call by reference style
		{
			printf("Wrong input!\nThe day you chose doesn't match the month.\n");
		}
		
		else
		{
			printf("%s\t%d\n", "Feb", d -> day);

		}
		break;

	

	case Mar:
		if (d->day < 1 || d->day > 31) // Call by reference style
		{
			printf("Wrong input!\nThe day you chose doesn't match the month.\n");
		}
		else
		{
			printf("%s\t%d\n", "Mar", d->day);

		}
		break;

	case Apr:
		if (d->day < 1 || d->day > 30) // Call by reference style
		{
			printf("Wrong input!\nThe day you chose doesn't match the month.\n");
		}
		else
		{
			printf("%s\t%d\n", "Apr", d->day);

		}
		break;

	case May:
		if (d->day < 1 || d->day > 31) // Call by reference style
		{
			printf("Wrong input!\nThe day you chose doesn't match the month.\n");
		}
		else
		{
			printf("%s\t%d\n", "May", d->day);

		}

		break;


	case Jun:
		if (d->day < 1 || d->day > 30) // Call by reference style
		{
			printf("Wrong input!\nThe day you chose doesn't match the month.\n");
		}
		else
		{
			printf("%s\t%d\n", "Jun", d->day);

		}
		break;

	case Jul:
		if (d->day < 1 || d->day > 31) // Call by reference style
		{
			printf("Wrong input!\nThe day you chose doesn't match the month.\n");
		}
		else
		{
			printf("%s\t%d\n", "Jul", d->day);

		}
		break;

	case Aug:
		if (d->day < 1 || d->day > 31) // Call by reference style
		{
			printf("Wrong input!\nThe day you chose doesn't match the month.\n");
		}
		else
		{
			printf("%s\t%d\n", "Aug", d->day);

		}
		break;

	case Sept:
		if (d->day < 1 || d->day > 30) // Call by reference style
		{
			printf("Wrong input!\nThe day you chose doesn't match the month.\n");
		}
		else
		{
			printf("%s\t%d\n", "Aug", d->day);

		}
		break;


	case Oct:
		if (d->day < 1 || d->day > 31) // Call by reference style
		{
			printf("Wrong input!\nThe day you chose doesn't match the month.\n");
		}
		else
		{
			printf("%s\t%d\n", "Oct", d->day);

		}
		break;

	case Nov:
		if (d->day < 1 || d->day > 30) // Call by reference style
		{
			printf("Wrong input!\nThe day you chose doesn't match the month.\n");
		}
		else
		{
			printf("%s\t%d\n", "Nov", d->day);

		}
		break;

	case Dec:
		if (d->day < 1 || d->day > 31) // Call by reference style
		{
			printf("Wrong input!\nThe day you chose doesn't match the month.\n");
		}
		else
		{
			printf("%s\t%d\n", "Dec", d->day);

		}
		break;
	


	}



}


int main(void)
{

	date n;

	date d1;
	d1.day = 28;
	d1.m = Feb;
	printdate(&d1);
	n = nextday(&d1);
	printdate(&n);
	

	date d2;
	d2.day = 14;
	d2.m = Mar;
	printdate(&d2);
	n = nextday(&d2);
	printdate(&n);


	date d3;
	d3.day = 31;
	d3.m = Oct;
	printdate(&d3);
	n = nextday(&d3);
	printdate(&n);

	date d4;
	d4.day = 31;
	d4.m = Dec;
	printdate(&d4);
	n = nextday(&d4);
	printdate(&n);


	return 0;


}
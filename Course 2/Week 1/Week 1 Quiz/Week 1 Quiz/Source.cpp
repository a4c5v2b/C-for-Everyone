/* C for Everyone: Structured Programming
	Week 1: Week 1 Quiz */


#include <stdio.h>
#include <assert.h>


/* Q1 = 0, Q4 = 1, Q5 = 2 */

/*
enum fuzzy_logic { false, true, maybe };
//enum fuzzy_logic_2 { false, maybe, true };
typedef enum fuzzy_logic fuzzy_logic;
//typedef enum fuzzy_logic_2 fuzzy_logic_2;

int main()
{
	fuzzy_logic Q1 = false;
	fuzzy_logic Q4 = true;
	//fuzzy_logic_2 Q5 = true;
	printf("For Q1: false = %d\n",Q1); // false = 0
	printf("For Q4: true = %d", Q4); // true = 1
	//printf("For Q5: true = %d", Q5); // true = 2



	return 0;


}
*/


/* Q2 = 0,  Q8 = 3, Q9 = 1*/


enum month { jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec };

enum month next_month(enum month m)
{
	//return((m + 1) % 12); //Q2
	//return(m); //Q8
	return((m + 1) % 12); // Q9
}

int main()
{
	

	//printf("%u\n", next_month(dec)); //Q2
	//printf("%u\n", next_month(apr)); //Q8
	printf("%u\n", next_month(dec + 1)); // Q9

	return 0;


}






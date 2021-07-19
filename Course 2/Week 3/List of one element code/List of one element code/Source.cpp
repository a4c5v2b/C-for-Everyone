/* C for Everyone: Structured Programming
	Week 3: List of one element code */

#include <stdio.h>
#include<stdlib.h>
#include<ctype.h>

typedef struct list {
	int data;
	struct list* next;
} list;

int is_empty(const list* l)
{
	return (l == NULL);
}

void print_list(list* h, char* title)
{
	printf("%s\n", title);
	while (h != NULL)
	{
		printf("%d: ", h->data);
		h = h->next;
	}
}


void print_list_recursion(list* h, char* title, int print)
{	
	if (print == 1)
	{
		printf("%s\n", title);
		print = 0;
	}
	if (h != NULL)
	{
		printf("%d: ", h->data);
		print_list_recursion(h->next,title, print);
	}

}

int main()
{
	list list_of_int;
	list* head = NULL;
	head = malloc(sizeof(list));
	printf("sizeof(list) = %lu\n", sizeof(list)); // unsigned long
	head->data = 5;
	head->next = NULL;
	//print_list(head, "single element list");
	print_list_recursion(head, "single element list",1);
	printf("\n\n");

	return 0;
}


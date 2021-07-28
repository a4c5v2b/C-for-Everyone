/* C for Everyone: Programming Fundamentals
	Week 5: Assignment */

#include <stdio.h>

#include <stdlib.h>

#include <malloc.h>

/*
int average(int a[], int size)
{
	int sum = 0;
	int i;
	for (i = 0; i < size; i++)
	{
		sum += a[i];

	}

	return sum / size;

}
*/


void read_data(FILE* ptr, int d[], int* size) // We need pointer but not int size as we need to change the array globally.
{
    *size = 0;
    while (fscanf(ptr, "%d", &d[*size]) == 1)  // if fscanf not work, returns 0. Otherwise, returns 1, write the pointer into the address of array d[size]
        (*size)++;

}




void print_data(int d[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d\t", d[i]);
        if ((i + 1) % 10 == 0)
        {
            printf("\n");
        }
    }
}


double weight(int d[],int size)
{   
    double sum = 0.0;
    for (int i = 0; i < size; i++)
    {
        sum += d[i];
    }
    
    return sum/size;

}


int main()

{   
    int data[10000];
    int sz = 10;
    FILE* ifp;
    ifp = fopen("D:/Codework/C-for-Everyone/Course 1/Week 5/Assignment/data.txt", "r");
    read_data(ifp, data, &sz);
    printf("The %d original weights are:\n", sz);
    print_data(data, sz);
    printf("The average weights are %lf:\n", weight(data, sz));

    return 0;

}
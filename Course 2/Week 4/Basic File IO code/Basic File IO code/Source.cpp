/* C for Everyone: Structured Programming
	Week 4: Basic File IO code */


#include <stdio.h>

#define MAX_HW 20 // The number of homework score is max. 20

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


double average(int d[], int size)
{
	int i;
	double avg = 0.0;

	for (i = 0; i < size; i++)
	{
		avg += d[i];
	}

	return (avg / size);

}



int main()
{
	int i, sz = MAX_HW;
	FILE* ifp;
	int data[MAX_HW] = { 100,0 };

	ifp = fopen("D:/Codework/C-for-Everyone/Course 2/Week 4/Basic File IO code/myhw.txt", "r");
	//ifp = fopen("C:/Users/a4c5v/Desktop/Github/C for Everyone/Course 2/Week 4/Basic File IO code/myhw.txt", "r");
	read_data(ifp, data, &sz);
	printf("my %d homework scores are:", sz);
	print_data(data, sz);
	printf("\n average score was %10f", average(data, sz));
	printf("\n\n");
	fclose(ifp); // exit leads to close - so not strictly needed
	return 0;

}
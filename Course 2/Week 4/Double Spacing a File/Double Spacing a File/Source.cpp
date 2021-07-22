/* C for Everyone: Structured Programming
	Week 4: Double Spacing a File */

#include <stdio.h>
#include <stdlib.h>  // need a function to exit => exit()

void print_file(FILE* fptr)
{
	int c;
	rewind(fptr);  // make sure we are at the beginning of the file
	while ((c = getc(fptr)) != EOF) // getc() get the char from the file
	{
		putc(c, stdout);   // Put the char out of the screen
	}
}

void double_space(FILE* ifp, FILE* ofp)
{
	int c;
	rewind(ifp);
	while ((c = getc(ifp)) != EOF)
	{
		putc(c, ofp); // Put the char into the output file
		//putchar(c);
		if (c == '\n')	// If the char is a new line
		{
			putc('\n', ofp);  // add a second line line into the output file
		}

	}

}


int main(int argc, char *argv[]) // char *argv[] = char **argv, [] is same as a pointer
{

	FILE* ifp, * ofp;
	if (argc != 3)
	{
		printf("Need executable input file output file\n");
		exit(1);
	}

	ifp = fopen(argv[1], "r+"); //read the input file
	ofp = fopen(argv[2], "w+"); //write the output file 
	printf("my %s file as read is \n\n", argv[1]); 
	print_file(ifp);
	printf("\n\n");
	double_space(ifp, ofp);
	printf("my %s file double spaced is \n\n", argv[2]);
	print_file(ofp);
	printf("\n\n");
	fclose(ifp);
	fclose(ofp);

	return 0;


}
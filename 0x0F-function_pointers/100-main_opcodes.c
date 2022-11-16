#include <stdlib.h>
#include <stdio.h>

/**
  *print_opcodes -print opcode
  *@a: adderess of main function
  *@n: number of bytes to print
  *Return: void
  */
void print_opcodes(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", a[i]);

		if (i < n -1)
			printf(" ");
	}
	printf("\n");
}
/**
  *main - print opcodes
  *@argc: number of arguments
  *@argv: array of pointers
  */
int main(int argc, char **argv)
{
	int n;

	if( argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[i]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, n);
	return (0);
}


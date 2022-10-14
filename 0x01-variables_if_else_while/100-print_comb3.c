#include <stdio.h>
#include <stdlib.h>
/**
  *main - Entry
  *Return: Always 0
  */
int main(void)
{
	int m;

	int j;

	for (m = 0; m < 10; m++)
	{
		for (j = m+1; j < 10; j++)
		{
		putchar('0' + m);

		putchar('0' + j);

		if (m == 8 && j == 9)
		{
			break;
		}
		putchar(',');

		putchar('\t');

	}
	}
	putchar('\n');
	return (0);
}

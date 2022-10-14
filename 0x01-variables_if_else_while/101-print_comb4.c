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

	int i;

	for (m = 0; m < 10; m++)
	{
		for (j = m + 1; j < 10; j++)
		{
			for (i = j + 1; i < 10; i++)
			{
		putchar('0' + m);

		putchar('0' + j);

		putchar('0' + i);

		if (m == 7 && j == 8 && i == 9)
		{
			break;
		}
		putchar(',');

		putchar(' ');

	}
	}
	putchar('\n');
	return (0);
}

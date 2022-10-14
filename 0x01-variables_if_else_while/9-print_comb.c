#include <stdio.h>
#include <stdlib.h>
/**
  *main - Entry
  *Return: Always 0
  */
int main(void)
{
	int m;

	for (m = 0; m < 10; m++)
	{
		putchar('0' + m);

		if (m == 9)
		{
			break;
		}
		putchar(',');

		putchar(' ');

	}
	putchar('\n');

	return (0);
}

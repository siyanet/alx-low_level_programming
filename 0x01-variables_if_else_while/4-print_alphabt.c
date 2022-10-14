#include <stdio.h>
#include <stdlib.h>
/**
  * main - Entry
  *Return: Always 0
  */
int main(void)
{
	int d;

	for (d = 97; d <= 122; d++)
	{
		if (d == 101 || d == 113)
		{
			continue;
		}
		else
		{
		char c = (char)d;

		putchar(c);
		}
	}
	putchar('\n');

	return (0);
}

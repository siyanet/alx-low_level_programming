#include <stdio.h>
#include <stdlib.h>
/**
  * main - Entry
  *Return: Always 0
  */
int main(void)
{
	int d;

	char c;

	for (d = 97; d <= 122; d++)
	{
		c = (char)d;

		putchar(c);

	}
	putchar('\n');

	return (0);
}

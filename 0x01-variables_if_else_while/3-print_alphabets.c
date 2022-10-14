#include <stdio.h>
#include <stdlib.h>
/**
  * main - Entry
  *Return: Always 0
  */
int main(void)
{
	int d;

	int c;

	char p;

	char e;

	for (d = 97; d <= 122; d++)
	{
		p = (char)d;

		putchar(p);
	}
	for (c = 65; c <= 90; c++)
	{
		e = (char)c;

		putchar(e);
	}
	putchar('\n');

	return (0);
}

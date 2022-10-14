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

	for (d = 65; d <= 90; d++)
	{
		char p = (char)d;

		putchar(p);

	}
	for (c = 97; c <=122; c++)
	{
		char e = (char)c;

		putchar(e);

	}
	putchar('\n');

	return (0);
}

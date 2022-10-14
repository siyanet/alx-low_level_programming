#include <stdio.h>
#include <stdlib.h>
/**
  * main - Entry
  *Return: Always 0
  */
int main(void)
{
	int d;

	for (d = 122; d <= 97; d++)
	{
		char c = (char)d;

		putchar(c);

	}
	putchar('\n');

	return (0);
}

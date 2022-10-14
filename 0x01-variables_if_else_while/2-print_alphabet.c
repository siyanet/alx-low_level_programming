#include <stdio.h>
#include <stdlib.h>
/**
  * main - Entry
  *Return: Always 0
  */
int main(void)
{
	for (int d = 97; d <= 122; d++)
	{
		char c = (char)d;

		putchar(c);

	}
	putchar('\n');

	return (0);
}

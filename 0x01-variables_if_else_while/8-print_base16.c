#include <stdio.h>
#include <stdlib.h>
/**
  *main - Entry
  *Return: Always 0
  */
int main(void)
{
	int m;

	char i;

	for (m = 0; m < 10; m++)
	{
		putchar('0' + m);

	}
	for (i = 'a'; i < 'g'; i++)
	{
		putchar(i);

	}
	putchar('\n');

	return (0);
}
